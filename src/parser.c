#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_SEMI = 3,
  anon_sym_if = 4,
  anon_sym_do = 5,
  anon_sym_else = 6,
  anon_sym_and = 7,
  anon_sym_AMP = 8,
  anon_sym_or = 9,
  anon_sym_PIPE = 10,
  anon_sym_when = 11,
  anon_sym_LT = 12,
  anon_sym_LT_EQ = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_EQ = 16,
  anon_sym_BANG_EQ = 17,
  anon_sym_not = 18,
  anon_sym_in = 19,
  anon_sym_EQ_TILDE = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_is = 22,
  anon_sym_repeat = 23,
  anon_sym_DASH_GT = 24,
  anon_sym_LT_DASH = 25,
  sym_primitiveContent = 26,
  anon_sym_BSLASHout = 27,
  anon_sym_BSLASHerr = 28,
  sym_literalBool = 29,
  sym_literalReal = 30,
  sym_literalNatural = 31,
  sym_literalInteger = 32,
  sym_literalText = 33,
  sym_identifier = 34,
  sym_constantIdentifier = 35,
  sym_typeIdentifier = 36,
  sym_program = 37,
  sym_block = 38,
  sym_statement = 39,
  sym__statementOrBlock = 40,
  sym_ifStatement = 41,
  sym_switchStatement = 42,
  sym_switchBlock = 43,
  sym_switchLabel = 44,
  sym_caseMatch = 45,
  sym_repeatStatement = 46,
  sym_redirection = 47,
  sym__redirectionLTR = 48,
  sym__redirectionRTL = 49,
  sym_primitiveDestination = 50,
  sym_expression = 51,
  sym_type = 52,
  sym__primary = 53,
  sym_literal = 54,
  sym__anyIdentifier = 55,
  aux_sym_program_repeat1 = 56,
  aux_sym_switchBlock_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_do] = "do",
  [anon_sym_else] = "else",
  [anon_sym_and] = "and",
  [anon_sym_AMP] = "&",
  [anon_sym_or] = "or",
  [anon_sym_PIPE] = "|",
  [anon_sym_when] = "when",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_not] = "not",
  [anon_sym_in] = "in",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_is] = "is",
  [anon_sym_repeat] = "repeat",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [sym_primitiveContent] = "primitiveContent",
  [anon_sym_BSLASHout] = "\\out",
  [anon_sym_BSLASHerr] = "\\err",
  [sym_literalBool] = "literalBool",
  [sym_literalReal] = "literalReal",
  [sym_literalNatural] = "literalNatural",
  [sym_literalInteger] = "literalInteger",
  [sym_literalText] = "literalText",
  [sym_identifier] = "identifier",
  [sym_constantIdentifier] = "constantIdentifier",
  [sym_typeIdentifier] = "typeIdentifier",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym__statementOrBlock] = "_statementOrBlock",
  [sym_ifStatement] = "ifStatement",
  [sym_switchStatement] = "switchStatement",
  [sym_switchBlock] = "switchBlock",
  [sym_switchLabel] = "switchLabel",
  [sym_caseMatch] = "caseMatch",
  [sym_repeatStatement] = "repeatStatement",
  [sym_redirection] = "redirection",
  [sym__redirectionLTR] = "_redirectionLTR",
  [sym__redirectionRTL] = "_redirectionRTL",
  [sym_primitiveDestination] = "primitiveDestination",
  [sym_expression] = "expression",
  [sym_type] = "type",
  [sym__primary] = "_primary",
  [sym_literal] = "literal",
  [sym__anyIdentifier] = "_anyIdentifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_switchBlock_repeat1] = "switchBlock_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [sym_primitiveContent] = sym_primitiveContent,
  [anon_sym_BSLASHout] = anon_sym_BSLASHout,
  [anon_sym_BSLASHerr] = anon_sym_BSLASHerr,
  [sym_literalBool] = sym_literalBool,
  [sym_literalReal] = sym_literalReal,
  [sym_literalNatural] = sym_literalNatural,
  [sym_literalInteger] = sym_literalInteger,
  [sym_literalText] = sym_literalText,
  [sym_identifier] = sym_identifier,
  [sym_constantIdentifier] = sym_constantIdentifier,
  [sym_typeIdentifier] = sym_typeIdentifier,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym__statementOrBlock] = sym__statementOrBlock,
  [sym_ifStatement] = sym_ifStatement,
  [sym_switchStatement] = sym_switchStatement,
  [sym_switchBlock] = sym_switchBlock,
  [sym_switchLabel] = sym_switchLabel,
  [sym_caseMatch] = sym_caseMatch,
  [sym_repeatStatement] = sym_repeatStatement,
  [sym_redirection] = sym_redirection,
  [sym__redirectionLTR] = sym__redirectionLTR,
  [sym__redirectionRTL] = sym__redirectionRTL,
  [sym_primitiveDestination] = sym_primitiveDestination,
  [sym_expression] = sym_expression,
  [sym_type] = sym_type,
  [sym__primary] = sym__primary,
  [sym_literal] = sym_literal,
  [sym__anyIdentifier] = sym__anyIdentifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_switchBlock_repeat1] = aux_sym_switchBlock_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_primitiveContent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHerr] = {
    .visible = true,
    .named = false,
  },
  [sym_literalBool] = {
    .visible = true,
    .named = true,
  },
  [sym_literalReal] = {
    .visible = true,
    .named = true,
  },
  [sym_literalNatural] = {
    .visible = true,
    .named = true,
  },
  [sym_literalInteger] = {
    .visible = true,
    .named = true,
  },
  [sym_literalText] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constantIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_typeIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statementOrBlock] = {
    .visible = false,
    .named = true,
  },
  [sym_ifStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_switchStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_switchBlock] = {
    .visible = true,
    .named = true,
  },
  [sym_switchLabel] = {
    .visible = true,
    .named = true,
  },
  [sym_caseMatch] = {
    .visible = true,
    .named = true,
  },
  [sym_repeatStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_redirection] = {
    .visible = true,
    .named = true,
  },
  [sym__redirectionLTR] = {
    .visible = false,
    .named = true,
  },
  [sym__redirectionRTL] = {
    .visible = false,
    .named = true,
  },
  [sym_primitiveDestination] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__primary] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__anyIdentifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switchBlock_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_bop = 2,
  field_case = 3,
  field_condition = 4,
  field_elseBody = 5,
  field_guard = 6,
  field_subject = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_bop] = "bop",
  [field_case] = "case",
  [field_condition] = "condition",
  [field_elseBody] = "elseBody",
  [field_guard] = "guard",
  [field_subject] = "subject",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_subject, 1},
  [2] =
    {field_body, 3},
    {field_condition, 1},
  [4] =
    {field_body, 3},
    {field_condition, 1},
    {field_condition, 2},
  [7] =
    {field_elseBody, 4},
    {field_subject, 1},
  [9] =
    {field_case, 1},
  [10] =
    {field_body, 2},
    {field_case, 0},
  [12] =
    {field_bop, 1},
  [13] =
    {field_guard, 2},
  [14] =
    {field_body, 3},
    {field_condition, 1},
    {field_elseBody, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 10,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 13,
  [23] = 11,
  [24] = 15,
  [25] = 11,
  [26] = 15,
  [27] = 20,
  [28] = 13,
  [29] = 16,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 49,
  [54] = 41,
  [55] = 42,
  [56] = 43,
  [57] = 44,
  [58] = 45,
  [59] = 47,
  [60] = 48,
  [61] = 50,
  [62] = 36,
  [63] = 38,
  [64] = 39,
  [65] = 37,
  [66] = 66,
  [67] = 31,
  [68] = 30,
  [69] = 32,
  [70] = 40,
  [71] = 42,
  [72] = 37,
  [73] = 40,
  [74] = 31,
  [75] = 45,
  [76] = 39,
  [77] = 30,
  [78] = 78,
  [79] = 47,
  [80] = 32,
  [81] = 48,
  [82] = 49,
  [83] = 83,
  [84] = 46,
  [85] = 85,
  [86] = 36,
  [87] = 38,
  [88] = 50,
  [89] = 89,
  [90] = 43,
  [91] = 44,
  [92] = 30,
  [93] = 32,
  [94] = 31,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 97,
  [102] = 102,
  [103] = 102,
  [104] = 96,
  [105] = 105,
  [106] = 99,
  [107] = 102,
  [108] = 99,
  [109] = 96,
  [110] = 97,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 120,
  [125] = 120,
  [126] = 121,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 129,
  [133] = 133,
  [134] = 130,
  [135] = 130,
  [136] = 129,
  [137] = 133,
  [138] = 138,
  [139] = 133,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '!', 17,
        '"', 6,
        '&', 115,
        '\'', 10,
        '-', 19,
        '0', 149,
        ';', 106,
        '<', 120,
        '=', 125,
        '>', 124,
        '\\', 39,
        'a', 45,
        'd', 50,
        'e', 43,
        'f', 32,
        'i', 40,
        'n', 51,
        'o', 54,
        'r', 34,
        't', 56,
        'w', 41,
        '{', 104,
        '|', 118,
        '}', 105,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 17,
        '"', 6,
        '&', 115,
        '\'', 10,
        '0', 149,
        '<', 121,
        '=', 125,
        '>', 124,
        '\\', 39,
        'a', 168,
        'f', 157,
        'i', 164,
        'n', 171,
        'o', 174,
        'r', 160,
        't', 173,
        '{', 104,
        '|', 118,
        '}', 105,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 17,
        '"', 6,
        '&', 115,
        '\'', 10,
        '0', 149,
        '<', 121,
        '=', 125,
        '>', 124,
        '\\', 42,
        'a', 168,
        'f', 157,
        'i', 169,
        'n', 171,
        'o', 174,
        't', 173,
        '{', 104,
        '|', 118,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 17,
        '&', 115,
        '-', 19,
        ';', 106,
        '<', 121,
        '=', 125,
        '>', 124,
        'a', 45,
        'd', 50,
        'e', 43,
        'i', 46,
        'n', 51,
        'o', 54,
        'w', 41,
        '{', 104,
        '|', 118,
        '}', 105,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 6,
        '\'', 10,
        '0', 149,
        '\\', 39,
        'd', 170,
        'f', 157,
        'i', 165,
        'r', 160,
        't', 173,
        '{', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '{') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(152);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(182);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(7);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(11);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(8);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(12);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(100);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(21);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(152);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '"', 6,
        '\'', 10,
        '0', 149,
        ';', 106,
        '<', 14,
        '\\', 39,
        'f', 157,
        'i', 165,
        'r', 160,
        't', 173,
        '{', 104,
        '}', 105,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      ADVANCE_MAP(
        '"', 6,
        '\'', 10,
        '0', 149,
        ';', 106,
        '\\', 39,
        'e', 167,
        'f', 157,
        'i', 165,
        'r', 160,
        't', 173,
        '{', 104,
        '}', 105,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(181);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_primitiveContent);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BSLASHout);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BSLASHerr);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_literalBool);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_literalBool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_literalReal);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_literalNatural);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_literalInteger);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_literalInteger);
      ADVANCE_MAP(
        '.', 74,
        '_', 22,
        'b', 72,
        'i', 148,
        'n', 147,
        'o', 73,
        'r', 144,
        'x', 16,
        'E', 71,
        'e', 71,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_literalText);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_constantIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 101},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 101},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 101},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 101},
  [28] = {.lex_state = 101},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 102},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 102},
  [59] = {.lex_state = 102},
  [60] = {.lex_state = 102},
  [61] = {.lex_state = 102},
  [62] = {.lex_state = 102},
  [63] = {.lex_state = 102},
  [64] = {.lex_state = 102},
  [65] = {.lex_state = 102},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 102},
  [68] = {.lex_state = 102},
  [69] = {.lex_state = 102},
  [70] = {.lex_state = 102},
  [71] = {.lex_state = 101},
  [72] = {.lex_state = 102},
  [73] = {.lex_state = 102},
  [74] = {.lex_state = 101},
  [75] = {.lex_state = 101},
  [76] = {.lex_state = 101},
  [77] = {.lex_state = 101},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 101},
  [80] = {.lex_state = 101},
  [81] = {.lex_state = 101},
  [82] = {.lex_state = 101},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 101},
  [85] = {.lex_state = 101},
  [86] = {.lex_state = 101},
  [87] = {.lex_state = 101},
  [88] = {.lex_state = 101},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 101},
  [91] = {.lex_state = 101},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 49},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 101},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 101},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 101},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [sym_primitiveContent] = ACTIONS(1),
    [anon_sym_BSLASHout] = ACTIONS(1),
    [anon_sym_BSLASHerr] = ACTIONS(1),
    [sym_literalBool] = ACTIONS(1),
    [sym_literalReal] = ACTIONS(1),
    [sym_literalNatural] = ACTIONS(1),
    [sym_literalInteger] = ACTIONS(1),
    [sym_literalText] = ACTIONS(1),
    [sym_constantIdentifier] = ACTIONS(1),
    [sym_typeIdentifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(138),
    [sym_statement] = STATE(85),
    [sym_ifStatement] = STATE(90),
    [sym_switchStatement] = STATE(90),
    [sym_repeatStatement] = STATE(90),
    [sym_redirection] = STATE(90),
    [sym__redirectionLTR] = STATE(91),
    [sym__redirectionRTL] = STATE(91),
    [sym_primitiveDestination] = STATE(139),
    [sym_expression] = STATE(132),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [2] = {
    [sym_statement] = STATE(85),
    [sym_ifStatement] = STATE(90),
    [sym_switchStatement] = STATE(90),
    [sym_switchLabel] = STATE(33),
    [sym_caseMatch] = STATE(118),
    [sym_repeatStatement] = STATE(90),
    [sym_redirection] = STATE(90),
    [sym__redirectionLTR] = STATE(91),
    [sym__redirectionRTL] = STATE(91),
    [sym_primitiveDestination] = STATE(139),
    [sym_expression] = STATE(128),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_switchBlock_repeat1] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_EQ_TILDE] = ACTIONS(27),
    [anon_sym_TILDE_EQ] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(31),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [3] = {
    [sym_statement] = STATE(85),
    [sym_ifStatement] = STATE(90),
    [sym_switchStatement] = STATE(90),
    [sym_switchLabel] = STATE(35),
    [sym_caseMatch] = STATE(118),
    [sym_repeatStatement] = STATE(90),
    [sym_redirection] = STATE(90),
    [sym__redirectionLTR] = STATE(91),
    [sym__redirectionRTL] = STATE(91),
    [sym_primitiveDestination] = STATE(139),
    [sym_expression] = STATE(128),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(14),
    [aux_sym_switchBlock_repeat1] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_EQ_TILDE] = ACTIONS(27),
    [anon_sym_TILDE_EQ] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(31),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [4] = {
    [sym_statement] = STATE(85),
    [sym_ifStatement] = STATE(90),
    [sym_switchStatement] = STATE(90),
    [sym_switchLabel] = STATE(35),
    [sym_caseMatch] = STATE(118),
    [sym_repeatStatement] = STATE(90),
    [sym_redirection] = STATE(90),
    [sym__redirectionLTR] = STATE(91),
    [sym__redirectionRTL] = STATE(91),
    [sym_primitiveDestination] = STATE(139),
    [sym_expression] = STATE(128),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym_switchBlock_repeat1] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_EQ_TILDE] = ACTIONS(27),
    [anon_sym_TILDE_EQ] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(31),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [5] = {
    [sym_block] = STATE(36),
    [sym_statement] = STATE(36),
    [sym__statementOrBlock] = STATE(36),
    [sym_ifStatement] = STATE(43),
    [sym_switchStatement] = STATE(43),
    [sym_switchBlock] = STATE(37),
    [sym_repeatStatement] = STATE(43),
    [sym_redirection] = STATE(43),
    [sym__redirectionLTR] = STATE(44),
    [sym__redirectionRTL] = STATE(44),
    [sym_primitiveDestination] = STATE(137),
    [sym_expression] = STATE(129),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_do] = ACTIONS(41),
    [anon_sym_repeat] = ACTIONS(43),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [6] = {
    [sym_caseMatch] = STATE(117),
    [sym_expression] = STATE(131),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(27),
    [anon_sym_GT_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(25),
    [anon_sym_BANG_EQ] = ACTIONS(27),
    [anon_sym_not] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(25),
    [anon_sym_EQ_TILDE] = ACTIONS(27),
    [anon_sym_TILDE_EQ] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(31),
    [sym_primitiveContent] = ACTIONS(11),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [7] = {
    [sym_block] = STATE(86),
    [sym_statement] = STATE(86),
    [sym__statementOrBlock] = STATE(86),
    [sym_ifStatement] = STATE(90),
    [sym_switchStatement] = STATE(90),
    [sym_switchBlock] = STATE(65),
    [sym_repeatStatement] = STATE(90),
    [sym_redirection] = STATE(90),
    [sym__redirectionLTR] = STATE(91),
    [sym__redirectionRTL] = STATE(91),
    [sym_primitiveDestination] = STATE(139),
    [sym_expression] = STATE(132),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_do] = ACTIONS(47),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
  [8] = {
    [sym_block] = STATE(62),
    [sym_statement] = STATE(62),
    [sym__statementOrBlock] = STATE(62),
    [sym_ifStatement] = STATE(56),
    [sym_switchStatement] = STATE(56),
    [sym_switchBlock] = STATE(72),
    [sym_repeatStatement] = STATE(56),
    [sym_redirection] = STATE(56),
    [sym__redirectionLTR] = STATE(57),
    [sym__redirectionRTL] = STATE(57),
    [sym_primitiveDestination] = STATE(133),
    [sym_expression] = STATE(136),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_repeat] = ACTIONS(55),
    [sym_primitiveContent] = ACTIONS(11),
    [anon_sym_BSLASHout] = ACTIONS(13),
    [anon_sym_BSLASHerr] = ACTIONS(13),
    [sym_literalBool] = ACTIONS(15),
    [sym_literalReal] = ACTIONS(17),
    [sym_literalNatural] = ACTIONS(17),
    [sym_literalInteger] = ACTIONS(15),
    [sym_literalText] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [sym_constantIdentifier] = ACTIONS(19),
    [sym_typeIdentifier] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_repeat,
    ACTIONS(68), 1,
      sym_primitiveContent,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(71), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(74), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(77), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(80), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [62] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [123] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(55), 1,
      anon_sym_repeat,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_if,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(136), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(57), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(58), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(56), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [180] = 15,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_repeat,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_statement,
    STATE(129), 1,
      sym_expression,
    STATE(137), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(44), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    STATE(78), 2,
      sym_block,
      sym__statementOrBlock,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(43), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [239] = 14,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(76), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [296] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [357] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(128), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [418] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_repeat,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(136), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(57), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(70), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(56), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [475] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_repeat,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_expression,
    STATE(137), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(44), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(40), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(43), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [532] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [593] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [654] = 14,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [711] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_repeat,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(136), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(57), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(63), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(56), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [768] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_repeat,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(136), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(57), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(56), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [825] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(43), 1,
      anon_sym_repeat,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      anon_sym_if,
    STATE(129), 1,
      sym_expression,
    STATE(137), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(44), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(45), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(43), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [882] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(128), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [943] = 14,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_if,
    STATE(132), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(75), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1000] = 16,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_program_repeat1,
    STATE(85), 1,
      sym_statement,
    STATE(128), 1,
      sym_expression,
    STATE(139), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(91), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(90), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1061] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_repeat,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_expression,
    STATE(137), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(44), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(38), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(43), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1118] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(43), 1,
      anon_sym_repeat,
    ACTIONS(89), 1,
      anon_sym_LBRACE,
    STATE(129), 1,
      sym_expression,
    STATE(137), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(44), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(39), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(43), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1175] = 14,
    ACTIONS(11), 1,
      sym_primitiveContent,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_repeat,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(136), 1,
      sym_expression,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(57), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(73), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(56), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1232] = 2,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(103), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_do,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
      anon_sym_DASH_GT,
  [1259] = 2,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(107), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_do,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
      anon_sym_DASH_GT,
  [1286] = 2,
    ACTIONS(113), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(111), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_do,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
      anon_sym_DASH_GT,
  [1313] = 8,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(34), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(27), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [1350] = 8,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      anon_sym_not,
    ACTIONS(137), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(34), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(131), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(128), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [1387] = 8,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      anon_sym_is,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_caseMatch,
    STATE(34), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(27), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [1424] = 2,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(142), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1448] = 3,
    ACTIONS(148), 1,
      anon_sym_else,
    ACTIONS(150), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(146), 15,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1474] = 2,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(152), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1498] = 2,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(156), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1522] = 3,
    ACTIONS(162), 1,
      anon_sym_else,
    ACTIONS(164), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(160), 15,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1548] = 2,
    ACTIONS(168), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(166), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1572] = 2,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(170), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1596] = 2,
    ACTIONS(176), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(174), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1620] = 2,
    ACTIONS(180), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(178), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1644] = 2,
    ACTIONS(184), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(182), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1668] = 2,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(186), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1692] = 2,
    ACTIONS(192), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(190), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1716] = 2,
    ACTIONS(196), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(194), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1740] = 2,
    ACTIONS(200), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(198), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1764] = 2,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(202), 16,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [1788] = 7,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(33), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(27), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [1822] = 7,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(35), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(27), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [1856] = 2,
    ACTIONS(200), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(198), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [1879] = 2,
    ACTIONS(168), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [1902] = 2,
    ACTIONS(172), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [1925] = 2,
    ACTIONS(176), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [1948] = 2,
    ACTIONS(180), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [1971] = 2,
    ACTIONS(184), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [1994] = 2,
    ACTIONS(192), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(190), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2017] = 2,
    ACTIONS(196), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(194), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2040] = 2,
    ACTIONS(204), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(202), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2063] = 2,
    ACTIONS(144), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2086] = 2,
    ACTIONS(154), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2109] = 2,
    ACTIONS(158), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2132] = 3,
    ACTIONS(206), 1,
      anon_sym_else,
    ACTIONS(150), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2157] = 3,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(208), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [2182] = 2,
    ACTIONS(109), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2205] = 2,
    ACTIONS(105), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2228] = 2,
    ACTIONS(113), 8,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2251] = 3,
    ACTIONS(214), 1,
      anon_sym_else,
    ACTIONS(164), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(160), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2276] = 2,
    ACTIONS(172), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LT_DASH,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2299] = 3,
    ACTIONS(216), 1,
      anon_sym_else,
    ACTIONS(150), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2324] = 3,
    ACTIONS(218), 1,
      anon_sym_else,
    ACTIONS(164), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(160), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2349] = 2,
    ACTIONS(109), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2371] = 2,
    ACTIONS(184), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(182), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2393] = 2,
    ACTIONS(158), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(156), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2415] = 2,
    ACTIONS(105), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2437] = 2,
    ACTIONS(222), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(220), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_not,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
      anon_sym_is,
  [2459] = 2,
    ACTIONS(192), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(190), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2481] = 2,
    ACTIONS(113), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2503] = 2,
    ACTIONS(196), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(194), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2525] = 2,
    ACTIONS(200), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(198), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2547] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      anon_sym_is,
    STATE(117), 1,
      sym_caseMatch,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(27), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [2577] = 2,
    ACTIONS(188), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(186), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2599] = 3,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(228), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2623] = 2,
    ACTIONS(144), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2645] = 2,
    ACTIONS(154), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2667] = 2,
    ACTIONS(204), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(202), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2689] = 6,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_not,
    ACTIONS(121), 1,
      anon_sym_is,
    STATE(111), 1,
      sym_caseMatch,
    ACTIONS(25), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(27), 10,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [2719] = 2,
    ACTIONS(176), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2741] = 2,
    ACTIONS(180), 7,
      anon_sym_if,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2763] = 2,
    ACTIONS(103), 7,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(105), 8,
      anon_sym_if,
      anon_sym_do,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2783] = 2,
    ACTIONS(111), 7,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(113), 8,
      anon_sym_if,
      anon_sym_do,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2803] = 2,
    ACTIONS(107), 7,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(109), 8,
      anon_sym_if,
      anon_sym_do,
      anon_sym_repeat,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2823] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(112), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2852] = 7,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      sym_primitiveContent,
    STATE(81), 1,
      sym_expression,
    ACTIONS(234), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(236), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(238), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(77), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2881] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(120), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2910] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(113), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2939] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(131), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2968] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(135), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2997] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(125), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3026] = 7,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_primitiveContent,
    STATE(8), 1,
      sym_expression,
    ACTIONS(244), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(246), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(248), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(92), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3055] = 7,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_primitiveContent,
    STATE(7), 1,
      sym_expression,
    ACTIONS(244), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(246), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(248), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(92), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3084] = 7,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      sym_primitiveContent,
    STATE(60), 1,
      sym_expression,
    ACTIONS(254), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(256), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(258), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(68), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3113] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(115), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3142] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(130), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3171] = 7,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      sym_primitiveContent,
    STATE(5), 1,
      sym_expression,
    ACTIONS(244), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(246), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(248), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(92), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3200] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(134), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3229] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(48), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3258] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_primitiveContent,
    STATE(124), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(17), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(19), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3287] = 1,
    ACTIONS(260), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3297] = 1,
    ACTIONS(262), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3307] = 1,
    ACTIONS(264), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3317] = 1,
    ACTIONS(266), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3327] = 1,
    ACTIONS(268), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3337] = 1,
    ACTIONS(270), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3347] = 3,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_when,
    ACTIONS(274), 4,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
  [3360] = 3,
    ACTIONS(276), 1,
      anon_sym_when,
    ACTIONS(278), 1,
      anon_sym_do,
    ACTIONS(274), 4,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
  [3373] = 3,
    ACTIONS(282), 1,
      sym_typeIdentifier,
    STATE(115), 1,
      sym_type,
    ACTIONS(280), 2,
      anon_sym_not,
      sym_identifier,
  [3384] = 3,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_do,
    STATE(65), 1,
      sym_switchBlock,
  [3394] = 2,
    STATE(82), 1,
      sym_primitiveDestination,
    ACTIONS(13), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [3402] = 2,
    STATE(53), 1,
      sym_primitiveDestination,
    ACTIONS(288), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [3410] = 1,
    ACTIONS(290), 3,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [3416] = 3,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_do,
    STATE(72), 1,
      sym_switchBlock,
  [3426] = 3,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_do,
    STATE(37), 1,
      sym_switchBlock,
  [3436] = 2,
    STATE(49), 1,
      sym_primitiveDestination,
    ACTIONS(298), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [3444] = 2,
    ACTIONS(282), 1,
      sym_typeIdentifier,
    STATE(113), 1,
      sym_type,
  [3451] = 2,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      anon_sym_DASH_GT,
  [3458] = 1,
    ACTIONS(304), 1,
      anon_sym_DASH_GT,
  [3462] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [3466] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [3470] = 1,
    ACTIONS(302), 1,
      anon_sym_DASH_GT,
  [3474] = 1,
    ACTIONS(308), 1,
      anon_sym_LT_DASH,
  [3478] = 1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
  [3482] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
  [3486] = 1,
    ACTIONS(314), 1,
      anon_sym_DASH_GT,
  [3490] = 1,
    ACTIONS(316), 1,
      anon_sym_LT_DASH,
  [3494] = 1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [3498] = 1,
    ACTIONS(320), 1,
      anon_sym_LT_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 62,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 475,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 593,
  [SMALL_STATE(20)] = 654,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 825,
  [SMALL_STATE(24)] = 882,
  [SMALL_STATE(25)] = 943,
  [SMALL_STATE(26)] = 1000,
  [SMALL_STATE(27)] = 1061,
  [SMALL_STATE(28)] = 1118,
  [SMALL_STATE(29)] = 1175,
  [SMALL_STATE(30)] = 1232,
  [SMALL_STATE(31)] = 1259,
  [SMALL_STATE(32)] = 1286,
  [SMALL_STATE(33)] = 1313,
  [SMALL_STATE(34)] = 1350,
  [SMALL_STATE(35)] = 1387,
  [SMALL_STATE(36)] = 1424,
  [SMALL_STATE(37)] = 1448,
  [SMALL_STATE(38)] = 1474,
  [SMALL_STATE(39)] = 1498,
  [SMALL_STATE(40)] = 1522,
  [SMALL_STATE(41)] = 1548,
  [SMALL_STATE(42)] = 1572,
  [SMALL_STATE(43)] = 1596,
  [SMALL_STATE(44)] = 1620,
  [SMALL_STATE(45)] = 1644,
  [SMALL_STATE(46)] = 1668,
  [SMALL_STATE(47)] = 1692,
  [SMALL_STATE(48)] = 1716,
  [SMALL_STATE(49)] = 1740,
  [SMALL_STATE(50)] = 1764,
  [SMALL_STATE(51)] = 1788,
  [SMALL_STATE(52)] = 1822,
  [SMALL_STATE(53)] = 1856,
  [SMALL_STATE(54)] = 1879,
  [SMALL_STATE(55)] = 1902,
  [SMALL_STATE(56)] = 1925,
  [SMALL_STATE(57)] = 1948,
  [SMALL_STATE(58)] = 1971,
  [SMALL_STATE(59)] = 1994,
  [SMALL_STATE(60)] = 2017,
  [SMALL_STATE(61)] = 2040,
  [SMALL_STATE(62)] = 2063,
  [SMALL_STATE(63)] = 2086,
  [SMALL_STATE(64)] = 2109,
  [SMALL_STATE(65)] = 2132,
  [SMALL_STATE(66)] = 2157,
  [SMALL_STATE(67)] = 2182,
  [SMALL_STATE(68)] = 2205,
  [SMALL_STATE(69)] = 2228,
  [SMALL_STATE(70)] = 2251,
  [SMALL_STATE(71)] = 2276,
  [SMALL_STATE(72)] = 2299,
  [SMALL_STATE(73)] = 2324,
  [SMALL_STATE(74)] = 2349,
  [SMALL_STATE(75)] = 2371,
  [SMALL_STATE(76)] = 2393,
  [SMALL_STATE(77)] = 2415,
  [SMALL_STATE(78)] = 2437,
  [SMALL_STATE(79)] = 2459,
  [SMALL_STATE(80)] = 2481,
  [SMALL_STATE(81)] = 2503,
  [SMALL_STATE(82)] = 2525,
  [SMALL_STATE(83)] = 2547,
  [SMALL_STATE(84)] = 2577,
  [SMALL_STATE(85)] = 2599,
  [SMALL_STATE(86)] = 2623,
  [SMALL_STATE(87)] = 2645,
  [SMALL_STATE(88)] = 2667,
  [SMALL_STATE(89)] = 2689,
  [SMALL_STATE(90)] = 2719,
  [SMALL_STATE(91)] = 2741,
  [SMALL_STATE(92)] = 2763,
  [SMALL_STATE(93)] = 2783,
  [SMALL_STATE(94)] = 2803,
  [SMALL_STATE(95)] = 2823,
  [SMALL_STATE(96)] = 2852,
  [SMALL_STATE(97)] = 2881,
  [SMALL_STATE(98)] = 2910,
  [SMALL_STATE(99)] = 2939,
  [SMALL_STATE(100)] = 2968,
  [SMALL_STATE(101)] = 2997,
  [SMALL_STATE(102)] = 3026,
  [SMALL_STATE(103)] = 3055,
  [SMALL_STATE(104)] = 3084,
  [SMALL_STATE(105)] = 3113,
  [SMALL_STATE(106)] = 3142,
  [SMALL_STATE(107)] = 3171,
  [SMALL_STATE(108)] = 3200,
  [SMALL_STATE(109)] = 3229,
  [SMALL_STATE(110)] = 3258,
  [SMALL_STATE(111)] = 3287,
  [SMALL_STATE(112)] = 3297,
  [SMALL_STATE(113)] = 3307,
  [SMALL_STATE(114)] = 3317,
  [SMALL_STATE(115)] = 3327,
  [SMALL_STATE(116)] = 3337,
  [SMALL_STATE(117)] = 3347,
  [SMALL_STATE(118)] = 3360,
  [SMALL_STATE(119)] = 3373,
  [SMALL_STATE(120)] = 3384,
  [SMALL_STATE(121)] = 3394,
  [SMALL_STATE(122)] = 3402,
  [SMALL_STATE(123)] = 3410,
  [SMALL_STATE(124)] = 3416,
  [SMALL_STATE(125)] = 3426,
  [SMALL_STATE(126)] = 3436,
  [SMALL_STATE(127)] = 3444,
  [SMALL_STATE(128)] = 3451,
  [SMALL_STATE(129)] = 3458,
  [SMALL_STATE(130)] = 3462,
  [SMALL_STATE(131)] = 3466,
  [SMALL_STATE(132)] = 3470,
  [SMALL_STATE(133)] = 3474,
  [SMALL_STATE(134)] = 3478,
  [SMALL_STATE(135)] = 3482,
  [SMALL_STATE(136)] = 3486,
  [SMALL_STATE(137)] = 3490,
  [SMALL_STATE(138)] = 3494,
  [SMALL_STATE(139)] = 3498,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeatStatement, 4, 0, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeatStatement, 4, 0, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 3, 0, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 3, 0, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 5, 0, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 5, 0, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6, 0, 10),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 6, 0, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 4, 0, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 4, 0, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchBlock, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchBlock, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeatStatement, 2, 0, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeatStatement, 2, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statementOrBlock, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statementOrBlock, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchLabel, 3, 0, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchLabel, 3, 0, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 8),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 9),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_giovi(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
