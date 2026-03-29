(declaration_struct
  (struct_body) @class.inner) @class.outer

(declaration_function) @function.outer

[
  (declaration_function
    body: (_) @function.inner)
  (anon_function
    body: (_) @function.inner)
] @function.outer

(statement_for
  body: (_)? @loop.inner) @loop.outer

(statement_repeat
  body: (_)? @loop.inner) @loop.outer

; blocks
(block) @block.outer

(invocation) @call.outer

(formal_parameters
  "," @parameter.outer
  .
  (formal_parameter) @parameter.inner @parameter.outer)

(formal_parameters
  .
  (formal_parameter) @parameter.inner @parameter.outer
  .
  ","? @parameter.outer)

(actual_parameters
  "," @parameter.outer
  .
  (actual_parameter) @parameter.inner @parameter.outer)

(actual_parameters
  .
  (actual_parameter) @parameter.inner @parameter.outer
  .
  ","? @parameter.outer)

[
  (comment_line)
  (comment_block)
  (doc_line)
  (doc_block)
] @comment.outer

[
  (literal_integer)
  (literal_natural)
  (literal_real)
] @number.inner
