#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_SEMI = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_LT_DASH = 5,
  sym_primitiveContent = 6,
  anon_sym_BSLASHout = 7,
  anon_sym_BSLASHerr = 8,
  sym_literalBool = 9,
  sym_literalReal = 10,
  sym_literalNatural = 11,
  sym_literalInteger = 12,
  sym_literalText = 13,
  sym_program = 14,
  sym_statement = 15,
  sym_redirection = 16,
  sym__redirectionLTR = 17,
  sym__redirectionRTL = 18,
  sym_primitiveDestination = 19,
  sym_expression = 20,
  sym__primary = 21,
  sym_literal = 22,
  aux_sym_program_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
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
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_redirection] = "redirection",
  [sym__redirectionLTR] = "_redirectionLTR",
  [sym__redirectionRTL] = "_redirectionRTL",
  [sym_primitiveDestination] = "primitiveDestination",
  [sym_expression] = "expression",
  [sym__primary] = "_primary",
  [sym_literal] = "literal",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_redirection] = sym_redirection,
  [sym__redirectionLTR] = sym__redirectionLTR,
  [sym__redirectionRTL] = sym__redirectionRTL,
  [sym_primitiveDestination] = sym_primitiveDestination,
  [sym_expression] = sym_expression,
  [sym__primary] = sym__primary,
  [sym_literal] = sym_literal,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      ADVANCE_MAP(
        '"', 1,
        '\'', 5,
        '-', 12,
        '0', 88,
        ';', 76,
        '<', 9,
        '\\', 26,
        'f', 24,
        't', 31,
        '{', 74,
        '}', 75,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(14);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(2);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(6);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(3);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(71);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_primitiveContent);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASHout);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASHerr);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_literalBool);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_literalReal);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_literalReal);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_literalNatural);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_literalInteger);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_literalInteger);
      ADVANCE_MAP(
        '.', 46,
        '_', 15,
        'b', 44,
        'i', 87,
        'n', 86,
        'o', 45,
        'r', 83,
        'x', 11,
        'E', 43,
        'e', 43,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_literalInteger);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_literalText);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_literalText);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(17),
    [sym_statement] = STATE(8),
    [sym_redirection] = STATE(9),
    [sym__redirectionLTR] = STATE(10),
    [sym__redirectionRTL] = STATE(10),
    [sym_primitiveDestination] = STATE(18),
    [sym_expression] = STATE(19),
    [sym__primary] = STATE(5),
    [sym_literal] = STATE(5),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_primitiveContent] = ACTIONS(7),
    [anon_sym_BSLASHout] = ACTIONS(9),
    [anon_sym_BSLASHerr] = ACTIONS(9),
    [sym_literalBool] = ACTIONS(11),
    [sym_literalReal] = ACTIONS(11),
    [sym_literalNatural] = ACTIONS(11),
    [sym_literalInteger] = ACTIONS(13),
    [sym_literalText] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(8),
    [sym_redirection] = STATE(9),
    [sym__redirectionLTR] = STATE(10),
    [sym__redirectionRTL] = STATE(10),
    [sym_primitiveDestination] = STATE(18),
    [sym_expression] = STATE(19),
    [sym__primary] = STATE(5),
    [sym_literal] = STATE(5),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_primitiveContent] = ACTIONS(7),
    [anon_sym_BSLASHout] = ACTIONS(9),
    [anon_sym_BSLASHerr] = ACTIONS(9),
    [sym_literalBool] = ACTIONS(11),
    [sym_literalReal] = ACTIONS(11),
    [sym_literalNatural] = ACTIONS(11),
    [sym_literalInteger] = ACTIONS(13),
    [sym_literalText] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(8),
    [sym_redirection] = STATE(9),
    [sym__redirectionLTR] = STATE(10),
    [sym__redirectionRTL] = STATE(10),
    [sym_primitiveDestination] = STATE(18),
    [sym_expression] = STATE(19),
    [sym__primary] = STATE(5),
    [sym_literal] = STATE(5),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_primitiveContent] = ACTIONS(22),
    [anon_sym_BSLASHout] = ACTIONS(25),
    [anon_sym_BSLASHerr] = ACTIONS(25),
    [sym_literalBool] = ACTIONS(28),
    [sym_literalReal] = ACTIONS(28),
    [sym_literalNatural] = ACTIONS(28),
    [sym_literalInteger] = ACTIONS(31),
    [sym_literalText] = ACTIONS(28),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_DASH_GT] = ACTIONS(34),
    [sym_primitiveContent] = ACTIONS(34),
    [anon_sym_BSLASHout] = ACTIONS(34),
    [anon_sym_BSLASHerr] = ACTIONS(34),
    [sym_literalBool] = ACTIONS(34),
    [sym_literalReal] = ACTIONS(34),
    [sym_literalNatural] = ACTIONS(34),
    [sym_literalInteger] = ACTIONS(36),
    [sym_literalText] = ACTIONS(34),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_DASH_GT] = ACTIONS(38),
    [sym_primitiveContent] = ACTIONS(38),
    [anon_sym_BSLASHout] = ACTIONS(38),
    [anon_sym_BSLASHerr] = ACTIONS(38),
    [sym_literalBool] = ACTIONS(38),
    [sym_literalReal] = ACTIONS(38),
    [sym_literalNatural] = ACTIONS(38),
    [sym_literalInteger] = ACTIONS(40),
    [sym_literalText] = ACTIONS(38),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_DASH_GT] = ACTIONS(42),
    [sym_primitiveContent] = ACTIONS(42),
    [anon_sym_BSLASHout] = ACTIONS(42),
    [anon_sym_BSLASHerr] = ACTIONS(42),
    [sym_literalBool] = ACTIONS(42),
    [sym_literalReal] = ACTIONS(42),
    [sym_literalNatural] = ACTIONS(42),
    [sym_literalInteger] = ACTIONS(44),
    [sym_literalText] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 1,
      sym_literalInteger,
    ACTIONS(46), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_LT_DASH,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [17] = 3,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      sym_literalInteger,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [35] = 2,
    ACTIONS(58), 1,
      sym_literalInteger,
    ACTIONS(56), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [51] = 2,
    ACTIONS(62), 1,
      sym_literalInteger,
    ACTIONS(60), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [67] = 2,
    ACTIONS(66), 1,
      sym_literalInteger,
    ACTIONS(64), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [83] = 2,
    ACTIONS(70), 1,
      sym_literalInteger,
    ACTIONS(68), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [99] = 2,
    ACTIONS(74), 1,
      sym_literalInteger,
    ACTIONS(72), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_primitiveContent,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [115] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_primitiveContent,
    ACTIONS(13), 1,
      sym_literalInteger,
    STATE(20), 1,
      sym_expression,
    STATE(5), 2,
      sym__primary,
      sym_literal,
    ACTIONS(11), 4,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [138] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_primitiveContent,
    ACTIONS(13), 1,
      sym_literalInteger,
    STATE(12), 1,
      sym_expression,
    STATE(5), 2,
      sym__primary,
      sym_literal,
    ACTIONS(11), 4,
      sym_literalBool,
      sym_literalReal,
      sym_literalNatural,
      sym_literalText,
  [161] = 2,
    STATE(13), 1,
      sym_primitiveDestination,
    ACTIONS(9), 2,
      anon_sym_BSLASHout,
      anon_sym_BSLASHerr,
  [169] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [173] = 1,
    ACTIONS(78), 1,
      anon_sym_LT_DASH,
  [177] = 1,
    ACTIONS(80), 1,
      anon_sym_DASH_GT,
  [181] = 1,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 17,
  [SMALL_STATE(9)] = 35,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 67,
  [SMALL_STATE(12)] = 83,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 115,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 177,
  [SMALL_STATE(20)] = 181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitiveDestination, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionRTL, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__redirectionLTR, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
