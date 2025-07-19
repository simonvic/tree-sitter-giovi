(functionDeclaration
  (identifier) @name) @definition.function

(structDefinition
  typename: (_) @name) @definition.class

(invocation) @reference.call

(type
  (identifier) @reference.class)
