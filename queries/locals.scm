; Scopes
(program) @local.scope

(structDefinition
  body: (_) @local.scope)

(functionDeclaration) @local.scope

(block) @local.scope

(ifStatement) @local.scope

(forStatement) @local.scope

(repeatStatement) @local.scope

; Definitions
(constantDeclaration
  name: (_) @local.definition.constant)

(varDeclaration
  name: (_) @local.definition.var)

(structDefinition
  typename: (_) @local.definition.type)

(structFieldDefinition
  name: (_) @local.definition.field)

(functionDeclaration
  name: (_) @local.definition.function)

(formalParameter
  (identifier) @local.definition.parameter)

; References
(identifier) @local.reference

(typeIdentifier) @local.reference

(constantIdentifier) @local.reference
