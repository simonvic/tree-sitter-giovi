(commentLine) @comment

(commentBlock) @comment.block

(docLine) @comment.documentation

(docBlock) @comment.documentation.block

(literalBool) @boolean

(literalInteger) @number

(literalNatural) @number.natural

(literalReal) @number.float

(literalText) @string

(literalTextBlock) @string.block

(literalExactText) @string.exact

(literalExactTextBlock) @string.exact.block

(escapeSequence) @string.escape

(literalText
  [
    "\""
    "\""
  ] @punctuation)

(literalTextBlock
  [
    "\"{"
    "}\""
  ] @punctuation)

(literalExactText
  [
    "'"
    "'"
  ] @punctuation)

(literalExactTextBlock
  [
    "'{"
    "}'"
  ] @punctuation)

(textInterpolation
  [
    "$"
    "${"
    "}"
  ] @punctuation)

(literalSelf) @variable.builtin

(functionDeclaration
  (literalSelf) @keyword)

(literalDefault) @variable.builtin

(literalPlaceholder) @variable.builtin

(identifier) @variable

(importEntry
  (identifier) @module)

(moduleDeclaration
  name: (_) @module)

(structDefinition
  parentType: (_) @type
  typename: (_) @type)

(type) @type

(constantDeclaration
  name: (_) @constant)

((textInterpolation) @variable
  (#match? @variable "[A-Za-z][A-Za-z0-9_]*$"))

((textInterpolation) @constant
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
] @punctuation

[
  "@"
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
  "=>"
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
  "in"
  "=~"
  "~="
  "is"
  "as"
  "::"
] @operator

(typeFunctionRef
  "::" @punctuation)

(specialKey) @variable.builtin

[
  "if"
  "do"
  "else"
  "repeat"
  "for"
  "return"
  "const"
  "default"
  "when"
  "import"
  "module"
  (skipStatement)
  (breakStatement)
] @keyword

(forStatement
  "in" @keyword)

(reservedIdentifier) @constant.builtin

(functionDeclaration
  (identifier) @function)

(invocation
  invoked: (_) @function.call)

(actualParameter
  label: (_) @label)

(formalParameter
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

(structBodyDefinition
  [
    "<"
    ">"
  ] @punctuation)

(iteratorAggregate
  [
    "<"
    ">"
  ] @punctuation)

(record
  name: (_) @label)

(ERROR) @error

; Reserved keywords
((identifier) @error
  (#match? @error "^(alias|inf|nan|INF|NAN)$"))
