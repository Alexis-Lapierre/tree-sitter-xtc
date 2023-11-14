const zeroTo255 = /(\d|[1-9]\d|1\d\d|2[0-4]\d|25[0-5])/;
const hexDigit = /[A-Za-z0-9]/;
const number = /\d+/;

const space = /[ \t]+/;
const maybeSpace = /[ \t]*/;


module.exports = grammar({
  name: "xtc",

  extras: $ => [],

  rules: {
    program: $ => $._lines,

    _lines: $ => repeat1($._line),
    
    _line: $ => seq(
      maybeSpace,
      optional(seq(
        $.changePort,
        maybeSpace,
      )),
      choice(
        $.command,
        $.comment,
      ),
      $._line_ending,
    ),

    changePort: $ => /\d+\/\d+/,
    
    command: $ => seq(
      $.parameter,
      optional(seq(space, $.indexes)),
      repeat(seq(space, $._argument)),
    ),

    parameter: $ => /([Pp][Ee]|[CMPcmp])[A-Za-z]?_\w+/,
    indexes: $ => seq(
      '[', maybeSpace, $.index,
      repeat(seq( maybeSpace, ',', maybeSpace, $.index )),
      maybeSpace,
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
          hexDigit,
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


    comment: $ => seq(
      ";",
      repeat(choice(
        $.port_comment,
        /[^\n\r]/,
      ))
    ),

    port_comment: $ => token(seq(
      "Port", maybeSpace,
      ":",    maybeSpace,
      number, maybeSpace,
      "/",    maybeSpace,
      number
    )),

    _line_ending: $ => token(seq(maybeSpace, /[\n\r]+/))
  },
});


