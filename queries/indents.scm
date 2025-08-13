[
  (importStatement)
  (block)
  (list)
  (map)
  (tuple)
  (record)
  (structDefinition)
  (formalParameters)
  (actualParameters)
  (switchBlock)
  (switchLabel)
] @indent.begin

((importStatement)
  "]" @import.branch @import.end)

(tuple
  ">" @indent.branch @indent.end)

(record
  ">" @indent.branch @indent.end)

(structBodyDefinition
  ">" @indent.branch @indent.end)

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @indent.branch

[
  ")"
  "]"
  "}"
] @indent.end

(commentLine) @indent.ignore

[
  (ERROR)
  (commentBlock)
  (docBlock)
] @indent.auto
