(commentLine) @comment
(commentBlock) @comment.block

(docLine) @comment.doc
(docBlock) @comment.doc.block

(literalBool) @boolean

(literalInteger) @number
(literalNatural) @number.natural
(literalReal) @number.float

(literalText) @string
(literalTextBlock) @string.block
(literalExactText) @string.exact
(literalExactTextBlock) @string.exact.block

(escapeSequence) @string.escape
(literalText ["\"" "\""] @punctuation)
(literalTextBlock ["\"{" "}\""] @punctuation)
(literalExactText ["'" "'"] @punctuation)
(literalExactTextBlock ["'{" "}'"] @punctuation)
(textInterpolation ["$" "${" "}"] @punctuation)

(literalDefault) @variable.builtin
(literalPlaceholder) @variable.builtin

(identifier) @variable
(typeIdentifier) @type
(constantIdentifier) @constant

[
 "(" ")"
 "[" "]"
 "{" "}"
 "," "." ".." ":" ";"
] @punctuation

[
 "@"
 "+" "-" "*" "/" "%" "^"
 "->" "->+" "->-" "->*" "->/"
 "<-" "+<-" "-<-" "*<-" "/<-"
 "=>" "<" "<=" ">=" ">"
 "=" "!="
 "not" "!" "and" "&" "or" "|"
 "in" "=~" "~="
 "is" "as"
 "::"
] @operator

(typeFunctionRef "::" @punctuation)

[
  "if" "do" "else"
  "repeat"
  "for"
  "return"
  "constant"
  "default"
  "when"
  (skipStatement)
  (breakStatement)
  ; "import"
  ; "alias"
  ; "self"
] @keyword

(forStatement "in" @keyword)

[
 (primitiveDestination)
 (primitiveContent)
] @constant.builtin

(functionDeclaration (identifier) @function)
(functionCall (expression (identifier) @function.call))

(struct ["<" ">"] @punctuation)
(structDefinition ["<" ">"] @punctuation)
(iteratorAggregate ["<" ">"] @punctuation)
(structFields (expression (identifier) @variable.member)) 
(structFields (identifier) @label) 
