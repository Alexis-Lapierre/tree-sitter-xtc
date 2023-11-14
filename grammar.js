const zeroTo255 = /(\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])/;

module.exports = grammar({
  name: "xtc",

  extras: $ => [],

  rules: {
    program: $ => $._lines,

    _lines: $ => repeat1(seq(
      optional($._whitespace),
      optional($._line),
      $._line_ending,
    )),
    
    _line: $ => choice(
      $.command,
      $.comment,
    ),

    command: $ => seq(
      $.parameter,
      optional(seq($._whitespace, $.indexes)),
      repeat(seq($._whitespace, $._argument)),
    ),

    parameter: $ => /([Pp][Ee]|[CMPcmp])[A-Za-z]?_\w+/,
    indexes: $ => seq(
      '[',
      optional($._whitespace),
      $.index,
      repeat(seq(
        optional($._whitespace),
        ',',
        optional($._whitespace),
        $.index
      )),
      optional($._whitespace),
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

    _hex: $ => /[A-Fa-f\d]/,

    comment: $ => seq(
      ";",
      repeat(choice(
        $.port_comment,
        /[^\n\r]/,
      ))
    ),

    port_comment: $ => /Port[ \t]*:[ \t]*\d+\/\d+/,

    _line_ending: $ => /[\n\r]+/,
    _whitespace: $ => /[ \t]+/,
  },
});


