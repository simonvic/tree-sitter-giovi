([
  (commentBlock)
  (commentLine)
] @injection.content
  (#set! injection.language "comment"))

((literalTextBlock) @injection.content
  (#set! injection.language "textblock")
  (#offset! @injection.content 0 2 0 -2))

((literalExactTextBlock) @injection.content
  (#set! injection.language "textblock")
  (#offset! @injection.content 0 2 0 -2))

((docLine) @injection.content
  (#set! injection.language "markdown")
  (#offset! @injection.content 0 2 0 0))

((docBlock) @injection.content
  (#set! injection.language "markdown")
  (#offset! @injection.content 0 3 0 -2))
