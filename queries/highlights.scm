(comment_line) @comment

(comment_block) @comment.block

(doc_line) @comment.documentation

(doc_block) @comment.documentation.block

(literal_bool) @boolean

(literal_integer) @number

(literal_natural) @number.natural

(literal_real) @number.float

(literal_text) @string

(literal_text_block) @string.block

(literal_exact_text) @string.exact

(literal_exact_text_block) @string.exact.block

(escape_sequence) @string.escape

(literal_text
  "\"" @string.special)

(literal_text_block
  [
    "\"{"
    "}\""
  ] @string.special)

(literal_exact_text
  "'" @string.special)

(literal_exact_text_block
  [
    "'{"
    "}'"
  ] @string.special)

(text_interpolation
  [
    "$"
    "${"
    "}"
  ] @punctuation)

(literal_self) @variable.builtin

(declaration_function
  (literal_self) @keyword)

(literal_default) @variable.builtin

(literal_placeholder) @variable.builtin

(identifier) @variable

(import_entry
  (identifier) @module)

(declaration_module
  name: (_) @module)

(declaration_struct
  typename: (_) @type)

(type) @type

(type_qualified
  typename: (_) @type)

(declaration_constant
  name: (_) @constant)

((text_interpolation) @variable
  (#match? @variable "[A-Za-z][A-Za-z0-9_]*$"))

((text_interpolation) @constant
  (#match? @constant "[A-Z][A-Z0-9_]*$"))

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  ","
  "."
  ".."
  ":"
  ";"
  "=>"
] @punctuation

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "^"
  "->"
  "->+"
  "->-"
  "->*"
  "->/"
  "<-"
  "+<-"
  "-<-"
  "*<-"
  "/<-"
  "<"
  "<="
  ">="
  ">"
  "="
  "!="
  "not"
  "!"
  "and"
  "&"
  "or"
  "|"
  "!!"
  "&&"
  "||"
  "|||"
  "{<}"
  "{>}"
  "{>>}"
  "in"
  "=~"
  "~="
  "is"
  "as"
  "::"
] @operator

(type_function_ref
  "::" @punctuation)

[
  "if"
  "do"
  "else"
  "repeat"
  "for"
  "return"
  "const"
  "var"
  "default"
  "when"
  "alias"
  "import"
  "module"
  "struct"
  "function"
  "type"
  (statement_skip)
  (statement_break)
] @keyword

(statement_for
  "in" @keyword)

(type_tuple
  "tuple" @type.builtin)

(tuple
  "tuple" @type.builtin)

(type_record
  "record" @type.builtin)

(record
  "record" @type.builtin)

(expression_type
  "type" @type.builtin)

(reserved_identifier) @constant.builtin

(declaration_function
  (identifier) @function)

(expression_dot_ref
  accessor: (identifier) @function)

(invocation
  invoked: (_) @function.call)

(invocation
  invoked: (expression_dot
    (_)
    (identifier) @function.call))

(actual_parameter
  label: (_) @label)

(formal_parameter
  label: (_) @label)

(tuple
  [
    "<"
    ">"
  ] @punctuation)

(record
  [
    "<"
    ">"
  ] @punctuation)

(struct_body
  [
    "<"
    ">"
  ] @punctuation)

(pattern_product
  [
    "<"
    ">"
  ] @punctuation)

(pattern_field_named
  name: (_) @label)

(record
  name: (_) @label)

(ERROR) @error

; Reserved keywords
((identifier) @keyword @error
  (#match? @error "^(inf|nan|INF|NAN|def|let|at|with|interface)$"))

((identifier) @type.builtin
  (#match? @type.builtin "^(Type|Function|Tuple|Record|Struct|Module)$"))
