[
  (statement_import)
  (block)
  (list)
  (map)
  (tuple)
  (record)
  (declaration_struct)
  (formal_parameters)
  (actual_parameters)
  (switch_block)
  (switch_label)
] @indent.begin

((statement_import)
  "]" @import.branch @import.end)

(tuple
  ">" @indent.branch @indent.end)

(record
  ">" @indent.branch @indent.end)

(struct_body
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

(comment_line) @indent.ignore

[
  (ERROR)
  (comment_block)
  (doc_block)
] @indent.auto
