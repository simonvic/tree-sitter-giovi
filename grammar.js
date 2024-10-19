/**
 * @file Giovi grammar for tree-sitter
 * @author Simone Vicinanza <simonvic.dev@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const DIGIT_DEC = /[0-9]/;
const DIGIT_HEX = /[0-9a-fA-F]/;
const DIGIT_OCT = /[0-7]/;
const DIGIT_BIN = /[01]/;

const DIGITS_DEC = seq(DIGIT_DEC, optional(seq(optional(repeat1(choice(DIGIT_DEC, '_'))), DIGIT_DEC)));
const DIGITS_HEX = seq(DIGIT_HEX, optional(seq(optional(repeat1(choice(DIGIT_HEX, '_'))), DIGIT_HEX)));
const DIGITS_OCT = seq(DIGIT_OCT, optional(seq(optional(repeat1(choice(DIGIT_OCT, '_'))), DIGIT_OCT)));
const DIGITS_BIN = seq(DIGIT_BIN, optional(seq(optional(repeat1(choice(DIGIT_BIN, '_'))), DIGIT_BIN)));

const NUMERAL_DEC = choice(
  '0',
  seq(/[1-9]/, choice(optional(DIGITS_DEC), seq(repeat1('_'), DIGITS_DEC)))
);
const NUMERAL_HEX = seq('0x', DIGITS_HEX);
const NUMERAL_OCT = seq('0o', DIGITS_OCT);
const NUMERAL_BIN = seq('0b', DIGITS_BIN);

const SIGNED_DIGITS = seq(optional(choice('+', '-')), DIGITS_DEC);
const EXPONENT_PART = seq(/[eE]/, SIGNED_DIGITS);
const HEX_SIGNIFICAND = choice(seq(NUMERAL_HEX, optional('.')), seq('0x', optional(DIGITS_HEX), '.', DIGITS_HEX));
const BINARY_EXPONENT = seq('p', SIGNED_DIGITS);

const LITERAL_REAL_DECIMAL = choice(
  seq(DIGITS_DEC, '.', DIGITS_DEC, optional(EXPONENT_PART), optional('r')),
  seq(DIGITS_DEC, EXPONENT_PART, optional('r')),
  seq(DIGITS_DEC, 'r'),
);
const LITERAL_REAL_HEX = seq(HEX_SIGNIFICAND, BINARY_EXPONENT, optional('r'));

const LETTER_OR_DIGIT_OR_UNDERSCORE = choice(/[a-zA-Z]/, DIGIT_DEC, '_');
const IDENTIFIER = seq(/[a-z]/, repeat(LETTER_OR_DIGIT_OR_UNDERSCORE));
const ALLUPPERCASE_IDENTIFIER = seq(/[A-Z]/, repeat(choice(/[A-Z]/, DIGIT_DEC, '_')));
const UPPERCASE_IDENTIFIER = seq(/[A-Z]/, repeat(LETTER_OR_DIGIT_OR_UNDERSCORE));

const REDIR_OP_LTR = choice('->', '->+', '->-', '->*', '->/');
const REDIR_OP_RTL = choice('<-', '+<-', '-<-', '*<-', '/<-');

module.exports = grammar({
  name: "giovi",

  word: $ => $.identifier,

  conflicts: $ => [
    [$.iterator, $.iteratorAggregate],
    [$.iteratorUnary],
    [$.typeFunctionRef],
    [$._anyIdentifier, $.functionDeclaration],
    [$.expression, $.statement],
    // [$._anyIdentifier, $.expressionCreationStruct],
  ],

  extras: $ => [
    $.commentLine,
    $.commentBlock,
    $.docLine,
    $.docBlock,
    /\s/,
  ],

  supertypes: $ => [
    $.comment,
    $.doc
  ],

  rules: {
    program: $ => repeat($.statement),
    block: $ => seq('{', repeat($.statement), '}'),

    doc: $ => choice(
      $.docLine,
      $.docBlock,
    ),
    docBlock: _ => token(prec(-1, seq(
      '#?{',
      /[^}]*\}+([^#{][^{]*\}+)*/,
      '#'
    ))),
    docLine: _ => token(prec(-2, seq(
      '#?', /[^\n]*/
    ))),

    comment: $ => choice(
      $.commentLine,
      $.commentBlock,
    ),
    commentBlock: _ => token(prec(-1, seq(
      '#{',
      /[^}]*\}+([^#{][^{]*\}+)*/,
      '#'
    ))),
    commentLine: _ => token(prec(-2, seq(
      '#', /[^\n]*/
    ))),

    statement: $ => choice(
      seq($.statement, ';'),
      $.ifStatement,
      $.switchStatement,
      $.repeatStatement,
      $.forStatement,
      $.skipStatement,
      $.breakStatement,
      $.redirection,
      $.structDefinition,
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

    structDefinition: $ => seq(
      optional(seq(field("parentType", $.typeIdentifier), ':')),
      field("typename", $.typeIdentifier),
      token(prec(0, '<')), // TODO: why is lexical precedence needed?
      // '<',
      optional($.structBodyDefinition),
      // '>',
      token(prec(0, '>')),
    ),

    structBodyDefinition: $ => repeat1(seq(choice(
      $.structFieldDefinition,
      $.structDefinition,
      $.functionDeclaration,
    ), optional(','))),

    structFieldDefinition: $ => seq(
      $.identifier, $.type, optional($.defaultDefinition)
    ),

    functionDeclaration: $ => seq(
      $.identifier, '(', optional($.formalParameters), ')',
      optional(seq('=>', field("returnType", $.type))),
      field("body", $.block)
    ),

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

    functionCallParameter: $ => seq(
      optional(field("label", seq($.identifier, ':'))), $.expression
    ),

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

    iterator: $ => choice(
      $.iteratorUnary,
      $.iteratorMap,
      $.iteratorAggregate,
      $.literalPlaceholder,
    ),

    iteratorUnary: $ => seq($.identifier, optional($.type)),

    // TODO: eventually use prec.right
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

    range: $ => prec.left(seq(
      field("start", $.expression),
      '..',
      field("end", $.expression),
      optional(seq(
        '..',
        field("step", $.expression)
      ))
    )),

    skipStatement: _ => token('skip'),
    breakStatement: _ => token('break'),

    redirection: $ => choice(
      $._redirectionLTR,
      $._redirectionRTL,
    ),

    _redirectionLTR: $ => choice(
      seq($.expression, '->', $.varDeclaration),
      seq($.expression, REDIR_OP_LTR, $.primitiveDestination),
      // seq($.expression, REDIR_OP_LTR, $.identifier),
      seq($.expression, REDIR_OP_LTR, $.expression),
    ),

    _redirectionRTL: $ => choice(
      seq($.varDeclaration, '<-', $.expression),
      seq($.primitiveDestination, REDIR_OP_RTL, $.expression),
      // seq($.identifier, REDIR_OP_RTL, $.expression),
      seq($.expression, REDIR_OP_RTL, $.expression),
    ),

    constantDeclaration: $ => seq(
      'constant', $.constantIdentifier, $.type, '<-', $.expression
    ),

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
      alias($.expressionCreationList, $.list),
      alias($.expressionCreationMap, $.map),
      alias($.expressionCreationStruct, $.struct),
      $.expressionRef,
      alias($.functionCall, $.expressionFunctionCall),
      $.expressionDot,
      $.expressionAccess,
      $.expressionBinary,
      $.expressionPrefixed,
      $._primary,
    ),

    _expressionParenthesized: $ => seq('{', $.expression, '}'),

    expressionCast: $ => seq($.expression, 'as', $.type),

    expressionTypeCheck: $ => prec(1, seq(
      $.expression, 'is', optional(choice('not', $.identifier)), $.type)
    ),

    expressionCreationList: $ => prec(1, seq(
      '[', repeat(seq($.listEntry, optional(','))), ']'
    )),

    listEntry: $ => choice($.expression, $.range),

    // TODO: eventually add [:] and remove list precedence
    expressionCreationMap: $ => seq(
      '[', repeat(seq($.mapEntry, optional(','))), ']'
    ),

    mapEntry: $ => seq(
      field("key", $.expression), ':', field("val", $.expression)
    ),

    // TODO: eventually distinguish tuples and structs
    expressionCreationStruct: $ => seq(
      optional(seq(field("typename", $.typeIdentifier), token(prec(1, '.')))),
      token(prec(0, '<')),
      optional($.structFields),
      token(prec(0, '>')),
    ),

    structFields: $ => choice(
      repeat1(seq($.expression, optional(','))),
      repeat1(seq($.identifier, ':', $.expression, optional(','))),
    ),

    expressionRef: $ => seq('::', choice(
      $.identifier,
      seq(
        optional(seq(
          '(', optional($.formalParameters), ')', optional(seq('=>', $.type))
        )),
        $.block
      )
    )),

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

    expressionAccess: $ => prec.left(1, seq(
      field("accessed", $.expression),
      field("bop", '@'),
      field("accessor", $._accessKey)
    )),

    _accessKey: $ => prec(1, choice(
      seq('{', choice($._accessKey, $.expression), '}'),
      alias(choice('@', '%', '*'), $.specialKey),
      $.range,
      $.literal,
      $.identifier,
    )),

    expressionBinary: $ => prec.left(1, seq(
      field("lhs", $.expression),
      field("bop", choice(
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

    type: $ => choice(
      $._typeComposite,
      $.typeIdentifier,
      $.typeFunctionRef
    ),

    _typeComposite: $ => choice(
      $.typeList,
      $.typeMap,
    ),

    typeList: $ => seq(
      '[', $.type, optional(seq('**', field("initSize", $.expression))), ']'
    ),

    typeMap: $ => seq(
      '[', field("keyType", $.type), ':', field("valueType", $.type), ']'
    ),

    typeFunctionRef: $ => seq(
      '::', '(', optional($.formalParameters), ')', optional(seq('=>', $.type))
    ),

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
      $._literalText,
    ),

    literalPlaceholder: _ => token('_'),
    literalDefault: _ => token('default'),
    literalBool: _ => token(choice('true', 'false')),
    literalReal: _ => token(choice(LITERAL_REAL_DECIMAL, LITERAL_REAL_HEX,)),

    literalNatural: _ => token(seq(
      choice(
        NUMERAL_DEC,
        NUMERAL_HEX,
        NUMERAL_OCT,
        NUMERAL_BIN,
      ),
      'n'
    )),

    literalInteger: _ => token(seq(
      choice(
        NUMERAL_DEC,
        NUMERAL_HEX,
        NUMERAL_OCT,
        NUMERAL_BIN,
      ),
      optional('i')
    )),

    // TODO: also parse text block incidental whitespace
    _literalText: $ => choice(
      $.literalText,
      $.literalTextBlock,
      $.literalExactText,
      $.literalExactTextBlock,
    ),

    escapeSequence: _ => token.immediate(choice(
      seq('\\', /[btnfrs"'\\$]/),
      seq('\\u', DIGIT_HEX, DIGIT_HEX, DIGIT_HEX, DIGIT_HEX),
    )),

    textInterpolation: $ => choice(
      seq('$', $._anyIdentifier),
      seq('${', $.expression, '}'),
    ),

    literalText: $ => seq(
      '"',
      repeat(choice(
        /[^"\\$]/,
        $.escapeSequence,
        $.textInterpolation,
      )),
      '"'
    ),

    literalTextBlock: $ => seq(
      '"{',
      repeat(choice(
        /[^\\]/,
        $.escapeSequence,
        $.textInterpolation
      )),
      '}"'
    ),

    literalExactText: $ => seq(
      '\'',
      repeat(choice(
        /[^'\\]/,
        $.escapeSequence,
      )),
      '\''
    ),

    literalExactTextBlock: $ => seq(
      '\'{',
      repeat(choice(
        /[^\\]/,
        $.escapeSequence
      )),
      '}\''
    ),

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
