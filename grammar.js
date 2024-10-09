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

/**
 * Creates a rule to match one or more of the rules separated by `separator`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function seqSep(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

module.exports = grammar({
  name: "giovi",
  rules: {
    program: $ => repeat($.statement),
    block: $ => seq('{', repeat($.statement), '}'),

    statement: $ => choice(
      seq($.statement, ';'),
      // $.ifStatement,
      $.redirectionRTL,
      // $.functionCall
    ),

    _statementOrBlock: $ => prec.left(choice(
      $.statement,
      $.block
    )),

    // functionCall: $ => seq(
    //   $.expression, '(', optional($.functionCallParameters), ')'
    // ),
    //
    // functionCallParameters: $ => seq(
    //   $.functionCallParameter, repeat(seq(',', $.functionCallParameter)), optional(',')
    // ),
    //
    // functionCallParameter: $ => seq(optional(seq($.identifier, ':')), $.expression),
    //
    // ifStatement: $ => prec.right(seq(
    //   'if', field('condition', $.expression), 'do', field('body', $._statementOrBlock),
    //   optional(seq('else', field('elseBody', $._statementOrBlock)))
    // )),

    redirectionRTL: $ => choice(
      seq($.primitiveDestination, '<-', $.redirectionContent)
    ),

    redirectionContent: $ => choice($.primitiveContent, $.expression),

    primitiveContent: $ => '\\in',
    primitiveDestination: $ => choice('\\out', '\\err'),

    expression: $ => choice(
      seq('{', $.expression, '}'),
      $._primary
    ),

    _primary: $ => choice($.literal),

    literal: $ => choice(
      $.literalBool,
      $.literalReal,
      $.literalNatural,
      $.literalInteger,
      $.literalText,
    ),

    literalBool: $ => token(choice('true', 'false')),

    literalReal: $ => token(choice(
      LITERAL_REAL_DECIMAL,
      LITERAL_REAL_HEX,
    )),

    literalNatural: $ => token(seq(
      choice(
        NUMERAL_DECIMAL,
        NUMERAL_HEX,
        NUMERAL_OCTAL,
        NUMERAL_BINARY,
      ),
      'n'
    )),

    literalInteger: $ => token(seq(
      choice(
        NUMERAL_DECIMAL,
        NUMERAL_HEX,
        NUMERAL_OCTAL,
        NUMERAL_BINARY,
      ),
      optional('i')
    )),

    literalText: $ => token(choice(
      LITERAL_TEXT,
      LITERAL_TEXT_BLOCK,
      LITERAL_EXACT_TEXT,
      LITERAL_EXACT_TEXT_BLOCK,
    )),

  }

});
