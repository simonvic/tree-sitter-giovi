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

; ([
;   (docBlock)
;   (docLine)
; ] @injection.content
;   (#set! injection.language "doxygen"))
