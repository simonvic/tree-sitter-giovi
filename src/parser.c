#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_SEMI = 3,
  anon_sym_if = 4,
  anon_sym_do = 5,
  anon_sym_else = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_LT_DASH = 8,
  sym_primitiveContent = 9,
  anon_sym_BSLASHout = 10,
  anon_sym_BSLASHerr = 11,
  sym_literalBool = 12,
  sym_literalReal = 13,
  sym_literalNatural = 14,
  sym_literalInteger = 15,
  sym_literalText = 16,
  sym_identifier = 17,
  sym_constantIdentifier = 18,
  sym_typeIdentifier = 19,
  sym_program = 20,
  sym_block = 21,
  sym_statement = 22,
  sym__statementOrBlock = 23,
  sym_ifStatement = 24,
  sym_redirection = 25,
  sym__redirectionLTR = 26,
  sym__redirectionRTL = 27,
  sym_primitiveDestination = 28,
  sym_expression = 29,
  sym__primary = 30,
  sym_literal = 31,
  sym__anyIdentifier = 32,
  aux_sym_program_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_do] = "do",
  [anon_sym_else] = "else",
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
  [sym_redirection] = "redirection",
  [sym__redirectionLTR] = "_redirectionLTR",
  [sym__redirectionRTL] = "_redirectionRTL",
  [sym_primitiveDestination] = "primitiveDestination",
  [sym_expression] = "expression",
  [sym__primary] = "_primary",
  [sym_literal] = "literal",
  [sym__anyIdentifier] = "_anyIdentifier",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_else] = anon_sym_else,
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
  [sym_redirection] = sym_redirection,
  [sym__redirectionLTR] = sym__redirectionLTR,
  [sym__redirectionRTL] = sym__redirectionRTL,
  [sym_primitiveDestination] = sym_primitiveDestination,
  [sym_expression] = sym_expression,
  [sym__primary] = sym__primary,
  [sym_literal] = sym_literal,
  [sym__anyIdentifier] = sym__anyIdentifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
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
};

enum ts_field_identifiers {
  field_body = 1,
  field_condition = 2,
  field_elseBody = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_condition] = "condition",
  [field_elseBody] = "elseBody",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_condition, 1},
  [2] =
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
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 3,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 14,
  [26] = 17,
  [27] = 27,
  [28] = 21,
  [29] = 29,
  [30] = 22,
  [31] = 18,
  [32] = 20,
  [33] = 19,
  [34] = 23,
  [35] = 24,
  [36] = 15,
  [37] = 13,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 38,
  [43] = 40,
  [44] = 40,
  [45] = 19,
  [46] = 23,
  [47] = 24,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 52,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      ADVANCE_MAP(
        '"', 2,
        '\'', 6,
        '-', 13,
        '0', 103,
        ';', 85,
        '<', 10,
        '\\', 28,
        'd', 34,
        'e', 31,
        'f', 25,
        'i', 29,
        't', 37,
        '{', 83,
        '}', 84,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '{') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(15);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(3);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 80:
      if (eof) ADVANCE(82);
      ADVANCE_MAP(
        '"', 2,
        '\'', 6,
        '0', 103,
        ';', 85,
        '<', 10,
        '\\', 28,
        'f', 111,
        'i', 114,
        't', 117,
        '{', 83,
        '}', 84,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      ADVANCE_MAP(
        '"', 2,
        '\'', 6,
        '0', 103,
        ';', 85,
        '\\', 28,
        'e', 116,
        'f', 111,
        'i', 114,
        't', 117,
        '{', 83,
        '}', 84,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_primitiveContent);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BSLASHout);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BSLASHerr);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_literalBool);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_literalBool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_literalReal);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_literalNatural);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_literalInteger);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_literalInteger);
      ADVANCE_MAP(
        '.', 53,
        '_', 16,
        'b', 51,
        'i', 102,
        'n', 101,
        'o', 52,
        'r', 98,
        'x', 12,
        'E', 50,
        'e', 50,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_literalText);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_constantIdentifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 80},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 80},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 81},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 81},
  [23] = {.lex_state = 81},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 81},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 80},
  [31] = {.lex_state = 80},
  [32] = {.lex_state = 80},
  [33] = {.lex_state = 80},
  [34] = {.lex_state = 80},
  [35] = {.lex_state = 80},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 80},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
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
    [sym_program] = STATE(59),
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(58),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(5),
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
  [2] = {
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(58),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(24),
    [sym_primitiveContent] = ACTIONS(27),
    [anon_sym_BSLASHout] = ACTIONS(30),
    [anon_sym_BSLASHerr] = ACTIONS(30),
    [sym_literalBool] = ACTIONS(33),
    [sym_literalReal] = ACTIONS(36),
    [sym_literalNatural] = ACTIONS(36),
    [sym_literalInteger] = ACTIONS(33),
    [sym_literalText] = ACTIONS(36),
    [sym_identifier] = ACTIONS(39),
    [sym_constantIdentifier] = ACTIONS(39),
    [sym_typeIdentifier] = ACTIONS(39),
  },
  [3] = {
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(58),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(42),
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
  [4] = {
    [sym_block] = STATE(25),
    [sym_statement] = STATE(25),
    [sym__statementOrBlock] = STATE(25),
    [sym_ifStatement] = STATE(17),
    [sym_redirection] = STATE(17),
    [sym__redirectionLTR] = STATE(18),
    [sym__redirectionRTL] = STATE(18),
    [sym_primitiveDestination] = STATE(56),
    [sym_expression] = STATE(57),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(46),
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
  [5] = {
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(58),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(48),
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
  [6] = {
    [sym_block] = STATE(14),
    [sym_statement] = STATE(14),
    [sym__statementOrBlock] = STATE(14),
    [sym_ifStatement] = STATE(17),
    [sym_redirection] = STATE(17),
    [sym__redirectionLTR] = STATE(18),
    [sym__redirectionRTL] = STATE(18),
    [sym_primitiveDestination] = STATE(56),
    [sym_expression] = STATE(57),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(46),
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
  [7] = {
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(50),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(50),
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
  [8] = {
    [sym_block] = STATE(32),
    [sym_statement] = STATE(32),
    [sym__statementOrBlock] = STATE(32),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(58),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(52),
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
  [9] = {
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(50),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(54),
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
  [10] = {
    [sym_statement] = STATE(27),
    [sym_ifStatement] = STATE(26),
    [sym_redirection] = STATE(26),
    [sym__redirectionLTR] = STATE(31),
    [sym__redirectionRTL] = STATE(31),
    [sym_primitiveDestination] = STATE(51),
    [sym_expression] = STATE(58),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(56),
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
  [11] = {
    [sym_block] = STATE(20),
    [sym_statement] = STATE(20),
    [sym__statementOrBlock] = STATE(20),
    [sym_ifStatement] = STATE(17),
    [sym_redirection] = STATE(17),
    [sym__redirectionLTR] = STATE(18),
    [sym__redirectionRTL] = STATE(18),
    [sym_primitiveDestination] = STATE(56),
    [sym_expression] = STATE(57),
    [sym__primary] = STATE(47),
    [sym_literal] = STATE(47),
    [sym__anyIdentifier] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(46),
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
  [0] = 2,
    ACTIONS(60), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(58), 11,
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
  [22] = 2,
    ACTIONS(64), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(62), 10,
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
  [44] = 3,
    ACTIONS(70), 1,
      anon_sym_else,
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
  [68] = 2,
    ACTIONS(74), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(72), 10,
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
  [90] = 2,
    ACTIONS(60), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(58), 10,
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
  [112] = 2,
    ACTIONS(78), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(76), 10,
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
  [134] = 2,
    ACTIONS(82), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(80), 10,
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
  [156] = 2,
    ACTIONS(86), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(84), 10,
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
  [178] = 2,
    ACTIONS(90), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(88), 10,
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
  [200] = 2,
    ACTIONS(94), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(92), 10,
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
  [222] = 2,
    ACTIONS(98), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(96), 10,
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
  [244] = 2,
    ACTIONS(102), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(100), 10,
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
  [266] = 2,
    ACTIONS(106), 7,
      anon_sym_if,
      anon_sym_else,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(104), 10,
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
  [288] = 3,
    ACTIONS(108), 1,
      anon_sym_else,
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
  [312] = 2,
    ACTIONS(78), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(76), 10,
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
  [333] = 3,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(114), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [356] = 2,
    ACTIONS(94), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(92), 10,
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
  [377] = 2,
    ACTIONS(118), 6,
      anon_sym_if,
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
  [398] = 2,
    ACTIONS(98), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(96), 10,
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
  [419] = 2,
    ACTIONS(82), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(80), 10,
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
  [440] = 2,
    ACTIONS(90), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(88), 10,
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
  [461] = 2,
    ACTIONS(86), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(84), 10,
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
  [482] = 2,
    ACTIONS(102), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(100), 10,
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
  [503] = 2,
    ACTIONS(106), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(104), 10,
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
  [524] = 2,
    ACTIONS(74), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(72), 10,
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
  [545] = 2,
    ACTIONS(64), 6,
      anon_sym_if,
      sym_literalBool,
      sym_literalInteger,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    ACTIONS(62), 10,
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
  [566] = 7,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_primitiveContent,
    STATE(28), 1,
      sym_expression,
    ACTIONS(124), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(126), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(128), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(35), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [595] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(55), 1,
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
    STATE(47), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [624] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(52), 1,
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
    STATE(47), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [653] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(60), 1,
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
    STATE(47), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [682] = 7,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      sym_primitiveContent,
    STATE(21), 1,
      sym_expression,
    ACTIONS(134), 2,
      sym_literalBool,
      sym_literalInteger,
    ACTIONS(136), 3,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
    ACTIONS(138), 3,
      sym_identifier,
      sym_constantIdentifier,
      sym_typeIdentifier,
    STATE(24), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [711] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(53), 1,
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
    STATE(47), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [740] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      sym_primitiveContent,
    STATE(54), 1,
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
    STATE(47), 3,
      sym__primary,
      sym_literal,
      sym__anyIdentifier,
  [769] = 1,
    ACTIONS(84), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_DASH_GT,
  [775] = 1,
    ACTIONS(100), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_DASH_GT,
  [781] = 1,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_DASH_GT,
  [787] = 2,
    STATE(22), 1,
      sym_primitiveDestination,
    ACTIONS(140), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [795] = 2,
    STATE(30), 1,
      sym_primitiveDestination,
    ACTIONS(11), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [803] = 2,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_DASH_GT,
  [810] = 1,
    ACTIONS(146), 1,
      anon_sym_LT_DASH,
  [814] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
  [818] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [822] = 1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
  [826] = 1,
    ACTIONS(152), 1,
      anon_sym_do,
  [830] = 1,
    ACTIONS(154), 1,
      anon_sym_LT_DASH,
  [834] = 1,
    ACTIONS(156), 1,
      anon_sym_DASH_GT,
  [838] = 1,
    ACTIONS(144), 1,
      anon_sym_DASH_GT,
  [842] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [846] = 1,
    ACTIONS(160), 1,
      anon_sym_do,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 22,
  [SMALL_STATE(14)] = 44,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 90,
  [SMALL_STATE(17)] = 112,
  [SMALL_STATE(18)] = 134,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 266,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 333,
  [SMALL_STATE(28)] = 356,
  [SMALL_STATE(29)] = 377,
  [SMALL_STATE(30)] = 398,
  [SMALL_STATE(31)] = 419,
  [SMALL_STATE(32)] = 440,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 482,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 524,
  [SMALL_STATE(37)] = 545,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 595,
  [SMALL_STATE(40)] = 624,
  [SMALL_STATE(41)] = 653,
  [SMALL_STATE(42)] = 682,
  [SMALL_STATE(43)] = 711,
  [SMALL_STATE(44)] = 740,
  [SMALL_STATE(45)] = 769,
  [SMALL_STATE(46)] = 775,
  [SMALL_STATE(47)] = 781,
  [SMALL_STATE(48)] = 787,
  [SMALL_STATE(49)] = 795,
  [SMALL_STATE(50)] = 803,
  [SMALL_STATE(51)] = 810,
  [SMALL_STATE(52)] = 814,
  [SMALL_STATE(53)] = 818,
  [SMALL_STATE(54)] = 822,
  [SMALL_STATE(55)] = 826,
  [SMALL_STATE(56)] = 830,
  [SMALL_STATE(57)] = 834,
  [SMALL_STATE(58)] = 838,
  [SMALL_STATE(59)] = 842,
  [SMALL_STATE(60)] = 846,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 4, 0, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 4, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifStatement, 6, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ifStatement, 6, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
