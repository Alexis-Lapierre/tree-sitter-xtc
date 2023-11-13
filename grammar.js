const zeroTo255 = /(\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])/;

module.exports = grammar({
  name: "xtc",

  extras: $ => [],

  rules: {
    program: $ => $._lines,

    _lines: $ => repeat1(seq($._line, $._line_ending)),
    
    _line: $ => choice(
      $.command,
      $.port_comment,
      $.comment,
      $._whitespace,
    ),

    command: $ => seq(
      $.parameter,
      optional(seq($._whitespace, $.indexes)),
      repeat(seq($._whitespace, $._argument)),
      optional($._whitespace)
    ),

    parameter: $ => /[Pp][A-Za-z]?_\w+/,
    indexes: $ => seq(
      '[',
      $.index,
      repeat(seq(',', $.index)),
      ']',
    ),

    index: $ => /\d+/,

    _argument: $ => choice(
      $.hex_argument,
      $.ipv4_argument,
      $.numeric_argument,
      $.string_literal_argument,
      $.string_argument,
      $.template,
    ),

    hex_argument: $ => seq(
      "0x",
      repeat1(
        choice(
          $.template,
          $._hex,
      ))
    ),

    template: $ => /<[\w_-]+>/,
    numeric_argument: $ => /-?\d+/,
    string_literal_argument: $ => /"[^"]*"/,
    string_argument: $ => /[A-Za-f][A-Za-f0-9_]+/,
    ipv4_argument: $ => token(seq(
      zeroTo255, '.',
      zeroTo255, '.',
      zeroTo255, '.',
      zeroTo255,
    )),

    _hex: $ => /[A-Fa-f\d]+/,

    port_comment: $ => /;[ \t]*Port[ \t]:[ \t]*\d+\/\d+[ \t]*/,
    comment: $ => /;[^\n\r]*/,
    _line_ending: $ => /[\n\r]+/,

    _whitespace: $ => /[ \t]+/,
  },
});


