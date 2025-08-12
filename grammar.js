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

const IDENTIFIER = /[a-z][a-zA-Z0-9_]*/;
const ALLUPPERCASE_IDENTIFIER = /[A-Z][A-Z0-9_]*/;
const UPPERCASE_IDENTIFIER = /[A-Z][a-zA-Z0-9_]*/;
const RESERVERD_IDENTIFIER = /_[a-zA-Z0-9_]+/;

const REDIR_OP_LTR = choice('->', '->+', '->-', '->*', '->/');
const REDIR_OP_RTL = choice('<-', '+<-', '-<-', '*<-', '/<-');
const SEMICOLON = optional(';');

const PREC = {
  CAST: 16,
  TYPECHECK: 15,
  INVOCATION: 15,
  DOT: 14,

  CREATION_LIST: 13,
  CREATION_MAP: 12,

  REF: 11,
  UNARY: 9,
  ACCESS: 8,
  POWER: 7,
  MULTIPLICATIVE: 6,
  ADDITIVE: 5,
  RELATIONAL: 4,
  EQUALITY: 3,
  CONTAINMENT: 2,
  BOOL: 1,

  RANGE: 1,
  ACCESS_KEY: 1,

  COMMENT_BLOCK: -1,
  COMMENT_LINE: -2,
  DOC_BLOCK: -1,
  DOC_LINE: -2,
};

module.exports = grammar({
  name: "giovi",

  word: $ => $.identifier,

  conflicts: $ => [
    [$.returnStatement],
    [$.varDeclaration],
    [$.formalParameters, $.actualParameters],
    [$.functionSignature],
    [$.expression, $.statement],
    [$._primary, $.expressionCreationStruct],
    [$._primary, $.structDefinition],
    [$._primary, $.expressionCreationStruct, $._referenceable],
    [$._primary, $._referenceable],
    [$._primary, $.varDeclaration],
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
    $.doc,
    $.literal,
    $.statement,
    $.expression,
    $.type,
    $.typeComposite,
  ],

  rules: {
    program: $ => repeat($.statement),
    block: $ => seq('{', repeat($.statement), '}'),

    doc: $ => choice(
      $.docLine,
      $.docBlock,
    ),
    docBlock: _ => token(prec(PREC.DOC_BLOCK, seq(
      '#?{',
      /[^}]*\}+([^#{][^{]*\}+)*/,
      '#'
    ))),
    docLine: _ => token(prec(PREC.DOC_LINE, seq(
      '#?', /[^\n]*/
    ))),

    comment: $ => choice(
      $.commentLine,
      $.commentBlock,
    ),
    commentBlock: _ => token(prec(PREC.COMMENT_BLOCK, seq(
      '#{',
      /[^}]*\}+([^#{][^{]*\}+)*/,
      '#'
    ))),
    commentLine: _ => token(prec(PREC.COMMENT_LINE, seq(
      '#', /[^\n]*/
    ))),

    statement: $ => choice(
      $.importStatement,
      $.ifStatement,
      $.switchStatement,
      $.repeatStatement,
      $.forStatement,
      $.skipStatement,
      $.breakStatement,
      $.redirection,
      $._declaration,
      $.returnStatement,
      $.invocation,
    ),

    _declaration: $ => choice(
      $.moduleDeclaration,
      $.structDefinition,
      $.constantDeclaration,
      $.varDeclaration,
      $.functionDeclaration,
    ),

    _statementOrBlock: $ => choice(
      $.statement,
      $.block
    ),

    importStatement: $ => seq(
      'import', choice(
        $.importEntry,
        seq('[', repeat1(seq($.importEntry, optional(','))), ']')
      )
    ),

    importEntry: $ => seq(
      $.importURI,
      repeat(seq('.', $.importURI)),
      optional(seq('as', field("alias", $.identifier)))
    ),

    importURI: $ => choice(
      $.literalExactText,
      $.literalText,
      $.identifier,
    ),

    moduleDeclaration: $ => seq(
      'module',
      field("name", $.identifier),
      field("body", $.block)
    ),

    structDefinition: $ => seq(
      optional(seq(field("parentType", $.identifier), ':')),
      field("typename", $.identifier),
      field("body", $.structBodyDefinition),
      SEMICOLON
    ),

    structBodyDefinition: $ => seq(
      token(prec(0, '<')),
      repeat(seq(
        choice(
          $.constantDeclaration,
          $.structFieldDefinition,
          $.structDefinition,
          $.functionDeclaration,
        ),
        optional(',')
      )),
      token(prec(0, '>')),
    ),

    structFieldDefinition: $ => seq(
      field("name", $.identifier),
      field("type", $.type),
      field("default", optional($.defaultDefinition))
    ),

    functionDeclaration: $ => seq(
      optional($.literalSelf),
      field("name", $.identifier), // TODO: the identifier should be part of the signature
      field("signature", $.functionSignature),
      field("body", $.block)
    ),

    formalParameters: $ => seq(
      '(',
      optional(seq(
        $.formalParameter, repeat(seq(',', $.formalParameter)), optional(','),
      )),
      ')'
    ),

    formalParameter: $ => seq(
      optional(seq(field("label", $.identifier), ':')),
      field("name", $.identifier),
      field("type", $.type),
      field("default", optional($.defaultDefinition))
    ),

    returnStatement: $ => seq(choice('return', '=>'), optional($.expression), SEMICOLON),

    invocation: $ => choice(
      prec(PREC.INVOCATION, seq(
        optional(seq(field("instance", $.expression), '.')),
        field("invoked", $.identifier),
        $.actualParameters
      )),
      seq(field("invoked", $.expression), $.actualParameters),
    ),

    actualParameters: $ => seq(
      '(',
      optional(seq(
        $.actualParameter, repeat(seq(',', $.actualParameter)), optional(','),
      )),
      ')'
    ),

    actualParameter: $ => seq(
      optional(field("label", seq($.identifier, ':'))), $.expression
    ),

    ifStatement: $ => prec.right(seq(
      'if', field('condition', $.expression), 'do', field('body', $._statementOrBlock),
      optional(seq('else', field('elseBody', $._statementOrBlock)))
    )),

    switchStatement: $ => prec.right(seq(
      'if',
      field("subject", $.expression),
      field("body", $.switchBlock),
      optional(seq(
        "else",
        field("elseBody", $._statementOrBlock)
      ))
    )),

    switchBlock: $ => seq('{', repeat1($.switchLabel), '}'),
    switchLabel: $ => prec(1, seq(
      field("cases", $.cases),
      optional(seq(
        'when',
        field("guard", $.expression)
      )),
      'do',
      field("body", $._statementOrBlock)
    )),

    cases: $ => seq(
      $._caseMatch,
      repeat(seq(
        choice('and', '&', 'or', '|'),
        $._caseMatch
      )),
    ),

    _caseMatch: $ => choice(
      $._caseMatchParenthesized,
      $.caseMatch,
    ),
    _caseMatchParenthesized: $ => seq('{', $.caseMatch, '}'),
    caseMatch: $ => prec(2, choice(
      seq(choice('<', '<=', '>=', '>', '=', '!=', 'and', '&', 'or', '|'), $.expression),
      seq(optional('not'), choice('in', '=~', '~='), $.expression),
      seq('is', optional(choice('not', $.identifier)), $.type),
    )),

    repeatStatement: $ => seq(
      'repeat', optional(seq('if', field("condition", $.expression))),
      field("body", $._statementOrBlock)
    ),

    forStatement: $ => seq(
      'for',
      field("iterator", $.iterator),
      'in',
      field("iterated", $.iterable),
      'do',
      field("body", $._statementOrBlock)
    ),

    iterator: $ => choice(
      $.iteratorUnary,
      $.iteratorMap,
      $.iteratorAggregate,
      $.literalPlaceholder,
    ),

    iteratorUnary: $ => seq($.identifier, optional($.type)),

    iteratorMap: $ => prec.left(choice(
      seq('[', field("key", $.iterator), ':', field("val", $.iterator), ']'),
      seq(field("key", $.iterator), ':', field("val", $.iterator)),
    )),

    iteratorAggregate: $ => seq(
      optional(field("whole", $.iteratorUnary)),
      '<',
      $.iterator,
      repeat(seq(',', $.iterator)),
      optional(','),
      '>',
    ),

    iterable: $ => choice(
      $.range,
      $.expression,
    ),

    range: $ => prec.left(PREC.RANGE, seq(
      field("start", $.expression),
      '..',
      field("end", $.expression),
      optional(seq(
        '..',
        field("step", $.expression)
      ))
    )),

    skipStatement: _ => seq('skip', SEMICOLON),
    breakStatement: _ => seq('break', SEMICOLON),

    redirection: $ => choice(
      $._redirectionLTR,
      $._redirectionRTL,
    ),

    _redirectionLTR: $ => choice(
      seq($.expression, '->', $.varDeclaration),
      //seq($.expression, REDIR_OP_LTR, $.reservedIdentifier, SEMICOLON),
      // seq($.expression, REDIR_OP_LTR, $.identifier),
      seq($.expression, REDIR_OP_LTR, $.expression, SEMICOLON),
    ),

    _redirectionRTL: $ => choice(
      seq($.varDeclaration, '<-', $.expression, SEMICOLON),
      //seq($.reservedIdentifier, REDIR_OP_RTL, $.expression, SEMICOLON),
      // seq($.identifier, REDIR_OP_RTL, $.expression),
      seq($.expression, REDIR_OP_RTL, $.expression, SEMICOLON),
    ),

    constantDeclaration: $ => seq(
      'const',
      field("name", $.identifier),
      optional(field("type", $.type)),
      '<-',
      field("value", $.expression),
      SEMICOLON
    ),

    varDeclaration: $ => seq(
      field("name", $.identifier),
      field("type", $.type),
      field("default", optional($.defaultDefinition)),
      SEMICOLON
    ),

    defaultDefinition: $ => seq('default', $.expression),

    expression: $ => choice(
      $.expressionParenthesized,
      $.expressionCast,
      $.expressionTypeCheck,
      alias($.expressionCreationList, $.list),
      alias($.expressionCreationMap, $.map),
      alias($.expressionCreationStruct, $.struct),
      alias($.expressionCreationRecord, $.record),
      alias($.expressionCreationTuple, $.tuple),
      $.expressionRef,
      $.invocation,
      $.expressionDot,
      $.expressionAccess,
      $.expressionBinary,
      $.expressionPrefixed,
      $._primary,
    ),

    expressionParenthesized: $ => seq('{', $.expression, '}'),

    expressionCast: $ => prec(PREC.CAST, seq($.expression, 'as', $.type)),

    expressionTypeCheck: $ => prec(PREC.TYPECHECK, seq(
      $.expression, 'is', optional(choice('not', $.identifier)), $.type)
    ),

    expressionCreationList: $ => prec(PREC.CREATION_LIST, seq(
      '[', repeat(seq($.listEntry, optional(','))), ']'
    )),

    listEntry: $ => choice($.expression, $.range),

    expressionCreationMap: $ => prec(PREC.CREATION_MAP, seq(
      '[',
      choice(
        ':',
        repeat1(seq($.mapEntry, optional(','))),
      ),
      ']'
    )),

    mapEntry: $ => seq(
      field("key", $.expression), ':', field("val", $.expression)
    ),

    expressionCreationStruct: $ => seq(
      field("typename", $.identifier),
      '.',
      choice(
        alias($.expressionCreationRecord, $.record),
        alias($.expressionCreationTuple, $.tuple)
      ),
    ),

    expressionCreationRecord: $ => seq(
      token(prec(0, '<')),
      repeat1(seq(
        field("name", $.identifier),
        ':',
        field("value", $.expression),
        optional(',')
      )),
      token(prec(0, '>')),
    ),

    expressionCreationTuple: $ => seq(
      token(prec(0, '<')),
      repeat(seq($.expression, optional(','))),
      token(prec(0, '>')),
    ),

    expressionRef: $ => prec(PREC.REF, seq(
      '::', field("referenced", $._referenceable)
    )),

    _referenceable: $ => choice(
      seq(optional(seq($.expression, '.')), $.identifier),
      $.anonFunction,
    ),

    anonFunction: $ => seq(
      optional(field("signature", $.functionSignature)),
      field("body", $.block)
    ),

    expressionDot: $ => prec(PREC.DOT, seq(
      $.expression, '.', choice($.identifier, $.literalDefault)
    )),

    expressionPrefixed: $ => prec.left(PREC.UNARY, seq(
      field("op", choice(
        '+', '-',
        '!', 'not',
      )),
      $.expression,
    )),

    expressionAccess: $ => prec.left(PREC.ACCESS, seq(
      field("accessed", $.expression),
      field("bop", '@'),
      field("accessor", $._accessKey)
    )),

    _accessKey: $ => prec.left(PREC.ACCESS_KEY, choice(
      seq('{', choice($._accessKey, $.expression), '}'),
      alias(choice('@', '%', '*'), $.specialKey),
      $.range,
      $.literal,
      $.identifier,
    )),

    expressionBinary: $ => choice(
      $._expressionPower,
      $._expressionEquality,
      $._expressionContainment,
      $._expressionRelational,
      $._expressionMultiplicative,
      $._expressionAdditive,
      $._expressionBoolean,
    ),

    _expressionPower: $ => prec.left(PREC.POWER, seq($.expression, '^', $.expression)),
    _expressionEquality: $ => prec.left(PREC.EQUALITY, seq($.expression, choice('=', '!='), $.expression)),
    _expressionContainment: $ => prec.left(PREC.CONTAINMENT, seq($.expression, optional('not'), choice('in', '~=', '=~'), $.expression)),
    _expressionRelational: $ => prec.left(PREC.RELATIONAL, seq($.expression, choice(token(prec(0, '<')), '<=', '>=', '>'), $.expression)),
    _expressionMultiplicative: $ => prec.left(PREC.MULTIPLICATIVE, seq($.expression, choice('*', '/', '%'), $.expression)),
    _expressionAdditive: $ => prec.left(PREC.ADDITIVE, seq($.expression, choice('+', '-'), $.expression)),
    _expressionBoolean: $ => prec.left(PREC.BOOL, seq($.expression, choice('and', '&', 'or', '|'), $.expression)),

    type: $ => choice(
      $.typeComposite,
      $.identifier,
      $.typeFunctionRef
    ),

    typeComposite: $ => choice(
      $.typeList,
      $.typeMap,
    ),

    typeList: $ => seq(
      '[', $.type, optional(seq('**', field("initSize", $.expression))), ']'
    ),

    typeMap: $ => seq(
      '[', field("keyType", $.type), ':', field("valueType", $.type), ']'
    ),

    typeFunctionRef: $ => seq('::', $.functionSignature),

    functionSignature: $ => seq(
      $.formalParameters,
      optional(seq('=>', field("returnType", choice($.literalSelf, $.type))))
    ),

    _primary: $ => choice(
      $.literal,
      $.identifier,
      $.reservedIdentifier,
    ),

    literal: $ => choice(
      $.literalSelf,
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
    literalSelf: _ => token('self'),
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
      seq('\\', /[btnfrs"'\\${}]/),
      seq('\\u', DIGIT_HEX, DIGIT_HEX, DIGIT_HEX, DIGIT_HEX),
    )),

    textInterpolation: $ => choice(
      seq('$', token.immediate(choice(IDENTIFIER, ALLUPPERCASE_IDENTIFIER))),
      seq('${', $.expression, '}'),
    ),

    literalText: $ => seq(
      '"',
      repeat(choice(
        '$',
        /[^"\\]/,
        $.escapeSequence,
        $.textInterpolation,
      )),
      '"'
    ),

    literalTextBlock: $ => seq(
      '"{',
      repeat(choice(
        '$',
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

    identifier: _ => token(choice(IDENTIFIER, ALLUPPERCASE_IDENTIFIER, UPPERCASE_IDENTIFIER)),
    reservedIdentifier: _ => token(RESERVERD_IDENTIFIER),

  }

});
