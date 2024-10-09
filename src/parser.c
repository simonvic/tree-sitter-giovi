#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  sym_skipStatement = 24,
  sym_breakStatement = 25,
  anon_sym_DASH_GT = 26,
  anon_sym_LT_DASH = 27,
  sym_primitiveContent = 28,
  anon_sym_BSLASHout = 29,
  anon_sym_BSLASHerr = 30,
  sym_literalBool = 31,
  sym_literalReal = 32,
  sym_literalNatural = 33,
  sym_literalInteger = 34,
  sym_literalText = 35,
  sym_identifier = 36,
  sym_constantIdentifier = 37,
  sym_typeIdentifier = 38,
  sym_program = 39,
  sym_block = 40,
  sym_statement = 41,
  sym__statementOrBlock = 42,
  sym_ifStatement = 43,
  sym_switchStatement = 44,
  sym_switchBlock = 45,
  sym_switchLabel = 46,
  sym_caseMatch = 47,
  sym_repeatStatement = 48,
  sym_redirection = 49,
  sym__redirectionLTR = 50,
  sym__redirectionRTL = 51,
  sym_primitiveDestination = 52,
  sym_expression = 53,
  sym_type = 54,
  sym__primary = 55,
  sym_literal = 56,
  sym__anyIdentifier = 57,
  aux_sym_program_repeat1 = 58,
  aux_sym_switchBlock_repeat1 = 59,
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
  [sym_skipStatement] = "skipStatement",
  [sym_breakStatement] = "breakStatement",
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
  [sym_skipStatement] = sym_skipStatement,
  [sym_breakStatement] = sym_breakStatement,
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
  [sym_skipStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_breakStatement] = {
    .visible = true,
    .named = true,
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
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 10,
  [21] = 17,
  [22] = 11,
  [23] = 17,
  [24] = 16,
  [25] = 12,
  [26] = 15,
  [27] = 16,
  [28] = 12,
  [29] = 15,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 32,
  [50] = 30,
  [51] = 31,
  [52] = 52,
  [53] = 52,
  [54] = 34,
  [55] = 35,
  [56] = 48,
  [57] = 57,
  [58] = 47,
  [59] = 35,
  [60] = 48,
  [61] = 36,
  [62] = 46,
  [63] = 41,
  [64] = 38,
  [65] = 39,
  [66] = 32,
  [67] = 40,
  [68] = 30,
  [69] = 41,
  [70] = 57,
  [71] = 31,
  [72] = 33,
  [73] = 43,
  [74] = 44,
  [75] = 75,
  [76] = 45,
  [77] = 77,
  [78] = 46,
  [79] = 47,
  [80] = 45,
  [81] = 33,
  [82] = 52,
  [83] = 40,
  [84] = 43,
  [85] = 44,
  [86] = 75,
  [87] = 38,
  [88] = 88,
  [89] = 89,
  [90] = 31,
  [91] = 91,
  [92] = 32,
  [93] = 93,
  [94] = 30,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 95,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 103,
  [105] = 100,
  [106] = 103,
  [107] = 99,
  [108] = 99,
  [109] = 99,
  [110] = 110,
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
  [121] = 120,
  [122] = 122,
  [123] = 122,
  [124] = 122,
  [125] = 120,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 130,
  [135] = 133,
  [136] = 133,
  [137] = 129,
  [138] = 129,
  [139] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '!', 17,
        '"', 6,
        '&', 122,
        '\'', 10,
        '-', 19,
        '0', 160,
        ';', 113,
        '<', 127,
        '=', 132,
        '>', 131,
        '\\', 41,
        'a', 50,
        'b', 62,
        'd', 55,
        'e', 48,
        'f', 33,
        'i', 42,
        'n', 56,
        'o', 60,
        'r', 35,
        's', 46,
        't', 63,
        'w', 43,
        '{', 111,
        '|', 125,
        '}', 112,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 17,
        '"', 6,
        '&', 122,
        '\'', 10,
        '0', 160,
        '<', 128,
        '=', 132,
        '>', 131,
        '\\', 41,
        'a', 184,
        'b', 192,
        'f', 168,
        'i', 177,
        'n', 187,
        'o', 191,
        'r', 172,
        's', 180,
        't', 190,
        '{', 111,
        '|', 125,
        '}', 112,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('c' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 17,
        '"', 6,
        '&', 122,
        '\'', 10,
        '0', 160,
        '<', 128,
        '=', 132,
        '>', 131,
        '\\', 44,
        'a', 184,
        'f', 168,
        'i', 185,
        'n', 187,
        'o', 191,
        't', 190,
        '{', 111,
        '|', 125,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 17,
        '&', 122,
        '-', 19,
        ';', 113,
        '<', 128,
        '=', 132,
        '>', 131,
        'a', 50,
        'd', 55,
        'e', 48,
        'i', 51,
        'n', 56,
        'o', 60,
        'w', 43,
        '{', 111,
        '|', 125,
        '}', 112,
        '~', 18,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 6,
        '\'', 10,
        '0', 160,
        '\\', 41,
        'b', 192,
        'd', 186,
        'f', 168,
        'i', 178,
        'r', 172,
        's', 180,
        't', 190,
        '{', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '0') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '{') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(20);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(21);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(77);
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
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(78);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(146);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(187);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(7);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(8);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(105);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(12);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(21);
      END_STATE();
    case 78:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 79:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 108:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '"', 6,
        '\'', 10,
        '0', 160,
        ';', 113,
        '<', 14,
        '\\', 41,
        'b', 192,
        'f', 168,
        'i', 178,
        'r', 172,
        's', 180,
        't', 190,
        '{', 111,
        '}', 112,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '"', 6,
        '\'', 10,
        '0', 160,
        ';', 113,
        '\\', 41,
        'b', 192,
        'e', 183,
        'f', 168,
        'i', 178,
        'r', 172,
        's', 180,
        't', 190,
        '{', 111,
        '}', 112,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(199);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '~') ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_repeat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_skipStatement);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_skipStatement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_breakStatement);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_breakStatement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_primitiveContent);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASHout);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASHerr);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_literalBool);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_literalBool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_literalReal);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_literalNatural);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_literalInteger);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_literalInteger);
      ADVANCE_MAP(
        '.', 81,
        '_', 22,
        'b', 79,
        'i', 159,
        'n', 158,
        'o', 80,
        'r', 155,
        'x', 16,
        'E', 78,
        'e', 78,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_literalText);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_constantIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 108},
  [9] = {.lex_state = 108},
  [10] = {.lex_state = 108},
  [11] = {.lex_state = 108},
  [12] = {.lex_state = 108},
  [13] = {.lex_state = 108},
  [14] = {.lex_state = 108},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 108},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 108},
  [20] = {.lex_state = 108},
  [21] = {.lex_state = 108},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 108},
  [28] = {.lex_state = 108},
  [29] = {.lex_state = 108},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 109},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 109},
  [36] = {.lex_state = 109},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 109},
  [39] = {.lex_state = 109},
  [40] = {.lex_state = 109},
  [41] = {.lex_state = 109},
  [42] = {.lex_state = 108},
  [43] = {.lex_state = 109},
  [44] = {.lex_state = 109},
  [45] = {.lex_state = 109},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 109},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 109},
  [51] = {.lex_state = 109},
  [52] = {.lex_state = 109},
  [53] = {.lex_state = 109},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 109},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 108},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 108},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 108},
  [63] = {.lex_state = 108},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 108},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 108},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 108},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 108},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 108},
  [81] = {.lex_state = 108},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 108},
  [84] = {.lex_state = 108},
  [85] = {.lex_state = 108},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 108},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 3},
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
  [119] = {.lex_state = 54},
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
  [133] = {.lex_state = 108},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 108},
  [136] = {.lex_state = 108},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
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
    [sym_skipStatement] = ACTIONS(1),
    [sym_breakStatement] = ACTIONS(1),
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
    [sym_program] = STATE(132),
    [sym_statement] = STATE(77),
    [sym_ifStatement] = STATE(87),
    [sym_switchStatement] = STATE(87),
    [sym_repeatStatement] = STATE(87),
    [sym_redirection] = STATE(87),
    [sym__redirectionLTR] = STATE(83),
    [sym__redirectionRTL] = STATE(83),
    [sym_primitiveDestination] = STATE(136),
    [sym_expression] = STATE(134),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_skipStatement] = ACTIONS(11),
    [sym_breakStatement] = ACTIONS(11),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [2] = {
    [sym_statement] = STATE(77),
    [sym_ifStatement] = STATE(87),
    [sym_switchStatement] = STATE(87),
    [sym_switchLabel] = STATE(34),
    [sym_caseMatch] = STATE(118),
    [sym_repeatStatement] = STATE(87),
    [sym_redirection] = STATE(87),
    [sym__redirectionLTR] = STATE(83),
    [sym__redirectionRTL] = STATE(83),
    [sym_primitiveDestination] = STATE(136),
    [sym_expression] = STATE(128),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_switchBlock_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_EQ_TILDE] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_is] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_skipStatement] = ACTIONS(11),
    [sym_breakStatement] = ACTIONS(11),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [3] = {
    [sym_statement] = STATE(77),
    [sym_ifStatement] = STATE(87),
    [sym_switchStatement] = STATE(87),
    [sym_switchLabel] = STATE(54),
    [sym_caseMatch] = STATE(118),
    [sym_repeatStatement] = STATE(87),
    [sym_redirection] = STATE(87),
    [sym__redirectionLTR] = STATE(83),
    [sym__redirectionRTL] = STATE(83),
    [sym_primitiveDestination] = STATE(136),
    [sym_expression] = STATE(128),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(29),
    [aux_sym_switchBlock_repeat1] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_EQ_TILDE] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_is] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_skipStatement] = ACTIONS(11),
    [sym_breakStatement] = ACTIONS(11),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [4] = {
    [sym_statement] = STATE(77),
    [sym_ifStatement] = STATE(87),
    [sym_switchStatement] = STATE(87),
    [sym_switchLabel] = STATE(34),
    [sym_caseMatch] = STATE(118),
    [sym_repeatStatement] = STATE(87),
    [sym_redirection] = STATE(87),
    [sym__redirectionLTR] = STATE(83),
    [sym__redirectionRTL] = STATE(83),
    [sym_primitiveDestination] = STATE(136),
    [sym_expression] = STATE(128),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(26),
    [aux_sym_switchBlock_repeat1] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_or] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_not] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(27),
    [anon_sym_EQ_TILDE] = ACTIONS(29),
    [anon_sym_TILDE_EQ] = ACTIONS(29),
    [anon_sym_is] = ACTIONS(33),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_skipStatement] = ACTIONS(11),
    [sym_breakStatement] = ACTIONS(11),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [5] = {
    [sym_block] = STATE(46),
    [sym_statement] = STATE(46),
    [sym__statementOrBlock] = STATE(46),
    [sym_ifStatement] = STATE(38),
    [sym_switchStatement] = STATE(38),
    [sym_switchBlock] = STATE(53),
    [sym_repeatStatement] = STATE(38),
    [sym_redirection] = STATE(38),
    [sym__redirectionLTR] = STATE(40),
    [sym__redirectionRTL] = STATE(40),
    [sym_primitiveDestination] = STATE(135),
    [sym_expression] = STATE(130),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_do] = ACTIONS(43),
    [anon_sym_repeat] = ACTIONS(45),
    [sym_skipStatement] = ACTIONS(47),
    [sym_breakStatement] = ACTIONS(47),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [6] = {
    [sym_block] = STATE(62),
    [sym_statement] = STATE(62),
    [sym__statementOrBlock] = STATE(62),
    [sym_ifStatement] = STATE(87),
    [sym_switchStatement] = STATE(87),
    [sym_switchBlock] = STATE(52),
    [sym_repeatStatement] = STATE(87),
    [sym_redirection] = STATE(87),
    [sym__redirectionLTR] = STATE(83),
    [sym__redirectionRTL] = STATE(83),
    [sym_primitiveDestination] = STATE(136),
    [sym_expression] = STATE(134),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_do] = ACTIONS(51),
    [anon_sym_repeat] = ACTIONS(9),
    [sym_skipStatement] = ACTIONS(11),
    [sym_breakStatement] = ACTIONS(11),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [7] = {
    [sym_block] = STATE(78),
    [sym_statement] = STATE(78),
    [sym__statementOrBlock] = STATE(78),
    [sym_ifStatement] = STATE(64),
    [sym_switchStatement] = STATE(64),
    [sym_switchBlock] = STATE(82),
    [sym_repeatStatement] = STATE(64),
    [sym_redirection] = STATE(64),
    [sym__redirectionLTR] = STATE(67),
    [sym__redirectionRTL] = STATE(67),
    [sym_primitiveDestination] = STATE(133),
    [sym_expression] = STATE(139),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_repeat] = ACTIONS(59),
    [sym_skipStatement] = ACTIONS(61),
    [sym_breakStatement] = ACTIONS(61),
    [sym_primitiveContent] = ACTIONS(13),
    [anon_sym_BSLASHout] = ACTIONS(15),
    [anon_sym_BSLASHerr] = ACTIONS(15),
    [sym_literalBool] = ACTIONS(17),
    [sym_literalReal] = ACTIONS(19),
    [sym_literalNatural] = ACTIONS(19),
    [sym_literalInteger] = ACTIONS(17),
    [sym_literalText] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [sym_constantIdentifier] = ACTIONS(21),
    [sym_typeIdentifier] = ACTIONS(21),
  },
  [8] = {
    [sym_statement] = STATE(77),
    [sym_ifStatement] = STATE(87),
    [sym_switchStatement] = STATE(87),
    [sym_repeatStatement] = STATE(87),
    [sym_redirection] = STATE(87),
    [sym__redirectionLTR] = STATE(83),
    [sym__redirectionRTL] = STATE(83),
    [sym_primitiveDestination] = STATE(136),
    [sym_expression] = STATE(134),
    [sym__primary] = STATE(30),
    [sym_literal] = STATE(30),
    [sym__anyIdentifier] = STATE(30),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(68),
    [anon_sym_repeat] = ACTIONS(71),
    [sym_skipStatement] = ACTIONS(74),
    [sym_breakStatement] = ACTIONS(74),
    [sym_primitiveContent] = ACTIONS(77),
    [anon_sym_BSLASHout] = ACTIONS(80),
    [anon_sym_BSLASHerr] = ACTIONS(80),
    [sym_literalBool] = ACTIONS(83),
    [sym_literalReal] = ACTIONS(86),
    [sym_literalNatural] = ACTIONS(86),
    [sym_literalInteger] = ACTIONS(83),
    [sym_literalText] = ACTIONS(86),
    [sym_identifier] = ACTIONS(89),
    [sym_constantIdentifier] = ACTIONS(89),
    [sym_typeIdentifier] = ACTIONS(89),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [65] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_repeat,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_expression,
    STATE(135), 1,
      sym_primitiveDestination,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(47), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(40), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(55), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(38), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [126] = 15,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
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
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [187] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(128), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [252] = 16,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_repeat,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_statement,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(139), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(61), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(67), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    STATE(89), 2,
      sym_block,
      sym__statementOrBlock,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(64), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [315] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_repeat,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_expression,
    STATE(135), 1,
      sym_primitiveDestination,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(47), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(40), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(35), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(38), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [376] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [441] = 15,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_if,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
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
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [502] = 15,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(60), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [563] = 12,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_not,
    ACTIONS(33), 1,
      anon_sym_is,
    STATE(117), 1,
      sym_caseMatch,
    STATE(131), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    ACTIONS(27), 6,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_in,
    ACTIONS(29), 7,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [618] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_repeat,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_expression,
    STATE(135), 1,
      sym_primitiveDestination,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(47), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(40), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(47), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(38), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [679] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_repeat,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(139), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(61), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(67), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(59), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(64), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [740] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_repeat,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(130), 1,
      sym_expression,
    STATE(135), 1,
      sym_primitiveDestination,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(47), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(40), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(48), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(38), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [801] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_repeat,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(139), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(61), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(67), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(79), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(64), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [862] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(55), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      anon_sym_repeat,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(139), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(61), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(67), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(56), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(64), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [923] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(45), 1,
      anon_sym_repeat,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_if,
    STATE(130), 1,
      sym_expression,
    STATE(135), 1,
      sym_primitiveDestination,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(47), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(40), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(41), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(38), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [984] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(128), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1049] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1114] = 15,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(59), 1,
      anon_sym_repeat,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_if,
    STATE(133), 1,
      sym_primitiveDestination,
    STATE(139), 1,
      sym_expression,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(61), 2,
      sym_skipStatement,
      sym_breakStatement,
    STATE(67), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(69), 3,
      sym_block,
      sym_statement,
      sym__statementOrBlock,
    STATE(64), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1175] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(128), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1240] = 17,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_repeat,
    ACTIONS(13), 1,
      sym_primitiveContent,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(77), 1,
      sym_statement,
    STATE(134), 1,
      sym_expression,
    STATE(136), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      sym_skipStatement,
      sym_breakStatement,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    STATE(83), 2,
      sym__redirectionLTR,
      sym__redirectionRTL,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
    STATE(87), 4,
      sym_ifStatement,
      sym_switchStatement,
      sym_repeatStatement,
      sym_redirection,
  [1305] = 2,
    ACTIONS(114), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(112), 19,
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
  [1332] = 2,
    ACTIONS(118), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(116), 19,
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
  [1359] = 2,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(120), 19,
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
  [1386] = 2,
    ACTIONS(124), 10,
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
    ACTIONS(126), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1411] = 8,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      anon_sym_not,
    ACTIONS(134), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(37), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(29), 10,
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
  [1448] = 3,
    ACTIONS(140), 1,
      anon_sym_else,
    ACTIONS(138), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(136), 10,
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
  [1475] = 2,
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
    ACTIONS(144), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1500] = 8,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_not,
    ACTIONS(160), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(37), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(151), 10,
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
  [1537] = 2,
    ACTIONS(163), 10,
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
    ACTIONS(165), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1562] = 2,
    ACTIONS(167), 10,
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
    ACTIONS(169), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1587] = 2,
    ACTIONS(171), 10,
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
    ACTIONS(173), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1612] = 2,
    ACTIONS(175), 10,
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
    ACTIONS(177), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1637] = 2,
    ACTIONS(169), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(167), 11,
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
  [1662] = 2,
    ACTIONS(179), 10,
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
    ACTIONS(181), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1687] = 2,
    ACTIONS(183), 10,
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
    ACTIONS(185), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1712] = 2,
    ACTIONS(187), 10,
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
    ACTIONS(189), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1737] = 2,
    ACTIONS(191), 10,
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
    ACTIONS(193), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1762] = 2,
    ACTIONS(195), 10,
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
    ACTIONS(197), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1787] = 2,
    ACTIONS(199), 10,
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
    ACTIONS(201), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1812] = 2,
    ACTIONS(120), 10,
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
    ACTIONS(122), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1837] = 2,
    ACTIONS(112), 10,
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
    ACTIONS(114), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1862] = 2,
    ACTIONS(116), 10,
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
    ACTIONS(118), 10,
      anon_sym_if,
      anon_sym_else,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [1887] = 3,
    ACTIONS(207), 1,
      anon_sym_else,
    ACTIONS(205), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(203), 10,
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
  [1914] = 3,
    ACTIONS(209), 1,
      anon_sym_else,
    ACTIONS(205), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(203), 10,
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
  [1941] = 8,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_not,
    ACTIONS(134), 1,
      anon_sym_is,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_caseMatch,
    STATE(37), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(29), 10,
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
  [1978] = 3,
    ACTIONS(213), 1,
      anon_sym_else,
    ACTIONS(138), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(136), 10,
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
  [2005] = 2,
    ACTIONS(201), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(199), 16,
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
  [2029] = 2,
    ACTIONS(217), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(215), 10,
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
  [2053] = 2,
    ACTIONS(197), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(195), 10,
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
  [2077] = 3,
    ACTIONS(219), 1,
      anon_sym_else,
    ACTIONS(138), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(136), 15,
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
  [2103] = 2,
    ACTIONS(201), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(199), 10,
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
  [2127] = 2,
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
  [2151] = 2,
    ACTIONS(193), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(191), 10,
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
  [2175] = 2,
    ACTIONS(177), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(175), 10,
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
  [2199] = 2,
    ACTIONS(165), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(163), 16,
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
  [2223] = 2,
    ACTIONS(169), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(167), 16,
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
  [2247] = 2,
    ACTIONS(122), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(120), 10,
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
  [2271] = 2,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(171), 16,
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
  [2295] = 2,
    ACTIONS(114), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(112), 10,
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
  [2319] = 2,
    ACTIONS(177), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(175), 16,
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
  [2343] = 2,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(215), 16,
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
  [2367] = 2,
    ACTIONS(118), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(116), 10,
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
  [2391] = 2,
    ACTIONS(126), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(124), 16,
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
  [2415] = 2,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(179), 16,
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
  [2439] = 2,
    ACTIONS(185), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(183), 16,
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
  [2463] = 7,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_not,
    ACTIONS(134), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(34), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(29), 10,
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
  [2497] = 2,
    ACTIONS(189), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(187), 16,
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
  [2521] = 3,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(221), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(225), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2547] = 2,
    ACTIONS(193), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(191), 16,
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
  [2571] = 2,
    ACTIONS(197), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(195), 16,
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
  [2595] = 2,
    ACTIONS(189), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(187), 10,
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
  [2619] = 2,
    ACTIONS(126), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(124), 10,
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
  [2643] = 3,
    ACTIONS(227), 1,
      anon_sym_else,
    ACTIONS(205), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(203), 15,
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
  [2669] = 2,
    ACTIONS(173), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(171), 10,
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
  [2693] = 2,
    ACTIONS(181), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(179), 10,
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
  [2717] = 2,
    ACTIONS(185), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(183), 10,
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
  [2741] = 7,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_not,
    ACTIONS(134), 1,
      anon_sym_is,
    STATE(118), 1,
      sym_caseMatch,
    STATE(54), 2,
      sym_switchLabel,
      aux_sym_switchBlock_repeat1,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(29), 10,
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
  [2775] = 2,
    ACTIONS(165), 9,
      anon_sym_if,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(163), 10,
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
  [2799] = 3,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(229), 14,
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
  [2824] = 2,
    ACTIONS(237), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(235), 14,
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
  [2846] = 2,
    ACTIONS(116), 7,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(118), 10,
      anon_sym_if,
      anon_sym_do,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2868] = 6,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_not,
    ACTIONS(134), 1,
      anon_sym_is,
    STATE(117), 1,
      sym_caseMatch,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(29), 10,
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
  [2898] = 2,
    ACTIONS(120), 7,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(122), 10,
      anon_sym_if,
      anon_sym_do,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2920] = 6,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_not,
    ACTIONS(134), 1,
      anon_sym_is,
    STATE(112), 1,
      sym_caseMatch,
    ACTIONS(27), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(29), 10,
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
  [2950] = 2,
    ACTIONS(112), 7,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(114), 10,
      anon_sym_if,
      anon_sym_do,
      anon_sym_repeat,
      sym_skipStatement,
      sym_breakStatement,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
  [2972] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(121), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3001] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(125), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3030] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(111), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3059] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(120), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3088] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(131), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3117] = 7,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      sym_primitiveContent,
    STATE(6), 1,
      sym_expression,
    ACTIONS(243), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(245), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(247), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(94), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3146] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(116), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3175] = 7,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      sym_primitiveContent,
    STATE(5), 1,
      sym_expression,
    ACTIONS(243), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(245), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(247), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(94), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3204] = 7,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      sym_primitiveContent,
    STATE(43), 1,
      sym_expression,
    ACTIONS(253), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(255), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(257), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(50), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3233] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(73), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3262] = 7,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      sym_primitiveContent,
    STATE(7), 1,
      sym_expression,
    ACTIONS(243), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(245), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(247), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(94), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3291] = 7,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      sym_primitiveContent,
    STATE(84), 1,
      sym_expression,
    ACTIONS(263), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(265), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(267), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(68), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3320] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(129), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3349] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(137), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3378] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(138), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3407] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_primitiveContent,
    STATE(113), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(19), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(21), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(30), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [3436] = 1,
    ACTIONS(269), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3446] = 1,
    ACTIONS(271), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3456] = 1,
    ACTIONS(273), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3466] = 1,
    ACTIONS(275), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3476] = 1,
    ACTIONS(277), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3486] = 1,
    ACTIONS(279), 7,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
      anon_sym_when,
  [3496] = 3,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      anon_sym_when,
    ACTIONS(283), 4,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
  [3509] = 3,
    ACTIONS(285), 1,
      anon_sym_when,
    ACTIONS(287), 1,
      anon_sym_do,
    ACTIONS(283), 4,
      anon_sym_and,
      anon_sym_AMP,
      anon_sym_or,
      anon_sym_PIPE,
  [3522] = 3,
    ACTIONS(291), 1,
      sym_typeIdentifier,
    STATE(113), 1,
      sym_type,
    ACTIONS(289), 2,
      anon_sym_not,
      sym_identifier,
  [3533] = 3,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_do,
    STATE(52), 1,
      sym_switchBlock,
  [3543] = 3,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_do,
    STATE(82), 1,
      sym_switchBlock,
  [3553] = 2,
    STATE(44), 1,
      sym_primitiveDestination,
    ACTIONS(301), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [3561] = 2,
    STATE(74), 1,
      sym_primitiveDestination,
    ACTIONS(303), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [3569] = 2,
    STATE(85), 1,
      sym_primitiveDestination,
    ACTIONS(15), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [3577] = 3,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_do,
    STATE(53), 1,
      sym_switchBlock,
  [3587] = 1,
    ACTIONS(307), 3,
      anon_sym_in,
      anon_sym_EQ_TILDE,
      anon_sym_TILDE_EQ,
  [3593] = 2,
    ACTIONS(291), 1,
      sym_typeIdentifier,
    STATE(111), 1,
      sym_type,
  [3600] = 2,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      anon_sym_DASH_GT,
  [3607] = 1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
  [3611] = 1,
    ACTIONS(315), 1,
      anon_sym_DASH_GT,
  [3615] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
  [3619] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [3623] = 1,
    ACTIONS(319), 1,
      anon_sym_LT_DASH,
  [3627] = 1,
    ACTIONS(311), 1,
      anon_sym_DASH_GT,
  [3631] = 1,
    ACTIONS(321), 1,
      anon_sym_LT_DASH,
  [3635] = 1,
    ACTIONS(323), 1,
      anon_sym_LT_DASH,
  [3639] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [3643] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
  [3647] = 1,
    ACTIONS(329), 1,
      anon_sym_DASH_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 65,
  [SMALL_STATE(11)] = 126,
  [SMALL_STATE(12)] = 187,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 315,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 502,
  [SMALL_STATE(18)] = 563,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 740,
  [SMALL_STATE(22)] = 801,
  [SMALL_STATE(23)] = 862,
  [SMALL_STATE(24)] = 923,
  [SMALL_STATE(25)] = 984,
  [SMALL_STATE(26)] = 1049,
  [SMALL_STATE(27)] = 1114,
  [SMALL_STATE(28)] = 1175,
  [SMALL_STATE(29)] = 1240,
  [SMALL_STATE(30)] = 1305,
  [SMALL_STATE(31)] = 1332,
  [SMALL_STATE(32)] = 1359,
  [SMALL_STATE(33)] = 1386,
  [SMALL_STATE(34)] = 1411,
  [SMALL_STATE(35)] = 1448,
  [SMALL_STATE(36)] = 1475,
  [SMALL_STATE(37)] = 1500,
  [SMALL_STATE(38)] = 1537,
  [SMALL_STATE(39)] = 1562,
  [SMALL_STATE(40)] = 1587,
  [SMALL_STATE(41)] = 1612,
  [SMALL_STATE(42)] = 1637,
  [SMALL_STATE(43)] = 1662,
  [SMALL_STATE(44)] = 1687,
  [SMALL_STATE(45)] = 1712,
  [SMALL_STATE(46)] = 1737,
  [SMALL_STATE(47)] = 1762,
  [SMALL_STATE(48)] = 1787,
  [SMALL_STATE(49)] = 1812,
  [SMALL_STATE(50)] = 1837,
  [SMALL_STATE(51)] = 1862,
  [SMALL_STATE(52)] = 1887,
  [SMALL_STATE(53)] = 1914,
  [SMALL_STATE(54)] = 1941,
  [SMALL_STATE(55)] = 1978,
  [SMALL_STATE(56)] = 2005,
  [SMALL_STATE(57)] = 2029,
  [SMALL_STATE(58)] = 2053,
  [SMALL_STATE(59)] = 2077,
  [SMALL_STATE(60)] = 2103,
  [SMALL_STATE(61)] = 2127,
  [SMALL_STATE(62)] = 2151,
  [SMALL_STATE(63)] = 2175,
  [SMALL_STATE(64)] = 2199,
  [SMALL_STATE(65)] = 2223,
  [SMALL_STATE(66)] = 2247,
  [SMALL_STATE(67)] = 2271,
  [SMALL_STATE(68)] = 2295,
  [SMALL_STATE(69)] = 2319,
  [SMALL_STATE(70)] = 2343,
  [SMALL_STATE(71)] = 2367,
  [SMALL_STATE(72)] = 2391,
  [SMALL_STATE(73)] = 2415,
  [SMALL_STATE(74)] = 2439,
  [SMALL_STATE(75)] = 2463,
  [SMALL_STATE(76)] = 2497,
  [SMALL_STATE(77)] = 2521,
  [SMALL_STATE(78)] = 2547,
  [SMALL_STATE(79)] = 2571,
  [SMALL_STATE(80)] = 2595,
  [SMALL_STATE(81)] = 2619,
  [SMALL_STATE(82)] = 2643,
  [SMALL_STATE(83)] = 2669,
  [SMALL_STATE(84)] = 2693,
  [SMALL_STATE(85)] = 2717,
  [SMALL_STATE(86)] = 2741,
  [SMALL_STATE(87)] = 2775,
  [SMALL_STATE(88)] = 2799,
  [SMALL_STATE(89)] = 2824,
  [SMALL_STATE(90)] = 2846,
  [SMALL_STATE(91)] = 2868,
  [SMALL_STATE(92)] = 2898,
  [SMALL_STATE(93)] = 2920,
  [SMALL_STATE(94)] = 2950,
  [SMALL_STATE(95)] = 2972,
  [SMALL_STATE(96)] = 3001,
  [SMALL_STATE(97)] = 3030,
  [SMALL_STATE(98)] = 3059,
  [SMALL_STATE(99)] = 3088,
  [SMALL_STATE(100)] = 3117,
  [SMALL_STATE(101)] = 3146,
  [SMALL_STATE(102)] = 3175,
  [SMALL_STATE(103)] = 3204,
  [SMALL_STATE(104)] = 3233,
  [SMALL_STATE(105)] = 3262,
  [SMALL_STATE(106)] = 3291,
  [SMALL_STATE(107)] = 3320,
  [SMALL_STATE(108)] = 3349,
  [SMALL_STATE(109)] = 3378,
  [SMALL_STATE(110)] = 3407,
  [SMALL_STATE(111)] = 3436,
  [SMALL_STATE(112)] = 3446,
  [SMALL_STATE(113)] = 3456,
  [SMALL_STATE(114)] = 3466,
  [SMALL_STATE(115)] = 3476,
  [SMALL_STATE(116)] = 3486,
  [SMALL_STATE(117)] = 3496,
  [SMALL_STATE(118)] = 3509,
  [SMALL_STATE(119)] = 3522,
  [SMALL_STATE(120)] = 3533,
  [SMALL_STATE(121)] = 3543,
  [SMALL_STATE(122)] = 3553,
  [SMALL_STATE(123)] = 3561,
  [SMALL_STATE(124)] = 3569,
  [SMALL_STATE(125)] = 3577,
  [SMALL_STATE(126)] = 3587,
  [SMALL_STATE(127)] = 3593,
  [SMALL_STATE(128)] = 3600,
  [SMALL_STATE(129)] = 3607,
  [SMALL_STATE(130)] = 3611,
  [SMALL_STATE(131)] = 3615,
  [SMALL_STATE(132)] = 3619,
  [SMALL_STATE(133)] = 3623,
  [SMALL_STATE(134)] = 3627,
  [SMALL_STATE(135)] = 3631,
  [SMALL_STATE(136)] = 3635,
  [SMALL_STATE(137)] = 3639,
  [SMALL_STATE(138)] = 3643,
  [SMALL_STATE(139)] = 3647,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 4, 0, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 4, 0, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchBlock, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchBlock, 3, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switchBlock_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeatStatement, 2, 0, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeatStatement, 2, 0, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeatStatement, 4, 0, 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeatStatement, 4, 0, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 5, 0, 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 5, 0, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6, 0, 10),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 6, 0, 10),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchStatement, 3, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchStatement, 3, 0, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statementOrBlock, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statementOrBlock, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switchLabel, 3, 0, 7),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switchLabel, 3, 0, 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_caseMatch, 3, 0, 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
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
