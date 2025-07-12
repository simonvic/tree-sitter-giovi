(structDefinition
  (structBodyDefinition) @class.inner) @class.outer

(functionDeclaration) @function.outer

[
  (functionDeclaration
    body: (_) @function.inner)
  (anonFunction
    body: (_) @function.inner)
] @function.outer

(forStatement
  body: (_)? @loop.inner) @loop.outer

(repeatStatement
  body: (_)? @loop.inner) @loop.outer

; blocks
(block) @block.outer

(invocation) @call.outer

(formalParameters
  "," @_start
  .
  (formalParameter) @parameter.inner
  (#make-range! "parameter.outer" @_start @parameter.inner))

(formalParameters
  .
  (formalParameter) @parameter.inner
  .
  ","? @_end
  (#make-range! "parameter.outer" @parameter.inner @_end))

(actualParameters
  "," @_start
  .
  (actualParameter) @parameter.inner
  (#make-range! "parameter.outer" @_start @parameter.inner))

(actualParameters
  .
  (actualParameter) @parameter.inner
  .
  ","? @_end
  (#make-range! "parameter.outer" @parameter.inner @_end))

[
  (commentLine)
  (commentBlock)
  (docLine)
  (docBlock)
] @comment.outer

[
  (literalInteger)
  (literalNatural)
  (literalReal)
] @number.inner
