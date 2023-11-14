#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__line_token1 = 1,
  sym_changePort = 2,
  aux_sym_command_token1 = 3,
  sym_parameter = 4,
  anon_sym_LBRACK = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACK = 7,
  sym_index = 8,
  anon_sym_0x = 9,
  aux_sym_hex_argument_token1 = 10,
  sym_template = 11,
  sym_numeric_argument = 12,
  sym_string_literal_argument = 13,
  sym_string_argument = 14,
  sym_ipv4_argument = 15,
  anon_sym_SEMI = 16,
  aux_sym_comment_token1 = 17,
  sym_port_comment = 18,
  sym__line_ending = 19,
  sym_program = 20,
  aux_sym__lines = 21,
  sym__line = 22,
  sym_command = 23,
  sym_indexes = 24,
  sym__argument = 25,
  sym_hex_argument = 26,
  sym_comment = 27,
  aux_sym_command_repeat1 = 28,
  aux_sym_indexes_repeat1 = 29,
  aux_sym_hex_argument_repeat1 = 30,
  aux_sym_comment_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_changePort] = "changePort",
  [aux_sym_command_token1] = "command_token1",
  [sym_parameter] = "parameter",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_index] = "index",
  [anon_sym_0x] = "0x",
  [aux_sym_hex_argument_token1] = "hex_argument_token1",
  [sym_template] = "template",
  [sym_numeric_argument] = "numeric_argument",
  [sym_string_literal_argument] = "string_literal_argument",
  [sym_string_argument] = "string_argument",
  [sym_ipv4_argument] = "ipv4_argument",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_port_comment] = "port_comment",
  [sym__line_ending] = "_line_ending",
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
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_changePort] = sym_changePort,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [sym_parameter] = sym_parameter,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_index] = sym_index,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_hex_argument_token1] = aux_sym_hex_argument_token1,
  [sym_template] = sym_template,
  [sym_numeric_argument] = sym_numeric_argument,
  [sym_string_literal_argument] = sym_string_literal_argument,
  [sym_string_argument] = sym_string_argument,
  [sym_ipv4_argument] = sym_ipv4_argument,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_port_comment] = sym_port_comment,
  [sym__line_ending] = sym__line_ending,
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
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_changePort] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_hex_argument_token1] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '5') ADVANCE(5);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '5') ADVANCE(10);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '1') ADVANCE(65);
      if (lookahead == '2') ADVANCE(62);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '2') ADVANCE(4);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ';') ADVANCE(66);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'c' ||
          lookahead == 'm') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (eof) ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_changePort);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_hex_argument_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '5') ADVANCE(54);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(16);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_literal_argument);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_argument);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_ipv4_argument);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (lookahead == '5') ADVANCE(63);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_port_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__line_ending);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 34},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 41},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym_command_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_template] = ACTIONS(1),
    [sym_string_literal_argument] = ACTIONS(1),
    [sym__line_ending] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(29),
    [aux_sym__lines] = STATE(8),
    [sym__line] = STATE(8),
    [aux_sym__line_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_0x,
    ACTIONS(11), 1,
      sym_numeric_argument,
    STATE(13), 1,
      sym_indexes,
    STATE(19), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(9), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [23] = 4,
    ACTIONS(7), 1,
      anon_sym_0x,
    ACTIONS(11), 1,
      sym_numeric_argument,
    STATE(19), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(9), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [40] = 4,
    ACTIONS(13), 1,
      sym_changePort,
    ACTIONS(15), 1,
      sym_parameter,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(31), 2,
      sym_command,
      sym_comment,
  [54] = 4,
    ACTIONS(19), 1,
      aux_sym_command_token1,
    ACTIONS(24), 1,
      sym__line_ending,
    STATE(5), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(21), 2,
      aux_sym_hex_argument_token1,
      sym_template,
  [68] = 4,
    ACTIONS(26), 1,
      aux_sym_command_token1,
    ACTIONS(30), 1,
      sym__line_ending,
    STATE(5), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(28), 2,
      aux_sym_hex_argument_token1,
      sym_template,
  [82] = 4,
    ACTIONS(32), 1,
      aux_sym_comment_token1,
    ACTIONS(34), 1,
      sym_port_comment,
    ACTIONS(36), 1,
      sym__line_ending,
    STATE(9), 1,
      aux_sym_comment_repeat1,
  [95] = 3,
    ACTIONS(3), 1,
      aux_sym__line_token1,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      aux_sym__lines,
      sym__line,
  [106] = 4,
    ACTIONS(40), 1,
      aux_sym_comment_token1,
    ACTIONS(43), 1,
      sym_port_comment,
    ACTIONS(46), 1,
      sym__line_ending,
    STATE(9), 1,
      aux_sym_comment_repeat1,
  [119] = 4,
    ACTIONS(48), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      sym_port_comment,
    ACTIONS(52), 1,
      sym__line_ending,
    STATE(7), 1,
      aux_sym_comment_repeat1,
  [132] = 3,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym__line_token1,
    STATE(11), 2,
      aux_sym__lines,
      sym__line,
  [143] = 3,
    ACTIONS(15), 1,
      sym_parameter,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(33), 2,
      sym_command,
      sym_comment,
  [154] = 3,
    ACTIONS(59), 1,
      aux_sym_command_token1,
    ACTIONS(61), 1,
      sym__line_ending,
    STATE(14), 1,
      aux_sym_command_repeat1,
  [164] = 3,
    ACTIONS(59), 1,
      aux_sym_command_token1,
    ACTIONS(63), 1,
      sym__line_ending,
    STATE(16), 1,
      aux_sym_command_repeat1,
  [174] = 3,
    ACTIONS(65), 1,
      aux_sym_command_token1,
    ACTIONS(67), 1,
      sym__line_ending,
    STATE(18), 1,
      aux_sym_command_repeat1,
  [184] = 3,
    ACTIONS(69), 1,
      aux_sym_command_token1,
    ACTIONS(72), 1,
      sym__line_ending,
    STATE(16), 1,
      aux_sym_command_repeat1,
  [194] = 2,
    STATE(6), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(74), 2,
      aux_sym_hex_argument_token1,
      sym_template,
  [202] = 3,
    ACTIONS(59), 1,
      aux_sym_command_token1,
    ACTIONS(76), 1,
      sym__line_ending,
    STATE(16), 1,
      aux_sym_command_repeat1,
  [212] = 2,
    ACTIONS(72), 1,
      sym__line_ending,
    ACTIONS(78), 1,
      aux_sym_command_token1,
  [219] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [224] = 1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [229] = 2,
    ACTIONS(84), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      aux_sym_indexes_repeat1,
  [236] = 2,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
  [243] = 2,
    ACTIONS(90), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym_indexes_repeat1,
  [250] = 2,
    ACTIONS(92), 1,
      aux_sym_command_token1,
    ACTIONS(94), 1,
      sym__line_ending,
  [257] = 2,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
  [264] = 2,
    ACTIONS(98), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      aux_sym_indexes_repeat1,
  [271] = 2,
    ACTIONS(101), 1,
      aux_sym_command_token1,
    ACTIONS(103), 1,
      sym__line_ending,
  [278] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [282] = 1,
    ACTIONS(107), 1,
      aux_sym__line_token1,
  [286] = 1,
    ACTIONS(109), 1,
      sym__line_ending,
  [290] = 1,
    ACTIONS(111), 1,
      sym_index,
  [294] = 1,
    ACTIONS(113), 1,
      sym__line_ending,
  [298] = 1,
    ACTIONS(115), 1,
      aux_sym__line_token1,
  [302] = 1,
    ACTIONS(117), 1,
      aux_sym__line_token1,
  [306] = 1,
    ACTIONS(119), 1,
      sym_index,
  [310] = 1,
    ACTIONS(86), 1,
      anon_sym_COMMA,
  [314] = 1,
    ACTIONS(121), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 154,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 184,
  [SMALL_STATE(17)] = 194,
  [SMALL_STATE(18)] = 202,
  [SMALL_STATE(19)] = 212,
  [SMALL_STATE(20)] = 219,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 229,
  [SMALL_STATE(23)] = 236,
  [SMALL_STATE(24)] = 243,
  [SMALL_STATE(25)] = 250,
  [SMALL_STATE(26)] = 257,
  [SMALL_STATE(27)] = 264,
  [SMALL_STATE(28)] = 271,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 282,
  [SMALL_STATE(31)] = 286,
  [SMALL_STATE(32)] = 290,
  [SMALL_STATE(33)] = 294,
  [SMALL_STATE(34)] = 298,
  [SMALL_STATE(35)] = 302,
  [SMALL_STATE(36)] = 306,
  [SMALL_STATE(37)] = 310,
  [SMALL_STATE(38)] = 314,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hex_argument_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_argument_repeat1, 2), SHIFT_REPEAT(5),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_argument_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_argument, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_argument, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexes, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2), SHIFT_REPEAT(37),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexes, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 6),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 4),
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
