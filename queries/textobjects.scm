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
  "," @parameter.outer
  .
  (formalParameter) @parameter.inner @parameter.outer)

(formalParameters
  .
  (formalParameter) @parameter.inner @parameter.outer
  .
  ","? @parameter.outer)

(actualParameters
  "," @parameter.outer
  .
  (actualParameter) @parameter.inner @parameter.outer)

(actualParameters
  .
  (actualParameter) @parameter.inner @parameter.outer
  .
  ","? @parameter.outer)

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
