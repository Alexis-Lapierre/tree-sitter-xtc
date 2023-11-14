#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_parameter = 1,
  anon_sym_LBRACK = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACK = 4,
  sym_index = 5,
  anon_sym_0x = 6,
  sym_template = 7,
  sym_numeric_argument = 8,
  sym_string_literal_argument = 9,
  sym_string_argument = 10,
  sym_ipv4_argument = 11,
  sym__hex = 12,
  anon_sym_SEMI = 13,
  aux_sym_comment_token1 = 14,
  sym_port_comment = 15,
  sym__line_ending = 16,
  sym__whitespace = 17,
  sym_program = 18,
  aux_sym__lines = 19,
  sym__line = 20,
  sym_command = 21,
  sym_indexes = 22,
  sym__argument = 23,
  sym_hex_argument = 24,
  sym_comment = 25,
  aux_sym_command_repeat1 = 26,
  aux_sym_indexes_repeat1 = 27,
  aux_sym_hex_argument_repeat1 = 28,
  aux_sym_comment_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_parameter] = "parameter",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_index] = "index",
  [anon_sym_0x] = "0x",
  [sym_template] = "template",
  [sym_numeric_argument] = "numeric_argument",
  [sym_string_literal_argument] = "string_literal_argument",
  [sym_string_argument] = "string_argument",
  [sym_ipv4_argument] = "ipv4_argument",
  [sym__hex] = "_hex",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_port_comment] = "port_comment",
  [sym__line_ending] = "_line_ending",
  [sym__whitespace] = "_whitespace",
  [sym_program] = "program",
  [aux_sym__lines] = "_lines",
  [sym__line] = "_line",
  [sym_command] = "command",
  [sym_indexes] = "indexes",
  [sym__argument] = "_argument",
  [sym_hex_argument] = "hex_argument",
  [sym_comment] = "comment",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_indexes_repeat1] = "indexes_repeat1",
  [aux_sym_hex_argument_repeat1] = "hex_argument_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_parameter] = sym_parameter,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_index] = sym_index,
  [anon_sym_0x] = anon_sym_0x,
  [sym_template] = sym_template,
  [sym_numeric_argument] = sym_numeric_argument,
  [sym_string_literal_argument] = sym_string_literal_argument,
  [sym_string_argument] = sym_string_argument,
  [sym_ipv4_argument] = sym_ipv4_argument,
  [sym__hex] = sym__hex,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_port_comment] = sym_port_comment,
  [sym__line_ending] = sym__line_ending,
  [sym__whitespace] = sym__whitespace,
  [sym_program] = sym_program,
  [aux_sym__lines] = aux_sym__lines,
  [sym__line] = sym__line,
  [sym_command] = sym_command,
  [sym_indexes] = sym_indexes,
  [sym__argument] = sym__argument,
  [sym_hex_argument] = sym_hex_argument,
  [sym_comment] = sym_comment,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_indexes_repeat1] = aux_sym_indexes_repeat1,
  [aux_sym_hex_argument_repeat1] = aux_sym_hex_argument_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_string_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_ipv4_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__hex] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_port_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__line_ending] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__lines] = {
    .visible = false,
    .named = false,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_indexes] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_hex_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_indexes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == 'P') ADVANCE(58);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(41);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '[') ADVANCE(35);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '5') ADVANCE(5);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '5') ADVANCE(10);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '1') ADVANCE(54);
      if (lookahead == '2') ADVANCE(51);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '2') ADVANCE(4);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(58);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'c' ||
          lookahead == 'm') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '5') ADVANCE(43);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(14);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string_literal_argument);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string_argument);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ipv4_argument);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (lookahead == '5') ADVANCE(52);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__hex);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_port_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__line_ending);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_index] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [sym_port_comment] = ACTIONS(1),
    [sym__line_ending] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(40),
    [aux_sym__lines] = STATE(3),
    [sym__line] = STATE(43),
    [sym_command] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_parameter] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym__line_ending] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      sym_numeric_argument,
    STATE(22), 1,
      sym_indexes,
    STATE(34), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(15), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [23] = 7,
    ACTIONS(3), 1,
      sym_parameter,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      sym__whitespace,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__line_ending,
    STATE(4), 1,
      aux_sym__lines,
    STATE(43), 3,
      sym__line,
      sym_command,
      sym_comment,
  [47] = 7,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_parameter,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      sym__line_ending,
    ACTIONS(34), 1,
      sym__whitespace,
    STATE(4), 1,
      aux_sym__lines,
    STATE(43), 3,
      sym__line,
      sym_command,
      sym_comment,
  [71] = 4,
    ACTIONS(13), 1,
      anon_sym_0x,
    ACTIONS(17), 1,
      sym_numeric_argument,
    STATE(34), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(15), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [88] = 4,
    ACTIONS(3), 1,
      sym_parameter,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      sym__line_ending,
    STATE(39), 3,
      sym__line,
      sym_command,
      sym_comment,
  [103] = 1,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      sym_parameter,
      anon_sym_SEMI,
      sym__line_ending,
      sym__whitespace,
  [111] = 3,
    STATE(8), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(39), 2,
      sym_template,
      sym__hex,
    ACTIONS(42), 2,
      sym__line_ending,
      sym__whitespace,
  [123] = 3,
    STATE(8), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(44), 2,
      sym_template,
      sym__hex,
    ACTIONS(46), 2,
      sym__line_ending,
      sym__whitespace,
  [135] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      sym_parameter,
      anon_sym_SEMI,
      sym__line_ending,
      sym__whitespace,
  [143] = 4,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    ACTIONS(54), 1,
      sym__whitespace,
    STATE(18), 1,
      aux_sym_indexes_repeat1,
  [156] = 4,
    ACTIONS(56), 1,
      aux_sym_comment_token1,
    ACTIONS(58), 1,
      sym_port_comment,
    ACTIONS(60), 1,
      sym__line_ending,
    STATE(14), 1,
      aux_sym_comment_repeat1,
  [169] = 4,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    ACTIONS(64), 1,
      sym__whitespace,
    STATE(15), 1,
      aux_sym_indexes_repeat1,
  [182] = 4,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      sym_port_comment,
    ACTIONS(72), 1,
      sym__line_ending,
    STATE(14), 1,
      aux_sym_comment_repeat1,
  [195] = 4,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(79), 1,
      sym__whitespace,
    STATE(15), 1,
      aux_sym_indexes_repeat1,
  [208] = 4,
    ACTIONS(82), 1,
      aux_sym_comment_token1,
    ACTIONS(84), 1,
      sym_port_comment,
    ACTIONS(86), 1,
      sym__line_ending,
    STATE(12), 1,
      aux_sym_comment_repeat1,
  [221] = 4,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      sym__whitespace,
    STATE(13), 1,
      aux_sym_indexes_repeat1,
  [234] = 4,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      sym__whitespace,
    STATE(15), 1,
      aux_sym_indexes_repeat1,
  [247] = 1,
    ACTIONS(92), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__whitespace,
  [253] = 1,
    ACTIONS(94), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__whitespace,
  [259] = 2,
    STATE(9), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(96), 2,
      sym_template,
      sym__hex,
  [267] = 3,
    ACTIONS(98), 1,
      sym__line_ending,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(27), 1,
      aux_sym_command_repeat1,
  [277] = 3,
    ACTIONS(102), 1,
      sym__line_ending,
    ACTIONS(104), 1,
      sym__whitespace,
    STATE(25), 1,
      aux_sym_command_repeat1,
  [287] = 3,
    ACTIONS(106), 1,
      sym__line_ending,
    ACTIONS(108), 1,
      sym__whitespace,
    STATE(24), 1,
      aux_sym_command_repeat1,
  [297] = 3,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(111), 1,
      sym__line_ending,
    STATE(24), 1,
      aux_sym_command_repeat1,
  [307] = 1,
    ACTIONS(77), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__whitespace,
  [313] = 3,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(113), 1,
      sym__line_ending,
    STATE(24), 1,
      aux_sym_command_repeat1,
  [323] = 2,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      anon_sym_COMMA,
  [330] = 1,
    ACTIONS(117), 2,
      sym__line_ending,
      sym__whitespace,
  [335] = 2,
    ACTIONS(119), 1,
      sym_index,
    ACTIONS(121), 1,
      sym__whitespace,
  [342] = 2,
    ACTIONS(123), 1,
      sym_index,
    ACTIONS(125), 1,
      sym__whitespace,
  [349] = 1,
    ACTIONS(127), 2,
      sym__line_ending,
      sym__whitespace,
  [354] = 2,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      anon_sym_COMMA,
  [361] = 1,
    ACTIONS(106), 2,
      sym__line_ending,
      sym__whitespace,
  [366] = 1,
    ACTIONS(129), 2,
      sym__line_ending,
      sym__whitespace,
  [371] = 2,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
  [378] = 2,
    ACTIONS(133), 1,
      sym_index,
    ACTIONS(135), 1,
      sym__whitespace,
  [385] = 1,
    ACTIONS(137), 2,
      sym__line_ending,
      sym__whitespace,
  [390] = 1,
    ACTIONS(139), 1,
      sym__line_ending,
  [394] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [398] = 1,
    ACTIONS(123), 1,
      sym_index,
  [402] = 1,
    ACTIONS(143), 1,
      sym_index,
  [406] = 1,
    ACTIONS(37), 1,
      sym__line_ending,
  [410] = 1,
    ACTIONS(145), 1,
      sym_index,
  [414] = 1,
    ACTIONS(115), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 156,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 182,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 277,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 323,
  [SMALL_STATE(29)] = 330,
  [SMALL_STATE(30)] = 335,
  [SMALL_STATE(31)] = 342,
  [SMALL_STATE(32)] = 349,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 361,
  [SMALL_STATE(35)] = 366,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 378,
  [SMALL_STATE(38)] = 385,
  [SMALL_STATE(39)] = 390,
  [SMALL_STATE(40)] = 394,
  [SMALL_STATE(41)] = 398,
  [SMALL_STATE(42)] = 402,
  [SMALL_STATE(43)] = 406,
  [SMALL_STATE(44)] = 410,
  [SMALL_STATE(45)] = 414,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(16),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_argument_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_argument_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_argument, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(14),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2), SHIFT_REPEAT(45),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_xtc(void) {
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
