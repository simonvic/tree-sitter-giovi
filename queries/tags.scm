(declaration_function
  (identifier) @name) @definition.function

(declaration_struct
  typename: (_) @name) @definition.class

(invocation) @reference.call

(type_qualified
  (identifier) @reference.class)
