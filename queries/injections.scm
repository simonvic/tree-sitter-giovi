([
  (comment_block)
  (comment_line)
] @injection.content
  (#set! injection.language "comment"))

((literal_text_block) @injection.content
  (#set! injection.language "textblock")
  (#offset! @injection.content 0 2 0 -2))

((literal_exact_text_block) @injection.content
  (#set! injection.language "textblock")
  (#offset! @injection.content 0 2 0 -2))

((doc_line) @injection.content
  (#set! injection.language "markdown")
  (#offset! @injection.content 0 2 0 0))

((doc_block) @injection.content
  (#set! injection.language "markdown")
  (#offset! @injection.content 0 3 0 -2))
