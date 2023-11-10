#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_port_comment = 13,
  sym_comment = 14,
  sym__line_ending = 15,
  sym__whitespace = 16,
  sym_program = 17,
  aux_sym__lines = 18,
  sym__line = 19,
  sym_command = 20,
  sym_indexes = 21,
  sym__argument = 22,
  sym_hex_argument = 23,
  aux_sym_command_repeat1 = 24,
  aux_sym_indexes_repeat1 = 25,
  aux_sym_hex_argument_repeat1 = 26,
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
  [sym_port_comment] = "port_comment",
  [sym_comment] = "comment",
  [sym__line_ending] = "_line_ending",
  [sym__whitespace] = "_whitespace",
  [sym_program] = "program",
  [aux_sym__lines] = "_lines",
  [sym__line] = "_line",
  [sym_command] = "command",
  [sym_indexes] = "indexes",
  [sym__argument] = "_argument",
  [sym_hex_argument] = "hex_argument",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_indexes_repeat1] = "indexes_repeat1",
  [aux_sym_hex_argument_repeat1] = "hex_argument_repeat1",
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
  [sym_port_comment] = sym_port_comment,
  [sym_comment] = sym_comment,
  [sym__line_ending] = sym__line_ending,
  [sym__whitespace] = sym__whitespace,
  [sym_program] = sym_program,
  [aux_sym__lines] = aux_sym__lines,
  [sym__line] = sym__line,
  [sym_command] = sym_command,
  [sym_indexes] = sym_indexes,
  [sym__argument] = sym__argument,
  [sym_hex_argument] = sym_hex_argument,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_indexes_repeat1] = aux_sym_indexes_repeat1,
  [aux_sym_hex_argument_repeat1] = aux_sym_hex_argument_repeat1,
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
  [sym_port_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == 'P') ADVANCE(17);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '5') ADVANCE(5);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '5') ADVANCE(10);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '2') ADVANCE(55);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(3);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '2') ADVANCE(4);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_parameter);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_parameter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '5') ADVANCE(34);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '.') ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_index);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_index);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '5') ADVANCE(44);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_numeric_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string_literal_argument);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string_argument);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_argument);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_argument);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_argument);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ipv4_argument);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (lookahead == '5') ADVANCE(56);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ipv4_argument);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__hex);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_port_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_port_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'P') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__line_ending);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_parameter] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_index] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [sym_template] = ACTIONS(1),
    [sym_numeric_argument] = ACTIONS(1),
    [sym_string_literal_argument] = ACTIONS(1),
    [sym_string_argument] = ACTIONS(1),
    [sym_ipv4_argument] = ACTIONS(1),
    [sym__hex] = ACTIONS(1),
    [sym_port_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__line_ending] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [aux_sym__lines] = STATE(6),
    [sym__line] = STATE(27),
    [sym_command] = STATE(27),
    [sym_parameter] = ACTIONS(3),
    [sym_port_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      sym_numeric_argument,
    ACTIONS(17), 1,
      sym__line_ending,
    STATE(16), 1,
      sym_indexes,
    STATE(21), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(13), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [26] = 5,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      sym_numeric_argument,
    ACTIONS(19), 1,
      sym__line_ending,
    STATE(21), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(13), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [46] = 5,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      sym_numeric_argument,
    ACTIONS(21), 1,
      sym__line_ending,
    STATE(21), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(13), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [66] = 5,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      sym_numeric_argument,
    ACTIONS(23), 1,
      sym__line_ending,
    STATE(21), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(13), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [86] = 6,
    ACTIONS(3), 1,
      sym_parameter,
    ACTIONS(7), 1,
      sym__whitespace,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym__lines,
    ACTIONS(5), 2,
      sym_port_comment,
      sym_comment,
    STATE(27), 2,
      sym__line,
      sym_command,
  [107] = 4,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(15), 1,
      sym_numeric_argument,
    STATE(21), 2,
      sym__argument,
      sym_hex_argument,
    ACTIONS(13), 4,
      sym_template,
      sym_string_literal_argument,
      sym_string_argument,
      sym_ipv4_argument,
  [124] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_parameter,
    ACTIONS(35), 1,
      sym__whitespace,
    STATE(8), 1,
      aux_sym__lines,
    ACTIONS(32), 2,
      sym_port_comment,
      sym_comment,
    STATE(27), 2,
      sym__line,
      sym_command,
  [145] = 3,
    STATE(9), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(38), 2,
      sym_template,
      sym__hex,
    ACTIONS(41), 2,
      sym__line_ending,
      sym__whitespace,
  [157] = 2,
    ACTIONS(43), 2,
      sym_port_comment,
      sym_comment,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_parameter,
      sym__whitespace,
  [167] = 3,
    STATE(9), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(45), 2,
      sym_template,
      sym__hex,
    ACTIONS(47), 2,
      sym__line_ending,
      sym__whitespace,
  [179] = 3,
    ACTIONS(17), 1,
      sym__line_ending,
    ACTIONS(49), 1,
      sym__whitespace,
    STATE(14), 1,
      aux_sym_command_repeat1,
  [189] = 3,
    ACTIONS(51), 1,
      sym__line_ending,
    ACTIONS(53), 1,
      sym__whitespace,
    STATE(12), 1,
      aux_sym_command_repeat1,
  [199] = 3,
    ACTIONS(55), 1,
      sym__line_ending,
    ACTIONS(57), 1,
      sym__whitespace,
    STATE(14), 1,
      aux_sym_command_repeat1,
  [209] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_indexes_repeat1,
  [219] = 3,
    ACTIONS(19), 1,
      sym__line_ending,
    ACTIONS(64), 1,
      sym__whitespace,
    STATE(18), 1,
      aux_sym_command_repeat1,
  [229] = 2,
    STATE(11), 1,
      aux_sym_hex_argument_repeat1,
    ACTIONS(66), 2,
      sym_template,
      sym__hex,
  [237] = 3,
    ACTIONS(23), 1,
      sym__line_ending,
    ACTIONS(68), 1,
      sym__whitespace,
    STATE(14), 1,
      aux_sym_command_repeat1,
  [247] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_indexes_repeat1,
  [257] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_indexes_repeat1,
  [267] = 1,
    ACTIONS(55), 2,
      sym__line_ending,
      sym__whitespace,
  [272] = 1,
    ACTIONS(77), 2,
      sym__line_ending,
      sym__whitespace,
  [277] = 1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [282] = 1,
    ACTIONS(79), 2,
      sym__line_ending,
      sym__whitespace,
  [287] = 1,
    ACTIONS(81), 1,
      sym_index,
  [291] = 1,
    ACTIONS(83), 1,
      sym_index,
  [295] = 1,
    ACTIONS(85), 1,
      sym__line_ending,
  [299] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 179,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 277,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 295,
  [SMALL_STATE(28)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(27),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_argument_repeat1, 2), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_argument_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_argument, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2), SHIFT_REPEAT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_indexes_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexes, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_XTC(void) {
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
