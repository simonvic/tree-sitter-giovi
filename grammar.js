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
  CAST: 12,
  TYPECHECK: 11,
  INVOCATION: 11,
  DOTREF: 10,
  DOT: 10,

  CREATION_LIST: 9,
  CREATION_MAP: 8,
  CREATION_TUPLE: 8,
  // CREATION_TYPE: 8,

  REF: 7,
  UNARY: 5,
  ACCESS: 4,
  POWER: 3,
  MULTIPLICATIVE: 2,
  ADDITIVE: 1,
  RELATIONAL: 0,
  EQUALITY: -1,
  CONTAINMENT: -2,
  BOOL: -3,
  BITBOOL: -3,
  BITSHIFT: -3,

  RANGE: 1,
  ACCESS_KEY: 1,

};

const LEX_PREC = {
  COMMENT_BLOCK: -1,
  COMMENT_LINE: -2,
  DOC_BLOCK: -1,
  DOC_LINE: -2,
};

export default grammar({
  name: "giovi",

  word: $ => $.identifier,

  conflicts: $ => [
    [$.statement_return],
    [$.declaration_variable],
    [$.formal_parameters, $.actual_parameters],
    [$.function_signature],
    [$.expression, $.statement],
    [$.primary, $.declaration_struct],
    [$.primary, $.declaration_variable],
    [$.primary, $.formal_parameter],
    [$.primary, $.type_qualified],
    [$.type_qualified],
    [$.case_match_boolean, $.expression_boolean],
    [$.statement_alias, $.type_qualified],
    [$.expression_relational, $.statement_return],
    [$.expression_relational, $._expression_creation_tuple],
    [$.expression_relational, $._expression_creation_record],
    [$.expression_relational, $.declaration_constant],
    [$.expression_relational, $.default_definition],
    [$.expression_relational, $._redirection_rtl],
    [$.expression_relational, $.map_entry],
  ],

  extras: $ => [
    $.comment_line,
    $.comment_block,
    $.doc_line,
    $.doc_block,
    /\s/,
  ],

  supertypes: $ => [
    $.comment,
    $.doc,
    $.primary,
    $.literal,
    $.statement,
    $.expression,
    $.expression_binary,
    $.case_match,
    $.type,
    $.type_product,
    $.type_composite,
    $.referenceable,
    $.pattern,
    $.pattern_primary,
    $.pattern_product_subpattern,
    $.iterator_pattern,
  ],

  rules: {
    program: $ => repeat($.statement),
    block: $ => seq('{', repeat($.statement), '}'),

    doc: $ => choice(
      $.doc_line,
      $.doc_block,
    ),
    doc_block: _ => token(prec(LEX_PREC.DOC_BLOCK, seq(
      '#{?',
      /[^}]*\}+([^#{][^{]*\}+)*/,
      '#'
    ))),
    doc_line: _ => token(prec(LEX_PREC.DOC_LINE, seq(
      '#?', /[^\n]*/
    ))),

    comment: $ => choice(
      $.comment_line,
      $.comment_block,
    ),
    comment_block: _ => token(prec(LEX_PREC.COMMENT_BLOCK, seq(
      '#{',
      /[^}]*\}+([^#{][^{]*\}+)*/,
      '#'
    ))),
    comment_line: _ => token(prec(LEX_PREC.COMMENT_LINE, seq(
      '#', /[^\n]*/
    ))),

    statement: $ => choice(
      $.statement_import,
      $.statement_alias,
      $.statement_if,
      $.statement_multi_if,
      $.statement_repeat,
      $.statement_for,
      $.statement_skip,
      $.statement_break,
      $.redirection,
      $._declaration,
      $.statement_return,
      $.invocation,
    ),

    _declaration: $ => choice(
      $.declaration_module,
      $.declaration_struct,
      $.declaration_constant,
      $.declaration_variable,
      $.declaration_function,
    ),

    _statement_or_block: $ => choice(
      $.statement,
      $.block
    ),

    statement_import: $ => seq(
      'import', choice(
        $.import_entry,
        seq('[', repeat1(seq($.import_entry, optional(','))), ']')
      )
    ),

    import_entry: $ => seq(
      $.import_uri,
      repeat(seq('.', $.import_uri)),
      optional(seq('as', field("alias", $.identifier)))
    ),

    import_uri: $ => choice(
      $.literal_exact_text,
      $.literal_text,
      $.identifier,
    ),

    statement_alias: $ => seq(
      'alias',
      $.expression,
      'as',
      field("alias", $.identifier),
      SEMICOLON
    ),

    declaration_module: $ => seq(
      'module',
      field("name", $.identifier),
      field("body", $.block)
    ),

    declaration_struct: $ => seq(
      optional('struct'),
      optional(seq(field("parent_type", $.type_qualified), ':')),
      field("typename", $.identifier),
      field("body", $.struct_body),
      SEMICOLON
    ),

    struct_body: $ => seq(
      '<',
      repeat(seq(
        choice(
          $.declaration_constant,
          $.declaration_field,
          $.declaration_struct,
          $.declaration_function,
        ),
        optional(',')
      )),
      '>',
    ),

    declaration_field: $ => seq(
      field("name", $.identifier),
      field("type", $.type),
      field("default", optional($.default_definition))
    ),

    declaration_function: $ => seq(
      optional($.literal_self),
      field("name", $.identifier), // TODO: the identifier should be part of the signature
      field("signature", $.function_signature),
      field("body", $.block)
    ),

    formal_parameters: $ => seq(
      '(',
      optional(seq(
        $.formal_parameter, repeat(seq(',', $.formal_parameter)), optional(','),
      )),
      ')'
    ),

    formal_parameter: $ => seq(
      optional(seq(field("label", $.identifier), ':')),
      field("name", $.identifier),
      field("type", $.type),
      field("default", optional($.default_definition))
    ),

    statement_return: $ => seq(choice('return', '=>'), optional($.expression), SEMICOLON),

    invocation: $ => choice(
      prec(PREC.INVOCATION, seq(
        optional(seq(field("instance", $.expression), '.')),
        field("invoked", $.identifier),
        $.actual_parameters
      )),
      seq(field("invoked", $.expression), $.actual_parameters),
    ),

    actual_parameters: $ => seq(
      '(',
      optional(seq(
        $.actual_parameter, repeat(seq(',', $.actual_parameter)), optional(','),
      )),
      ')'
    ),

    actual_parameter: $ => seq(
      optional(field("label", seq($.identifier, ':'))), $.expression
    ),

    statement_if: $ => prec.right(seq(
      'if',
      field("condition", $.expression),
      'do',
      field("consequence", $._statement_or_block),
      optional(seq(
        'else',
        field("alternative", $._statement_or_block)
      ))
    )),

    statement_multi_if: $ => prec.right(seq(
      'if',
      field("subject", $.expression),
      field("body", $.multi_if_body),
      optional(seq(
        "else",
        field("alternative", $._statement_or_block)
      ))
    )),

    multi_if_body: $ => seq('{', repeat1($.multi_if_condition), '}'),

    multi_if_condition: $ => seq(
      field("cases", $.cases),
      optional(seq(
        'when',
        field("guard", $.expression)
      )),
      'do',
      field("consequence", $._statement_or_block)
    ),

    cases: $ => seq(
      $._case_match,
      repeat(seq(
        choice('and', '&', 'or', '|'),
        $._case_match
      )),
    ),

    _case_match: $ => choice(
      $._case_match_parenthesized,
      $.case_match,
    ),
    _case_match_parenthesized: $ => seq('{', $.case_match, '}'),

    case_match: $ => choice(
      $.case_match_relational,
      $.case_match_equality,
      $.case_match_boolean,
      $.case_match_containment,
      $.case_match_typecheck,
    ),

    case_match_relational: $ => prec(PREC.RELATIONAL, seq(choice('<', '<=', '>=', '>'), $.expression)),
    case_match_equality: $ => prec(PREC.EQUALITY, seq(choice('=', '!='), $.expression)),
    case_match_boolean: $ => prec(PREC.BOOL, seq(choice('and', '&', 'or', '|'), $.expression)),
    case_match_containment: $ => prec(PREC.CONTAINMENT, seq(optional('not'), choice('in', '=~', '~='), $.expression)),
    case_match_typecheck: $ => prec(PREC.TYPECHECK, seq('is', optional(choice('not', $.identifier)), $.type)),

    statement_repeat: $ => seq(
      'repeat', optional(seq('if', field("condition", $.expression))),
      field("body", $._statement_or_block)
    ),

    statement_for: $ => seq(
      'for',
      field("pattern", $.iterator_pattern),
      'in',
      field("iterated", $.iterable),
      'do',
      field("body", $._statement_or_block)
    ),

    iterator_pattern: $ => choice(
      alias($._pattern_map, $.pattern_map),
      $.pattern,
    ),

    pattern: $ => choice(
      $.pattern_list,
      $.pattern_map,
      $.pattern_product,
      $.pattern_primary,
    ),

    pattern_list: $ => seq('[', $.pattern, ']'),

    pattern_map: $ => seq('[', $._pattern_map, ']'),

    _pattern_map: $ => prec.left(seq(
      field("key", $.pattern),
      ':',
      field("val", $.pattern)
    )),

    pattern_product: $ => seq(
      optional(field("whole", $.pattern_unary)),
      '<',
      choice(
        $._pattern_product_positional,
        $._pattern_product_named,
      ),
      '>'
    ),

    pattern_product_subpattern: $ => choice(
      $.pattern_product,
      $.pattern_primary
    ),

    _pattern_product_positional: $ => seq(
      $.pattern_product_subpattern,
      repeat(seq(',', $.pattern_product_subpattern)),
      optional(','),
    ),

    _pattern_product_named: $ => seq(
      '.', $.pattern_product_subpattern,
      repeat(seq(',', '.', $.pattern_product_subpattern)),
      optional(','),
    ),

    pattern_primary: $ => choice(
      $.pattern_unary,
      $.literal_placeholder
    ),

    pattern_unary: $ => seq($.identifier, optional($.type)),

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

    statement_skip: _ => seq('skip', SEMICOLON),
    statement_break: _ => seq('break', SEMICOLON),

    redirection: $ => choice(
      $._redirection_ltr,
      $._redirection_rtl,
    ),

    _redirection_ltr: $ => prec(99, choice(
      seq($.expression, '->', $.declaration_variable),
      //seq($.expression, REDIR_OP_LTR, $.reserved_identifier, SEMICOLON),
      // seq($.expression, REDIR_OP_LTR, $.identifier),
      seq($.expression, REDIR_OP_LTR, $.expression, SEMICOLON),
    )),

    _redirection_rtl: $ => choice(
      seq($.declaration_variable, '<-', $.expression, SEMICOLON),
      //seq($.reserved_identifier, REDIR_OP_RTL, $.expression, SEMICOLON),
      // seq($.identifier, REDIR_OP_RTL, $.expression),
      seq($.expression, REDIR_OP_RTL, $.expression, SEMICOLON),
    ),

    declaration_constant: $ => seq(
      'const',
      field("name", $.identifier),
      optional(field("type", $.type)),
      '<-',
      field("value", $.expression),
      SEMICOLON
    ),

    declaration_variable: $ => seq(
      field("name", $.identifier),
      field("type", $.type),
      field("default", optional($.default_definition)),
      SEMICOLON
    ),

    default_definition: $ => seq('default', $.expression),

    expression: $ => choice(
      $.expression_parenthesized,
      $.expression_cast,
      $.expression_typecheck,
      alias($.expression_creation_list, $.list),
      alias($.expression_creation_map, $.map),
      alias($.expression_creation_struct, $.struct),
      alias($.expression_creation_record, $.record),
      alias($.expression_creation_tuple, $.tuple),
      $.expression_type,
      $.expression_ref,
      $.invocation,
      $.expression_dot,
      $.expression_dot_ref,
      $.expression_access,
      $.expression_binary,
      $.expression_prefixed,
      $.primary,
    ),

    expression_parenthesized: $ => seq('{', $.expression, '}'),

    expression_cast: $ => prec(PREC.CAST, seq($.expression, 'as', $.type)),

    expression_typecheck: $ => prec(PREC.TYPECHECK, seq(
      $.expression, 'is', optional(choice('not', $.identifier)), $.type)
    ),

    expression_creation_list: $ => prec(PREC.CREATION_LIST, seq(
      '[', repeat(seq($.list_entry, optional(','))), ']'
    )),

    list_entry: $ => prec(99, choice($.expression, $.range)),

    expression_creation_map: $ => prec(PREC.CREATION_MAP, seq(
      '[',
      choice(
        ':',
        repeat1(seq($.map_entry, optional(','))),
      ),
      ']'
    )),

    map_entry: $ => seq(
      field("key", $.expression), ':', field("val", $.expression)
    ),

    expression_creation_struct: $ => seq(
      optional(seq('struct', '.')),
      field("type", $.type_qualified),
      '.',
      choice(
        alias($._expression_creation_record, $.record),
        alias($._expression_creation_tuple, $.tuple)
      ),
    ),

    expression_creation_record: $ => seq(
      optional(seq('record', '.')),
      $._expression_creation_record,
    ),

    _expression_creation_record: $ => seq(
      '<',
      choice(
        ':',
        repeat1(seq(
          field("name", $.identifier),
          ':',
          field("value", $.expression),
          optional(',')
        )),
      ),
      '>',
    ),

    expression_creation_tuple: $ => seq(
      optional(seq('tuple', '.')),
      $._expression_creation_tuple,
    ),

    _expression_creation_tuple: $ => prec.dynamic(PREC.CREATION_TUPLE, seq(
      '<',
      repeat(seq($.expression, optional(','))),
      '>',
    )),

    expression_type: $ => seq('type', '.', $.type),

    expression_ref: $ => prec(PREC.REF, seq(
      choice(
        '::',
        seq('function', '.')
      ),
      field("referenced", $.referenceable)
    )),

    referenceable: $ => choice(
      $.identifier,
      $.anon_function,
    ),

    anon_function: $ => seq(
      optional(field("signature", $.function_signature)),
      field("body", $.block)
    ),

    expression_dot: $ => prec(PREC.DOT, seq(
      $.expression, '.', choice($.identifier, $.literal_default)
    )),

    expression_dot_ref: $ => prec.left(PREC.DOTREF, seq(
      field("accessed", $.expression),
      field("bop", '::'),
      field("accessor", $.identifier)
    )),

    expression_prefixed: $ => prec.left(PREC.UNARY, seq(
      field("op", choice(
        '+', '-',
        '!', 'not',
        '!!'
      )),
      $.expression,
    )),

    expression_access: $ => prec.left(PREC.ACCESS, seq(
      field("accessed", $.expression),
      field("bop", '@'),
      field("accessor", $._access_key)
    )),

    _access_key: $ => prec.left(PREC.ACCESS_KEY, choice(
      seq('{', choice($._access_key, $.expression), '}'),
      alias(choice('@', '%', '*'), $.special_key),
      $.range,
      $.literal,
      $.identifier,
    )),

    expression_binary: $ => choice(
      $.expression_bitwise_bool,
      $.expression_bitwise_shift,
      $.expression_power,
      $.expression_equality,
      $.expression_containment,
      $.expression_relational,
      $.expression_multiplicative,
      $.expression_additive,
      $.expression_boolean,
    ),

    expression_bitwise_bool: $ => prec.left(PREC.BITBOOL, seq($.expression, choice('&&', '||', '|||'), $.expression)),
    expression_bitwise_shift: $ => prec.left(PREC.BITSHIFT, seq($.expression, choice('{<}', '{>}', '{>>}'), $.expression)),
    expression_power: $ => prec.left(PREC.POWER, seq($.expression, '^', $.expression)),
    expression_equality: $ => prec.left(PREC.EQUALITY, seq($.expression, choice('=', '!='), $.expression)),
    expression_containment: $ => prec.left(PREC.CONTAINMENT, seq($.expression, optional('not'), choice('in', '~=', '=~'), $.expression)),
    expression_relational: $ => prec.left(PREC.RELATIONAL, seq($.expression, choice('<', '<=', '>=', '>'), $.expression)),
    expression_multiplicative: $ => prec.left(PREC.MULTIPLICATIVE, seq($.expression, choice('*', '/', '%'), $.expression)),
    expression_additive: $ => prec.left(PREC.ADDITIVE, seq($.expression, choice('+', '-'), $.expression)),
    expression_boolean: $ => prec.left(PREC.BOOL, seq($.expression, choice('and', '&', 'or', '|'), $.expression)),

    type: $ => choice(
      $.type_type,
      $.type_qualified,
      $.type_composite,
      $.type_function_ref,
      $.type_product,
    ),

    type_type: _ => 'type',

    type_qualified: $ => seq(
      repeat(seq($.identifier, '.')),
      field("typename", $.identifier)
    ),

    type_composite: $ => choice(
      $.type_list,
      $.type_map,
    ),

    type_list: $ => seq(
      '[', $.type, optional(seq('**', field("init_size", $.expression))), ']'
    ),

    type_map: $ => seq(
      '[', field("key_type", $.type), ':', field("value_type", $.type), ']'
    ),

    type_function_ref: $ => seq(choice('::', 'function'), $.function_signature),

    function_signature: $ => seq(
      $.formal_parameters,
      optional(seq('=>', field("return_type", choice($.literal_self, $.type))))
    ),

    type_product: $ => choice(
      $.type_tuple,
      $.type_record,
    ),

    type_tuple: $ => seq(
      'tuple',
      '<',
      repeat(seq($._type_tuple_entry, optional(','))),
      '>',
    ),

    _type_tuple_entry: $ => seq($.type, optional($.default_definition)),

    type_record: $ => seq(
      'record',
      '<',
      repeat(seq($.declaration_field, optional(','))),
      '>',
    ),

    primary: $ => choice(
      $.literal,
      $.identifier,
      $.reserved_identifier,
    ),

    literal: $ => choice(
      $.literal_self,
      $.literal_placeholder,
      $.literal_default,
      $.literal_bool,
      $.literal_real,
      $.literal_natural,
      $.literal_integer,
      $._literal_text,
    ),

    literal_placeholder: _ => token('_'),
    literal_default: _ => token('default'),
    literal_self: _ => token('self'),
    literal_bool: _ => token(choice('true', 'false')),
    literal_real: _ => token(choice(LITERAL_REAL_DECIMAL, LITERAL_REAL_HEX,)),

    literal_natural: _ => token(seq(
      choice(
        NUMERAL_DEC,
        NUMERAL_HEX,
        NUMERAL_OCT,
        NUMERAL_BIN,
      ),
      'n'
    )),

    literal_integer: _ => token(seq(
      choice(
        NUMERAL_DEC,
        NUMERAL_HEX,
        NUMERAL_OCT,
        NUMERAL_BIN,
      ),
      optional('i')
    )),

    // TODO: also parse text block incidental whitespace
    _literal_text: $ => choice(
      $.literal_text,
      $.literal_text_block,
      $.literal_exact_text,
      $.literal_exact_text_block,
    ),

    escape_sequence: _ => token.immediate(choice(
      seq('\\', /[btnfrs"'\\${}]/),
      seq('\\u', DIGIT_HEX, DIGIT_HEX, DIGIT_HEX, DIGIT_HEX),
    )),

    text_interpolation: $ => choice(
      seq('$', token.immediate(choice(IDENTIFIER, ALLUPPERCASE_IDENTIFIER))),
      seq('${', $.expression, '}'),
    ),

    literal_text: $ => seq(
      '"',
      repeat(choice(
        '$',
        /[^"\\]/,
        $.escape_sequence,
        $.text_interpolation,
      )),
      '"'
    ),

    literal_text_block: $ => seq(
      '"{',
      repeat(choice(
        '$',
        /[^\\]/,
        $.escape_sequence,
        $.text_interpolation
      )),
      '}"'
    ),

    literal_exact_text: $ => seq(
      '\'',
      repeat(choice(
        /[^'\\]/,
        $.escape_sequence,
      )),
      '\''
    ),

    literal_exact_text_block: $ => seq(
      '\'{',
      repeat(choice(
        /[^\\]/,
        $.escape_sequence
      )),
      '}\''
    ),

    identifier: _ => token(choice(IDENTIFIER, ALLUPPERCASE_IDENTIFIER, UPPERCASE_IDENTIFIER)),
    reserved_identifier: _ => token(RESERVERD_IDENTIFIER),

  }

});
