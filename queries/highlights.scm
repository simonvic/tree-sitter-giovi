[
 (commentLine)
 (commentBlock)
] @comment

[
 (docLine)
 (docBlock)
] @comment.documentation


(literalBool) @boolean
(literalNatural) @number
(literalInteger) @number
(literalReal) @number.float
(literalText) @string

(literalDefault) @variable.builtin

(identifier) @variable
(type) @type
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
 "=>" "<" "<=" "=>" ">"
 "=" "!="
 "not" "!" "and" "&" "or" "|"
 "in" "=~" "~="
  "is" "as"
 ; "::"
] @operator

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
(functionCall (expression (identifier) @function.call))
