#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_DASH_GT = 23,
  anon_sym_LT_DASH = 24,
  sym_primitiveContent = 25,
  anon_sym_BSLASHout = 26,
  anon_sym_BSLASHerr = 27,
  sym_literalBool = 28,
  sym_literalReal = 29,
  sym_literalNatural = 30,
  sym_literalInteger = 31,
  sym_literalText = 32,
  sym_identifier = 33,
  sym_constantIdentifier = 34,
  sym_typeIdentifier = 35,
  sym_program = 36,
  sym_block = 37,
  sym_statement = 38,
  sym__statementOrBlock = 39,
  sym_ifStatement = 40,
  sym_switchStatement = 41,
  sym_switchBlock = 42,
  sym_switchLabel = 43,
  sym_caseMatch = 44,
  sym_redirection = 45,
  sym__redirectionLTR = 46,
  sym__redirectionRTL = 47,
  sym_primitiveDestination = 48,
  sym_expression = 49,
  sym_type = 50,
  sym__primary = 51,
  sym_literal = 52,
  sym__anyIdentifier = 53,
  aux_sym_program_repeat1 = 54,
  aux_sym_switchBlock_repeat1 = 55,
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_subject, 1},
  [1] =
    {field_body, 3},
    {field_condition, 1},
  [3] =
    {field_elseBody, 4},
    {field_subject, 1},
  [5] =
    {field_case, 1},
  [6] =
    {field_body, 2},
    {field_case, 0},
  [8] =
    {field_bop, 1},
  [9] =
    {field_guard, 2},
  [10] =
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
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 3,
  [11] = 4,
  [12] = 6,
  [13] = 7,
  [14] = 9,
  [15] = 6,
  [16] = 7,
  [17] = 9,
  [18] = 3,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 30,
  [44] = 44,
  [45] = 31,
  [46] = 38,
  [47] = 40,
  [48] = 26,
  [49] = 28,
  [50] = 29,
  [51] = 36,
  [52] = 33,
  [53] = 20,
  [54] = 22,
  [55] = 35,
  [56] = 21,
  [57] = 57,
  [58] = 36,
  [59] = 37,
  [60] = 60,
  [61] = 35,
  [62] = 32,
  [63] = 22,
  [64] = 40,
  [65] = 26,
  [66] = 21,
  [67] = 27,
  [68] = 20,
  [69] = 28,
  [70] = 29,
  [71] = 30,
  [72] = 32,
  [73] = 31,
  [74] = 33,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 77,
  [83] = 77,
  [84] = 79,
  [85] = 76,
  [86] = 86,
  [87] = 79,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 98,
  [102] = 97,
  [103] = 97,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 106,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 107,
  [113] = 106,
  [114] = 107,
  [115] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '!', 14,
        '"', 3,
        '&', 105,
        '\'', 7,
        '-', 16,
        '0', 134,
        ';', 98,
        '<', 109,
        '=', 114,
        '>', 113,
        '\\', 33,
        'a', 39,
        'd', 44,
        'e', 37,
        'f', 28,
        'i', 34,
        'n', 45,
        'o', 47,
        't', 49,
        'w', 35,
        '{', 96,
        '|', 107,
        '}', 97,
        '~', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 14,
        '&', 105,
        '-', 16,
        ';', 98,
        '<', 110,
        '=', 114,
        '>', 113,
        'a', 39,
        'd', 44,
        'e', 37,
        'i', 40,
        'n', 45,
        'o', 47,
        'w', 35,
        '{', 96,
        '|', 107,
        '}', 97,
        '~', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '{') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(4);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(5);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(18);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '"', 3,
        '\'', 7,
        '0', 134,
        ';', 98,
        '<', 11,
        '\\', 33,
        'f', 142,
        'i', 145,
        't', 149,
        '{', 96,
        '}', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      ADVANCE_MAP(
        '"', 3,
        '\'', 7,
        '0', 134,
        ';', 98,
        '\\', 33,
        'e', 147,
        'f', 142,
        'i', 145,
        't', 149,
        '{', 96,
        '}', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_primitiveContent);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHout);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASHerr);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_literalBool);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_literalBool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_literalReal);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_literalNatural);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_literalInteger);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_literalInteger);
      ADVANCE_MAP(
        '.', 66,
        '_', 19,
        'b', 64,
        'i', 133,
        'n', 132,
        'o', 65,
        'r', 129,
        'x', 13,
        'E', 63,
        'e', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_literalText);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_constantIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 93},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 93},
  [6] = {.lex_state = 93},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 93},
  [9] = {.lex_state = 93},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 93},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 93},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 94},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 94},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 94},
  [52] = {.lex_state = 94},
  [53] = {.lex_state = 94},
  [54] = {.lex_state = 94},
  [55] = {.lex_state = 94},
  [56] = {.lex_state = 94},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 94},
  [59] = {.lex_state = 94},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 93},
  [66] = {.lex_state = 93},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 93},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 43},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 93},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 93},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 93},
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
    [sym_program] = STATE(110),
    [sym_statement] = STATE(75),
    [sym_ifStatement] = STATE(64),
    [sym_switchStatement] = STATE(64),
    [sym_redirection] = STATE(64),
    [sym__redirectionLTR] = STATE(65),
    [sym__redirectionRTL] = STATE(65),
    [sym_primitiveDestination] = STATE(109),
    [sym_expression] = STATE(108),
    [sym__primary] = STATE(22),
    [sym_literal] = STATE(22),
    [sym__anyIdentifier] = STATE(22),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [sym_primitiveContent] = ACTIONS(9),
    [anon_sym_BSLASHout] = ACTIONS(11),
    [anon_sym_BSLASHerr] = ACTIONS(11),
    [sym_literalBool] = ACTIONS(13),
    [sym_literalReal] = ACTIONS(15),
    [sym_literalNatural] = ACTIONS(15),
    [sym_literalInteger] = ACTIONS(13),
    [sym_literalText] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_constantIdentifier] = ACTIONS(17),
    [sym_typeIdentifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(24), 1,
      anon_sym_if,
    ACTIONS(27), 1,
      sym_primitiveContent,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(30), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(33), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(36), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(39), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [58] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_if,
    STATE(106), 1,
      sym_expression,
    STATE(115), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(48), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(47), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
    STATE(52), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
  [111] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_if,
    STATE(106), 1,
      sym_expression,
    STATE(115), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(48), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(47), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
    STATE(51), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
  [164] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_if,
    STATE(106), 1,
      sym_expression,
    STATE(115), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(48), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(47), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
    STATE(58), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
  [217] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(104), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [274] = 13,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
    STATE(72), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
  [327] = 14,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_if,
    STATE(41), 1,
      sym_statement,
    STATE(111), 1,
      sym_primitiveDestination,
    STATE(113), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(26), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    STATE(44), 2,
      sym_block,
      sym__statementOrBlock,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(40), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [382] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [439] = 13,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
    STATE(74), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
  [492] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_if,
    STATE(111), 1,
      sym_primitiveDestination,
    STATE(113), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(26), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(36), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(40), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [545] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(104), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [602] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_if,
    STATE(106), 1,
      sym_expression,
    STATE(115), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(48), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(47), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
    STATE(62), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
  [655] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [712] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(104), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [769] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_if,
    STATE(111), 1,
      sym_primitiveDestination,
    STATE(113), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(26), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(32), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(40), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [822] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [879] = 13,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_if,
    STATE(111), 1,
      sym_primitiveDestination,
    STATE(113), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(26), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(33), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(40), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [932] = 15,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      sym_primitiveContent,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_program_repeat1,
    STATE(75), 1,
      sym_statement,
    STATE(108), 1,
      sym_expression,
    STATE(109), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(65), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 3,
      sym_ifStatement,
      sym_switchStatement,
      sym_redirection,
  [989] = 2,
    ACTIONS(68), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(66), 19,
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
  [1016] = 2,
    ACTIONS(72), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(70), 19,
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
  [1043] = 2,
    ACTIONS(76), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(74), 19,
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
  [1070] = 8,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_is,
    STATE(95), 1,
      sym_caseMatch,
    STATE(24), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(82), 10,
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
  [1107] = 8,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_not,
    ACTIONS(104), 1,
      anon_sym_is,
    STATE(95), 1,
      sym_caseMatch,
    STATE(24), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(95), 10,
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
  [1144] = 8,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_is,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_caseMatch,
    STATE(24), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(82), 10,
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
  [1181] = 2,
    ACTIONS(111), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(109), 16,
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
  [1205] = 2,
    ACTIONS(115), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(113), 16,
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
  [1229] = 2,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(117), 16,
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
  [1253] = 2,
    ACTIONS(123), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(121), 16,
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
  [1277] = 2,
    ACTIONS(127), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(125), 16,
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
  [1301] = 2,
    ACTIONS(131), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(129), 16,
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
  [1325] = 2,
    ACTIONS(135), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(133), 16,
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
  [1349] = 2,
    ACTIONS(139), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(137), 16,
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
  [1373] = 7,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_is,
    STATE(95), 1,
      sym_caseMatch,
    STATE(23), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(82), 10,
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
  [1407] = 3,
    ACTIONS(143), 1,
      anon_sym_else,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(141), 15,
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
  [1433] = 3,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(147), 15,
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
  [1459] = 2,
    ACTIONS(155), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(153), 16,
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
  [1483] = 2,
    ACTIONS(159), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(157), 16,
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
  [1507] = 7,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_is,
    STATE(95), 1,
      sym_caseMatch,
    STATE(25), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(82), 10,
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
  [1541] = 2,
    ACTIONS(163), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(161), 16,
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
  [1565] = 3,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(165), 14,
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
  [1590] = 2,
    ACTIONS(159), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(157), 11,
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
  [1612] = 2,
    ACTIONS(127), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(125), 10,
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
  [1634] = 2,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(171), 14,
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
  [1656] = 2,
    ACTIONS(131), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(129), 10,
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
  [1678] = 2,
    ACTIONS(159), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(157), 10,
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
  [1700] = 2,
    ACTIONS(163), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(161), 10,
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
  [1722] = 2,
    ACTIONS(111), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(109), 10,
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
  [1744] = 2,
    ACTIONS(119), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(117), 10,
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
  [1766] = 2,
    ACTIONS(123), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(121), 10,
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
  [1788] = 3,
    ACTIONS(175), 1,
      anon_sym_else,
    ACTIONS(151), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(147), 10,
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
  [1812] = 2,
    ACTIONS(139), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(137), 10,
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
  [1834] = 2,
    ACTIONS(68), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(66), 10,
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
  [1856] = 2,
    ACTIONS(76), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(74), 10,
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
  [1878] = 3,
    ACTIONS(177), 1,
      anon_sym_else,
    ACTIONS(145), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(141), 10,
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
    ACTIONS(72), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(70), 10,
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
  [1924] = 6,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_is,
    STATE(94), 1,
      sym_caseMatch,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(82), 10,
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
  [1954] = 3,
    ACTIONS(179), 1,
      anon_sym_else,
    ACTIONS(151), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(147), 10,
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
  [1978] = 2,
    ACTIONS(155), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(153), 10,
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
  [2000] = 6,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_is,
    STATE(89), 1,
      sym_caseMatch,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(82), 10,
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
  [2030] = 3,
    ACTIONS(181), 1,
      anon_sym_else,
    ACTIONS(145), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(141), 10,
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
  [2054] = 2,
    ACTIONS(135), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(133), 10,
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
  [2076] = 2,
    ACTIONS(76), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(74), 10,
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
  [2097] = 2,
    ACTIONS(163), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(161), 10,
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
  [2118] = 2,
    ACTIONS(111), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(109), 10,
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
  [2139] = 2,
    ACTIONS(72), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(70), 10,
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
  [2160] = 2,
    ACTIONS(115), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(113), 10,
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
  [2181] = 2,
    ACTIONS(68), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(66), 10,
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
  [2202] = 2,
    ACTIONS(119), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(117), 10,
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
  [2223] = 2,
    ACTIONS(123), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(121), 10,
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
  [2244] = 2,
    ACTIONS(127), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(125), 10,
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
  [2265] = 2,
    ACTIONS(135), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(133), 10,
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
  [2286] = 2,
    ACTIONS(131), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(129), 10,
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
  [2307] = 2,
    ACTIONS(139), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(137), 10,
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
  [2328] = 3,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(187), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [2351] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(107), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2380] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(103), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2409] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(88), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2438] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(28), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2467] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(112), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2496] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(91), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2525] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(102), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2554] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(97), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2583] = 7,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      sym_primitiveContent,
    STATE(69), 1,
      sym_expression,
    ACTIONS(193), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(195), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(197), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(63), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2612] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(114), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2641] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(92), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(15), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(17), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(22), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2670] = 7,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      sym_primitiveContent,
    STATE(49), 1,
      sym_expression,
    ACTIONS(203), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(205), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(207), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(54), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [2699] = 1,
    ACTIONS(209), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [2709] = 1,
    ACTIONS(211), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [2719] = 1,
    ACTIONS(213), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [2729] = 1,
    ACTIONS(215), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [2739] = 1,
    ACTIONS(217), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [2749] = 1,
    ACTIONS(219), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [2759] = 3,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_when,
    ACTIONS(223), 4,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
  [2772] = 3,
    ACTIONS(225), 1,
      anon_sym_when,
    ACTIONS(227), 1,
      anon_sym_do,
    ACTIONS(223), 4,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
  [2785] = 3,
    ACTIONS(231), 1,
      sym_typeIdentifier,
    STATE(88), 1,
      sym_type,
    ACTIONS(229), 2,
      anon_sym_not,
      sym_identifier,
  [2796] = 3,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_do,
    STATE(35), 1,
      sym_switchBlock,
  [2806] = 2,
    STATE(29), 1,
      sym_primitiveDestination,
    ACTIONS(237), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [2814] = 2,
    STATE(70), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [2822] = 1,
    ACTIONS(239), 3,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [2828] = 2,
    STATE(50), 1,
      sym_primitiveDestination,
    ACTIONS(241), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [2836] = 3,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_do,
    STATE(55), 1,
      sym_switchBlock,
  [2846] = 3,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(247), 1,
      anon_sym_do,
    STATE(61), 1,
      sym_switchBlock,
  [2856] = 2,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
  [2863] = 2,
    ACTIONS(231), 1,
      sym_typeIdentifier,
    STATE(91), 1,
      sym_type,
  [2870] = 1,
    ACTIONS(253), 1,
      anon_sym_DASH_GT,
  [2874] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [2878] = 1,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
  [2882] = 1,
    ACTIONS(257), 1,
      anon_sym_LT_DASH,
  [2886] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [2890] = 1,
    ACTIONS(261), 1,
      anon_sym_LT_DASH,
  [2894] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
  [2898] = 1,
    ACTIONS(263), 1,
      anon_sym_DASH_GT,
  [2902] = 1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
  [2906] = 1,
    ACTIONS(267), 1,
      anon_sym_LT_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 217,
  [SMALL_STATE(7)] = 274,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 382,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 492,
  [SMALL_STATE(12)] = 545,
  [SMALL_STATE(13)] = 602,
  [SMALL_STATE(14)] = 655,
  [SMALL_STATE(15)] = 712,
  [SMALL_STATE(16)] = 769,
  [SMALL_STATE(17)] = 822,
  [SMALL_STATE(18)] = 879,
  [SMALL_STATE(19)] = 932,
  [SMALL_STATE(20)] = 989,
  [SMALL_STATE(21)] = 1016,
  [SMALL_STATE(22)] = 1043,
  [SMALL_STATE(23)] = 1070,
  [SMALL_STATE(24)] = 1107,
  [SMALL_STATE(25)] = 1144,
  [SMALL_STATE(26)] = 1181,
  [SMALL_STATE(27)] = 1205,
  [SMALL_STATE(28)] = 1229,
  [SMALL_STATE(29)] = 1253,
  [SMALL_STATE(30)] = 1277,
  [SMALL_STATE(31)] = 1301,
  [SMALL_STATE(32)] = 1325,
  [SMALL_STATE(33)] = 1349,
  [SMALL_STATE(34)] = 1373,
  [SMALL_STATE(35)] = 1407,
  [SMALL_STATE(36)] = 1433,
  [SMALL_STATE(37)] = 1459,
  [SMALL_STATE(38)] = 1483,
  [SMALL_STATE(39)] = 1507,
  [SMALL_STATE(40)] = 1541,
  [SMALL_STATE(41)] = 1565,
  [SMALL_STATE(42)] = 1590,
  [SMALL_STATE(43)] = 1612,
  [SMALL_STATE(44)] = 1634,
  [SMALL_STATE(45)] = 1656,
  [SMALL_STATE(46)] = 1678,
  [SMALL_STATE(47)] = 1700,
  [SMALL_STATE(48)] = 1722,
  [SMALL_STATE(49)] = 1744,
  [SMALL_STATE(50)] = 1766,
  [SMALL_STATE(51)] = 1788,
  [SMALL_STATE(52)] = 1812,
  [SMALL_STATE(53)] = 1834,
  [SMALL_STATE(54)] = 1856,
  [SMALL_STATE(55)] = 1878,
  [SMALL_STATE(56)] = 1902,
  [SMALL_STATE(57)] = 1924,
  [SMALL_STATE(58)] = 1954,
  [SMALL_STATE(59)] = 1978,
  [SMALL_STATE(60)] = 2000,
  [SMALL_STATE(61)] = 2030,
  [SMALL_STATE(62)] = 2054,
  [SMALL_STATE(63)] = 2076,
  [SMALL_STATE(64)] = 2097,
  [SMALL_STATE(65)] = 2118,
  [SMALL_STATE(66)] = 2139,
  [SMALL_STATE(67)] = 2160,
  [SMALL_STATE(68)] = 2181,
  [SMALL_STATE(69)] = 2202,
  [SMALL_STATE(70)] = 2223,
  [SMALL_STATE(71)] = 2244,
  [SMALL_STATE(72)] = 2265,
  [SMALL_STATE(73)] = 2286,
  [SMALL_STATE(74)] = 2307,
  [SMALL_STATE(75)] = 2328,
  [SMALL_STATE(76)] = 2351,
  [SMALL_STATE(77)] = 2380,
  [SMALL_STATE(78)] = 2409,
  [SMALL_STATE(79)] = 2438,
  [SMALL_STATE(80)] = 2467,
  [SMALL_STATE(81)] = 2496,
  [SMALL_STATE(82)] = 2525,
  [SMALL_STATE(83)] = 2554,
  [SMALL_STATE(84)] = 2583,
  [SMALL_STATE(85)] = 2612,
  [SMALL_STATE(86)] = 2641,
  [SMALL_STATE(87)] = 2670,
  [SMALL_STATE(88)] = 2699,
  [SMALL_STATE(89)] = 2709,
  [SMALL_STATE(90)] = 2719,
  [SMALL_STATE(91)] = 2729,
  [SMALL_STATE(92)] = 2739,
  [SMALL_STATE(93)] = 2749,
  [SMALL_STATE(94)] = 2759,
  [SMALL_STATE(95)] = 2772,
  [SMALL_STATE(96)] = 2785,
  [SMALL_STATE(97)] = 2796,
  [SMALL_STATE(98)] = 2806,
  [SMALL_STATE(99)] = 2814,
  [SMALL_STATE(100)] = 2822,
  [SMALL_STATE(101)] = 2828,
  [SMALL_STATE(102)] = 2836,
  [SMALL_STATE(103)] = 2846,
  [SMALL_STATE(104)] = 2856,
  [SMALL_STATE(105)] = 2863,
  [SMALL_STATE(106)] = 2870,
  [SMALL_STATE(107)] = 2874,
  [SMALL_STATE(108)] = 2878,
  [SMALL_STATE(109)] = 2882,
  [SMALL_STATE(110)] = 2886,
  [SMALL_STATE(111)] = 2890,
  [SMALL_STATE(112)] = 2894,
  [SMALL_STATE(113)] = 2898,
  [SMALL_STATE(114)] = 2902,
  [SMALL_STATE(115)] = 2906,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 5, 0, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 5, 0, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6, 0, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 6, 0, 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 3, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 3, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 4, 0, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 4, 0, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchBlock, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchBlock, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statementOrBlock, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statementOrBlock, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchLabel, 3, 0, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchLabel, 3, 0, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
