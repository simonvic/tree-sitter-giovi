[
  (block)
  (list)
  (map)
  (struct)
  (structDefinition)
  (formalParameters)
  (functionCallParameters)
  (switchBlock)
  (switchLabel)
] @indent.begin

[
  "(" ")"
  "[" "]"
  "{" "}"
  "<" ">"
] @indent.branch

[
 ")"
 "]"
 "}"
 ">"
] @indent.end

(commentLine) @indent.ignore

[
  (ERROR)
  (commentBlock)
] @indent.auto
