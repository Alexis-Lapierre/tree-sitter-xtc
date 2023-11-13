# tree-sitter-xtc

A XTC parser for [tree-sitter](https://tree-sitter.github.io/tree-sitter/)

The parser is designed to read Xena Traffic Configuration files, but also include [MT2](https://mt2.fr) template rules.
This kind of XTC dialect is is used for certification in the Broadband Forum of PON (Passive Optical Network) technologies,
such as the [BBF.247](https://www.broadband-forum.org/testing-and-certification-programs/bbf-247-gpon-onu-certification)

## Goals

This is still a simple project,
with the aim to provide syntax highlighting for .xtc files for the [Helix editor](https://helix-editor.com/).
Support may be expanded for other editor when the need arise.

## Limitations

In the current state, the parsing is downright simplistic,
and will happily parse invalid keywords
example: `P_INVALID_COMMAND` will be recognized as a valid command.

Currently no test are made with tree-sitter. This will be done at a later date

## Sources

https://docs.xenanetworks.com/projects/xoa-cli/en/latest/index.html
