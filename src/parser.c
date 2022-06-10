#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_line_comment = 1,
  anon_sym_LT = 2,
  anon_sym_GT = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LT_SLASH = 5,
  anon_sym_EQ = 6,
  sym_attribute_name = 7,
  sym_attribute_value = 8,
  anon_sym_LBRACE = 9,
  aux_sym_rust_attribute_token1 = 10,
  anon_sym_RBRACE = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_rust_text = 16,
  sym__start_tag_name = 17,
  sym__script_start_tag_name = 18,
  sym__style_start_tag_name = 19,
  sym__end_tag_name = 20,
  sym_erroneous_end_tag_name = 21,
  sym__implicit_end_tag = 22,
  sym_raw_text = 23,
  sym_block_comment = 24,
  sym_fragment = 25,
  sym__node = 26,
  sym_element = 27,
  sym_script_element = 28,
  sym_style_element = 29,
  sym_start_tag = 30,
  sym_script_start_tag = 31,
  sym_style_start_tag = 32,
  sym_self_closing_tag = 33,
  sym_end_tag = 34,
  sym_erroneous_end_tag = 35,
  sym_attribute = 36,
  sym_rust_attribute = 37,
  sym_quoted_attribute_value = 38,
  aux_sym_fragment_repeat1 = 39,
  aux_sym_start_tag_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_LBRACE] = "{",
  [aux_sym_rust_attribute_token1] = "rust_attribute_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_rust_text] = "rust_text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_block_comment] = "block_comment",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_rust_attribute] = "rust_attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_rust_attribute_token1] = aux_sym_rust_attribute_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_rust_text] = sym_rust_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_block_comment] = sym_block_comment,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_rust_attribute] = sym_rust_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rust_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_rust_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('<' <= lookahead && lookahead <= '>')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_rust_attribute_token1);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_rust_attribute_token1);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_rust_attribute_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_rust_text);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_rust_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 7, .external_lex_state = 2},
  [2] = {.lex_state = 7, .external_lex_state = 3},
  [3] = {.lex_state = 7, .external_lex_state = 3},
  [4] = {.lex_state = 7, .external_lex_state = 3},
  [5] = {.lex_state = 7, .external_lex_state = 3},
  [6] = {.lex_state = 7, .external_lex_state = 2},
  [7] = {.lex_state = 7, .external_lex_state = 3},
  [8] = {.lex_state = 7, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 4},
  [12] = {.lex_state = 4, .external_lex_state = 4},
  [13] = {.lex_state = 4, .external_lex_state = 4},
  [14] = {.lex_state = 4, .external_lex_state = 4},
  [15] = {.lex_state = 4, .external_lex_state = 4},
  [16] = {.lex_state = 4, .external_lex_state = 2},
  [17] = {.lex_state = 7, .external_lex_state = 3},
  [18] = {.lex_state = 7, .external_lex_state = 3},
  [19] = {.lex_state = 4, .external_lex_state = 2},
  [20] = {.lex_state = 7, .external_lex_state = 2},
  [21] = {.lex_state = 7, .external_lex_state = 3},
  [22] = {.lex_state = 7, .external_lex_state = 2},
  [23] = {.lex_state = 7, .external_lex_state = 3},
  [24] = {.lex_state = 7, .external_lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 3},
  [26] = {.lex_state = 7, .external_lex_state = 2},
  [27] = {.lex_state = 4, .external_lex_state = 4},
  [28] = {.lex_state = 7, .external_lex_state = 3},
  [29] = {.lex_state = 7, .external_lex_state = 3},
  [30] = {.lex_state = 4, .external_lex_state = 2},
  [31] = {.lex_state = 7, .external_lex_state = 2},
  [32] = {.lex_state = 4, .external_lex_state = 2},
  [33] = {.lex_state = 7, .external_lex_state = 2},
  [34] = {.lex_state = 7, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 2},
  [37] = {.lex_state = 7, .external_lex_state = 3},
  [38] = {.lex_state = 7, .external_lex_state = 2},
  [39] = {.lex_state = 7, .external_lex_state = 3},
  [40] = {.lex_state = 7, .external_lex_state = 3},
  [41] = {.lex_state = 7, .external_lex_state = 3},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 4, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 3},
  [45] = {.lex_state = 7, .external_lex_state = 3},
  [46] = {.lex_state = 4, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 5},
  [48] = {.lex_state = 4, .external_lex_state = 4},
  [49] = {.lex_state = 4, .external_lex_state = 4},
  [50] = {.lex_state = 4, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 4, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 6},
  [54] = {.lex_state = 0, .external_lex_state = 6},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 2, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 7},
  [60] = {.lex_state = 2, .external_lex_state = 2},
  [61] = {.lex_state = 3, .external_lex_state = 2},
  [62] = {.lex_state = 3, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 6},
  [65] = {.lex_state = 0, .external_lex_state = 6},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 4, .external_lex_state = 2},
  [68] = {.lex_state = 4, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 6},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 25, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 0, .external_lex_state = 8},
  [91] = {.lex_state = 25, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_block_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_block_comment] = sym_block_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [2] = {
    [ts_external_token_block_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_block_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_block_comment] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_block_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_block_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_block_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_block_comment] = true,
  },
  [9] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_block_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(87),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(3),
    [sym_script_start_tag] = STATE(51),
    [sym_style_start_tag] = STATE(56),
    [sym_self_closing_tag] = STATE(36),
    [sym_erroneous_end_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_rust_text] = ACTIONS(13),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(19), 1,
      sym_rust_text,
    ACTIONS(21), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(33), 1,
      sym_end_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_script_start_tag,
    STATE(54), 1,
      sym_style_start_tag,
    STATE(7), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [42] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(17), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      sym_rust_text,
    ACTIONS(25), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(20), 1,
      sym_end_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_script_start_tag,
    STATE(54), 1,
      sym_style_start_tag,
    STATE(2), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [84] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(29), 1,
      sym_rust_text,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(28), 1,
      sym_end_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_script_start_tag,
    STATE(54), 1,
      sym_style_start_tag,
    STATE(5), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [126] = 12,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      sym_rust_text,
    ACTIONS(27), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(45), 1,
      sym_end_tag,
    STATE(53), 1,
      sym_script_start_tag,
    STATE(54), 1,
      sym_style_start_tag,
    STATE(7), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [168] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_rust_text,
    STATE(3), 1,
      sym_start_tag,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_script_start_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(8), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [207] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(42), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_rust_text,
    ACTIONS(48), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(37), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_script_start_tag,
    STATE(54), 1,
      sym_style_start_tag,
    STATE(7), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [246] = 11,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_SLASH,
    ACTIONS(56), 1,
      sym_rust_text,
    STATE(3), 1,
      sym_start_tag,
    STATE(36), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_script_start_tag,
    STATE(56), 1,
      sym_style_start_tag,
    STATE(8), 6,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [285] = 6,
    ACTIONS(59), 1,
      sym_attribute_value,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(46), 2,
      sym_rust_attribute,
      sym_quoted_attribute_value,
  [306] = 6,
    ACTIONS(67), 1,
      sym_attribute_value,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(67), 2,
      sym_rust_attribute,
      sym_quoted_attribute_value,
  [327] = 5,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(77), 1,
      anon_sym_SLASH_GT,
    ACTIONS(79), 1,
      sym_attribute_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(14), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [345] = 4,
    ACTIONS(83), 1,
      sym_attribute_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(81), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(12), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [361] = 5,
    ACTIONS(75), 1,
      anon_sym_GT,
    ACTIONS(79), 1,
      sym_attribute_name,
    ACTIONS(86), 1,
      anon_sym_SLASH_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(15), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [379] = 5,
    ACTIONS(79), 1,
      sym_attribute_name,
    ACTIONS(88), 1,
      anon_sym_GT,
    ACTIONS(90), 1,
      anon_sym_SLASH_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(12), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [397] = 5,
    ACTIONS(79), 1,
      sym_attribute_name,
    ACTIONS(88), 1,
      anon_sym_GT,
    ACTIONS(92), 1,
      anon_sym_SLASH_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(12), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [415] = 4,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(96), 1,
      sym_attribute_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [430] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(98), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(100), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
  [445] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(102), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(104), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
  [460] = 4,
    ACTIONS(96), 1,
      sym_attribute_name,
    ACTIONS(106), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(16), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [475] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(110), 2,
      anon_sym_LT,
      sym_rust_text,
  [490] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(112), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(114), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
  [505] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(118), 2,
      anon_sym_LT,
      sym_rust_text,
  [520] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(118), 2,
      anon_sym_LT,
      sym_rust_text,
  [535] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(112), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
  [550] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(120), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(122), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
  [565] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(102), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
  [580] = 3,
    ACTIONS(126), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(124), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [593] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(108), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(110), 2,
      anon_sym_LT,
      sym_rust_text,
  [608] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(128), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(130), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
  [623] = 4,
    ACTIONS(96), 1,
      sym_attribute_name,
    ACTIONS(132), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [638] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(136), 2,
      anon_sym_LT,
      sym_rust_text,
  [653] = 4,
    ACTIONS(81), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(32), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [668] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym_rust_text,
  [683] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      sym_rust_text,
  [698] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(151), 2,
      anon_sym_LT,
      sym_rust_text,
  [713] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(155), 2,
      anon_sym_LT,
      sym_rust_text,
  [728] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(153), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(155), 2,
      anon_sym_LT,
      sym_rust_text,
  [743] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(159), 2,
      anon_sym_LT,
      sym_rust_text,
  [758] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(134), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(136), 2,
      anon_sym_LT,
      sym_rust_text,
  [773] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(157), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(159), 2,
      anon_sym_LT,
      sym_rust_text,
  [788] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(151), 2,
      anon_sym_LT,
      sym_rust_text,
  [803] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(128), 2,
      anon_sym_LT,
      sym_rust_text,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
  [818] = 4,
    ACTIONS(96), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(30), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [833] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(145), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(147), 2,
      anon_sym_LT,
      sym_rust_text,
  [848] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      sym__implicit_end_tag,
      anon_sym_LT_SLASH,
    ACTIONS(143), 2,
      anon_sym_LT,
      sym_rust_text,
  [863] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(163), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [873] = 4,
    ACTIONS(165), 1,
      sym__start_tag_name,
    ACTIONS(167), 1,
      sym__script_start_tag_name,
    ACTIONS(169), 1,
      sym__style_start_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [887] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [897] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [907] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [917] = 4,
    ACTIONS(177), 1,
      anon_sym_LT_SLASH,
    ACTIONS(179), 1,
      sym_raw_text,
    STATE(22), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [931] = 3,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(124), 2,
      anon_sym_GT,
      sym_attribute_name,
  [943] = 4,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    ACTIONS(185), 1,
      sym_raw_text,
    STATE(23), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [957] = 4,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    ACTIONS(187), 1,
      sym_raw_text,
    STATE(21), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [971] = 4,
    ACTIONS(167), 1,
      sym__script_start_tag_name,
    ACTIONS(169), 1,
      sym__style_start_tag_name,
    ACTIONS(189), 1,
      sym__start_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [985] = 4,
    ACTIONS(177), 1,
      anon_sym_LT_SLASH,
    ACTIONS(191), 1,
      sym_raw_text,
    STATE(24), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [999] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      aux_sym_quoted_attribute_value_token2,
  [1012] = 3,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    STATE(44), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1023] = 3,
    ACTIONS(197), 1,
      sym__end_tag_name,
    ACTIONS(199), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1034] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      aux_sym_quoted_attribute_value_token2,
  [1047] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_quoted_attribute_value_token1,
  [1060] = 4,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_quoted_attribute_value_token1,
  [1073] = 3,
    ACTIONS(199), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(209), 1,
      sym__end_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1084] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(211), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1093] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(213), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1102] = 3,
    ACTIONS(183), 1,
      anon_sym_LT_SLASH,
    STATE(41), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1113] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(163), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1122] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1131] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(173), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1140] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1149] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(215), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1158] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(217), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1167] = 3,
    ACTIONS(177), 1,
      anon_sym_LT_SLASH,
    STATE(35), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1178] = 3,
    ACTIONS(177), 1,
      anon_sym_LT_SLASH,
    STATE(34), 1,
      sym_end_tag,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1189] = 2,
    ACTIONS(219), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1197] = 2,
    ACTIONS(209), 1,
      sym__end_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1205] = 2,
    ACTIONS(221), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1213] = 2,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1221] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1229] = 2,
    ACTIONS(225), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1237] = 2,
    ACTIONS(227), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1245] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      aux_sym_rust_attribute_token1,
  [1255] = 2,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1263] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1271] = 2,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1279] = 2,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1287] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1295] = 2,
    ACTIONS(199), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1303] = 2,
    ACTIONS(239), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1311] = 2,
    ACTIONS(197), 1,
      sym__end_tag_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1319] = 3,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(7), 1,
      sym_line_comment,
    ACTIONS(241), 1,
      aux_sym_rust_attribute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 415,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 445,
  [SMALL_STATE(19)] = 460,
  [SMALL_STATE(20)] = 475,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 505,
  [SMALL_STATE(23)] = 520,
  [SMALL_STATE(24)] = 535,
  [SMALL_STATE(25)] = 550,
  [SMALL_STATE(26)] = 565,
  [SMALL_STATE(27)] = 580,
  [SMALL_STATE(28)] = 593,
  [SMALL_STATE(29)] = 608,
  [SMALL_STATE(30)] = 623,
  [SMALL_STATE(31)] = 638,
  [SMALL_STATE(32)] = 653,
  [SMALL_STATE(33)] = 668,
  [SMALL_STATE(34)] = 683,
  [SMALL_STATE(35)] = 698,
  [SMALL_STATE(36)] = 713,
  [SMALL_STATE(37)] = 728,
  [SMALL_STATE(38)] = 743,
  [SMALL_STATE(39)] = 758,
  [SMALL_STATE(40)] = 773,
  [SMALL_STATE(41)] = 788,
  [SMALL_STATE(42)] = 803,
  [SMALL_STATE(43)] = 818,
  [SMALL_STATE(44)] = 833,
  [SMALL_STATE(45)] = 848,
  [SMALL_STATE(46)] = 863,
  [SMALL_STATE(47)] = 873,
  [SMALL_STATE(48)] = 887,
  [SMALL_STATE(49)] = 897,
  [SMALL_STATE(50)] = 907,
  [SMALL_STATE(51)] = 917,
  [SMALL_STATE(52)] = 931,
  [SMALL_STATE(53)] = 943,
  [SMALL_STATE(54)] = 957,
  [SMALL_STATE(55)] = 971,
  [SMALL_STATE(56)] = 985,
  [SMALL_STATE(57)] = 999,
  [SMALL_STATE(58)] = 1012,
  [SMALL_STATE(59)] = 1023,
  [SMALL_STATE(60)] = 1034,
  [SMALL_STATE(61)] = 1047,
  [SMALL_STATE(62)] = 1060,
  [SMALL_STATE(63)] = 1073,
  [SMALL_STATE(64)] = 1084,
  [SMALL_STATE(65)] = 1093,
  [SMALL_STATE(66)] = 1102,
  [SMALL_STATE(67)] = 1113,
  [SMALL_STATE(68)] = 1122,
  [SMALL_STATE(69)] = 1131,
  [SMALL_STATE(70)] = 1140,
  [SMALL_STATE(71)] = 1149,
  [SMALL_STATE(72)] = 1158,
  [SMALL_STATE(73)] = 1167,
  [SMALL_STATE(74)] = 1178,
  [SMALL_STATE(75)] = 1189,
  [SMALL_STATE(76)] = 1197,
  [SMALL_STATE(77)] = 1205,
  [SMALL_STATE(78)] = 1213,
  [SMALL_STATE(79)] = 1221,
  [SMALL_STATE(80)] = 1229,
  [SMALL_STATE(81)] = 1237,
  [SMALL_STATE(82)] = 1245,
  [SMALL_STATE(83)] = 1255,
  [SMALL_STATE(84)] = 1263,
  [SMALL_STATE(85)] = 1271,
  [SMALL_STATE(86)] = 1279,
  [SMALL_STATE(87)] = 1287,
  [SMALL_STATE(88)] = 1295,
  [SMALL_STATE(89)] = 1303,
  [SMALL_STATE(90)] = 1311,
  [SMALL_STATE(91)] = 1319,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(88),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(47),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rust_attribute, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rsx_external_scanner_create(void);
void tree_sitter_rsx_external_scanner_destroy(void *);
bool tree_sitter_rsx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rsx_external_scanner_serialize(void *, char *);
void tree_sitter_rsx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rsx(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rsx_external_scanner_create,
      tree_sitter_rsx_external_scanner_destroy,
      tree_sitter_rsx_external_scanner_scan,
      tree_sitter_rsx_external_scanner_serialize,
      tree_sitter_rsx_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
