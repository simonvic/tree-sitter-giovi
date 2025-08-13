; Modules
(moduleDeclaration
  name: (_) @name
  (#set! "kind" "Module")) @symbol

(importEntry
  alias: (_) @name
  (#set! "kind" "Namespace")) @symbol

(aliasStatement
  alias: (_) @name
  (#set! "kind" "Namespace")) @symbol

; Structs
(structDefinition
  typename: (_) @name
  (#set! "kind" "Class")) @symbol

; fields
(structFieldDefinition
  name: (_) @name
  (#set! "kind" "Field")) @symbol

; methods
(functionDeclaration
  name: (_) @name
  (#set! "kind" "Function")) @symbol

; variables
(varDeclaration
  name: (_) @name
  (#set! "kind" "Variable")) @symbol

; constants
(constantDeclaration
  name: (_) @name
  (#set! "kind" "Constant")) @symbol
