; Scopes
(program) @local.scope

(declaration_struct
  body: (_) @local.scope)

(declaration_function) @local.scope

(block) @local.scope

(statement_if) @local.scope

(statement_for) @local.scope

(statement_repeat) @local.scope

; Definitions
(declaration_constant
  name: (_) @local.definition.constant)

(declaration_variable
  name: (_) @local.definition.var)

(declaration_struct
  typename: (_) @local.definition.type)

(declaration_field
  name: (_) @local.definition.field)

(declaration_function
  name: (_) @local.definition.function)

(formal_parameter
  (identifier) @local.definition.parameter)

; References
(identifier) @local.reference
