/**
 * @file Giovi grammar for tree-sitter
 * @author Simone Vicinanza <simonvic.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const UNDERSCORES = repeat1('_');
const NON_ZERO_DIGIT = token(/[1-9]/);

const DIGIT = token(choice('0', NON_ZERO_DIGIT));
const DIGIT_OR_UNDERSCORE = token(choice(DIGIT, '_'));
const DIGITS_AND_UNDERSCORES = token(repeat1(DIGIT_OR_UNDERSCORE));
const DIGITS = token(seq(DIGIT, optional(seq(optional(DIGITS_AND_UNDERSCORES), DIGIT))));

const HEX_DIGIT = token(/[0-9a-fA-F]/);
const HEX_DIGIT_OR_UNDERSCORE = token(choice(HEX_DIGIT, '_'));
const HEX_DIGITS_AND_UNDERSCORES = token(repeat1(HEX_DIGIT_OR_UNDERSCORE));
const HEX_DIGITS = token(seq(HEX_DIGIT, optional(seq(optional(HEX_DIGITS_AND_UNDERSCORES), HEX_DIGIT))));

const OCTAL_DIGIT = token(/[0-7]/);
const OCTAL_DIGIT_OR_UNDERSCORE = token(choice(OCTAL_DIGIT, '_'));
const OCTAL_DIGITS_AND_UNDERSCORES = token(repeat1(OCTAL_DIGIT_OR_UNDERSCORE));
const OCTAL_DIGITS = token(seq(OCTAL_DIGIT, optional(seq(optional(OCTAL_DIGITS_AND_UNDERSCORES), OCTAL_DIGIT))));

const BINARY_DIGIT = token(/[01]/);
const BINARY_DIGIT_OR_UNDERSCORE = token(choice(BINARY_DIGIT, '_'));
const BINARY_DIGITS_AND_UNDERSCORES = token(repeat1(BINARY_DIGIT_OR_UNDERSCORE));
const BINARY_DIGITS = token(seq(BINARY_DIGIT, optional(seq(optional(BINARY_DIGITS_AND_UNDERSCORES), BINARY_DIGIT))));

const NUMERAL_DECIMAL = token(choice(
  '0',
  seq(NON_ZERO_DIGIT, choice(optional(DIGITS), seq(UNDERSCORES, DIGITS)))
));
const NUMERAL_HEX = token(seq('0x', HEX_DIGITS));
const NUMERAL_OCTAL = token(seq('0o', OCTAL_DIGITS));
const NUMERAL_BINARY = token(seq('0b', BINARY_DIGITS));

const SIGNED_DIGITS = seq(optional(choice('+', '-')), DIGITS);
const EXPONENT_PART = seq(/[eE]/, SIGNED_DIGITS);
const HEX_SIGNIFICAND = choice(seq(NUMERAL_HEX, optional('.')), seq('0x', optional(HEX_DIGITS), '.', HEX_DIGITS));
const BINARY_EXPONENT = seq('p', SIGNED_DIGITS);

const LITERAL_REAL_DECIMAL = token(choice(
  seq(DIGITS, '.', DIGITS, optional(EXPONENT_PART), optional('r')),
  seq(DIGITS, EXPONENT_PART, optional('r')),
  seq(DIGITS, 'r'),
));
const LITERAL_REAL_HEX = token(seq(HEX_SIGNIFICAND, BINARY_EXPONENT, optional('r')));

const ESCAPE_CHARACTER = token(seq('\\', /[btnfrs"'\\$]/))
const ESCAPE_UNICODE = token(seq('\\u', HEX_DIGIT, HEX_DIGIT, HEX_DIGIT, HEX_DIGIT));
const ESCAPE_SEQUENCE = token(choice(ESCAPE_CHARACTER, ESCAPE_UNICODE));

const LITERAL_TEXT = token(seq('"', repeat(choice(/[^"\\\r\n]/, ESCAPE_SEQUENCE)), '"'));
const LITERAL_TEXT_BLOCK = token(seq('"{', repeat(choice(/[^\\]/, ESCAPE_SEQUENCE)), '}"'));
const LITERAL_EXACT_TEXT = token(seq('\'', repeat(choice(/[^'\\\r\n]/, ESCAPE_SEQUENCE)), '\''));
const LITERAL_EXACT_TEXT_BLOCK = token(seq('\'{', repeat(choice(/[^\\]/, ESCAPE_SEQUENCE)), '}\''));

const LETTER_OR_DIGIT_OR_UNDERSCORE = token(choice(/[a-zA-Z]/, DIGIT, '_'));
const IDENTIFIER = token(seq(/[a-z]/, repeat(LETTER_OR_DIGIT_OR_UNDERSCORE)));
const ALLUPPERCASE_IDENTIFIER = token(seq(/[A-Z]/, repeat(choice(/[A-Z]/, DIGIT, '_'))));
const UPPERCASE_IDENTIFIER = token(seq(/[A-Z]/, repeat(LETTER_OR_DIGIT_OR_UNDERSCORE)));

const REDIR_LTR = token('->');
const REDIR_RTL = token('<-');
const REDIR_OP_LTR = choice(REDIR_LTR, '->+', '->-', '->*', '->/');
const REDIR_OP_RTL = choice(REDIR_RTL, '+<-', '-<-', '*<-', '/<-');

module.exports = grammar({
  name: "giovi",
  rules: {
    program: $ => repeat($.statement),
    block: $ => seq('{', repeat($.statement), '}'),

    statement: $ => choice(
      seq($.statement, ';'),
      $.ifStatement,
      $.switchStatement,
      $.repeatStatement,
      $.forStatement,
      $.skipStatement,
      $.breakStatement,
      $.redirection,
      $.constantDeclaration,
      $.varDeclaration,
      $.functionDeclaration,
      $.returnStatement,
      $.functionCall,
    ),

    _statementOrBlock: $ => prec.left(choice(
      $.statement,
      $.block
    )),

    functionDeclaration: $ => prec(1, seq(
      $.identifier, '(', optional($.formalParameters), ')',
      optional(seq('=>', field("returnType", $.type))),
      field("body", $.block)
    )),

    formalParameters: $ => seq(
      $.formalParameter, repeat(seq(',', $.formalParameter)), optional(',')
    ),

    formalParameter: $ => seq(
      $.identifier, $.type, optional($.defaultDefinition)
    ),

    returnStatement: $ => prec.right(choice(
      seq('=>', $.expression),
      seq('return', optional($.expression))
    )),

    functionCall: $ => seq(
      $.expression, '(', optional($.functionCallParameters), ')'
    ),

    functionCallParameters: $ => seq(
      $.functionCallParameter, repeat(seq(',', $.functionCallParameter)), optional(',')
    ),

    functionCallParameter: $ => seq(optional(seq($.identifier, ':')), $.expression),

    ifStatement: $ => prec.right(seq(
      'if', field('condition', $.expression), 'do', field('body', $._statementOrBlock),
      optional(seq('else', field('elseBody', $._statementOrBlock)))
    )),

    switchStatement: $ => prec.right(seq(
      'if', field('subject', $.expression), $.switchBlock,
      optional(seq('else', field('elseBody', $._statementOrBlock)))
    )),

    switchBlock: $ => seq('{', repeat1($.switchLabel), '}'),
    switchLabel: $ => seq(field("case", $.caseMatch), 'do', field("body", $._statementOrBlock)),

    caseMatch: $ => prec.left(1, choice(
      seq('{', field("case", $.caseMatch), '}'),
      seq($.caseMatch, field("bop", choice('and', '&', 'or', '|')), $.caseMatch),
      seq($.caseMatch, 'when', field("guard", $.expression)),
      seq(choice('<', '<=', '>=', '>', '=', '!=', 'and', '&', 'or', '|'), $.expression),
      seq(optional('not'), choice('in', '=~', '~='), $.expression),
      seq('is', optional(choice('not', $.identifier)), $.type),
    )),

    repeatStatement: $ => seq(
      'repeat', optional(field("condition", seq('if', $.expression))),
      field("body", $._statementOrBlock)
    ),

    forStatement: $ => seq(
      'for', $.iterator, 'in', $.iterated, 'do',
      field("body", $._statementOrBlock)
    ),

    iterator: $ => prec.left(choice(
      $.iteratorUnary,
      $.iteratorMap,
      $.iteratorAggregate,
      $.literalPlaceholder,
    )),

    iteratorUnary: $ => seq($.identifier, optional($.type)),

    iteratorMap: $ => prec.left(choice(
      seq('[', field("key", $.iterator), ':', field("val", $.iterator), ']'),
      seq(field("key", $.iterator), ':', field("val", $.iterator)),
    )),

    iteratorAggregate: $ => seq(
      optional(field("whole", $.iteratorUnary)),
      '<',
      repeat1(seq($.iterator, optional(','))),
      '>',
    ),

    iterated: $ => choice(
      $.range,
      $.expression,
    ),

    range: $ => seq(
      field("start", $.expression),
      '..',
      field("end", $.expression),
      optional(seq(
        '..',
        field("step", $.expression)
      ))
    ),

    skipStatement: _ => 'skip',
    breakStatement: _ => 'break',

    redirection: $ => choice(
      $._redirectionLTR,
      $._redirectionRTL,
    ),

    _redirectionLTR: $ => choice(
      seq($.expression, REDIR_LTR, $.varDeclaration),
      seq($.expression, REDIR_OP_LTR, $.primitiveDestination),
      // seq($.expression, REDIR_OP_LTR, $.identifier),
      seq($.expression, REDIR_OP_LTR, $.expression),
    ),

    _redirectionRTL: $ => choice(
      seq($.varDeclaration, REDIR_RTL, $.expression),
      seq($.primitiveDestination, REDIR_OP_RTL, $.expression),
      // seq($.identifier, REDIR_OP_RTL, $.expression),
      seq($.expression, REDIR_OP_RTL, $.expression),
    ),

    constantDeclaration: $ => prec.right(seq(
      'constant', $.constantIdentifier, $.type, '<-', $.expression
    )),

    varDeclaration: $ => prec.right(1, seq(
      $.identifier, $.type, optional($.defaultDefinition)
    )),

    defaultDefinition: $ => seq('default', $.expression),

    primitiveContent: _ => '\\in',
    primitiveDestination: _ => choice('\\out', '\\err'),

    expression: $ => choice(
      $._expressionParenthesized,
      $.expressionCast,
      $.expressionTypeCheck,
      $.expressionDot,
      $.expressionBinary,
      $.expressionPrefixed,
      $._primary,
    ),

    _expressionParenthesized: $ => seq('{', $.expression, '}'),

    expressionCast: $ => seq($.expression, 'as', $.type),

    expressionTypeCheck: $ => prec(1, seq(
      $.expression, 'is', optional(choice('not', $.identifier)), $.type)
    ),

    expressionDot: $ => seq(
      $.expression, '.', choice($._anyIdentifier, $.literalDefault)
    ),

    expressionPrefixed: $ => prec.left(2, seq(
      field("op", choice(
        '+', '-',
        '!', 'not',
      )),
      $.expression,
    )),

    expressionBinary: $ => prec.left(1, seq(
      field("lhs", $.expression),
      field("bop", choice(
        '@',
        '^',
        '*', '/', '%',
        '+', '-',
        '<=', '>=', '>', '<',
        '=', '!=',
        'in', '~=', '=~',
        'and', '&', 'or', '|',
      )),
      field("rhs", $.expression)
    )),

    type: $ => $.typeIdentifier,

    _primary: $ => choice(
      $.literal,
      $._anyIdentifier,
      $.primitiveContent,
    ),

    literal: $ => choice(
      $.literalPlaceholder,
      $.literalDefault,
      $.literalBool,
      $.literalReal,
      $.literalNatural,
      $.literalInteger,
      $.literalText,
    ),

    literalPlaceholder: _ => token('_'),
    literalDefault: _ => token('default'),
    literalBool: _ => token(choice('true', 'false')),
    literalReal: _ => token(choice(LITERAL_REAL_DECIMAL, LITERAL_REAL_HEX,)),

    literalNatural: _ => token(seq(
      choice(
        NUMERAL_DECIMAL,
        NUMERAL_HEX,
        NUMERAL_OCTAL,
        NUMERAL_BINARY,
      ),
      'n'
    )),

    literalInteger: _ => token(seq(
      choice(
        NUMERAL_DECIMAL,
        NUMERAL_HEX,
        NUMERAL_OCTAL,
        NUMERAL_BINARY,
      ),
      optional('i')
    )),

    literalText: _ => token(choice(
      LITERAL_TEXT,
      LITERAL_TEXT_BLOCK,
      LITERAL_EXACT_TEXT,
      LITERAL_EXACT_TEXT_BLOCK,
    )),

    _anyIdentifier: $ => choice(
      $.identifier,
      $.constantIdentifier,
      $.typeIdentifier
    ),

    identifier: _ => token(IDENTIFIER),
    constantIdentifier: _ => token(ALLUPPERCASE_IDENTIFIER),
    typeIdentifier: _ => token(choice(UPPERCASE_IDENTIFIER, ALLUPPERCASE_IDENTIFIER)),

  }

});
