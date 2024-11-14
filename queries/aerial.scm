; Structs
(structDefinition
  typename: (typeIdentifier) @name
  (#set! "kind" "Class")
  ) @symbol

; fields
(structFieldDefinition
  name: (identifier) @name
  (#set! "kind" "Field")
  ) @symbol

; methods
(functionDeclaration
  name: (identifier) @name
  (#set! "kind" "Function")
  ) @symbol

; variables
(varDeclaration
  name: (identifier) @name
  (#set! "kind" "Variable")
  ) @symbol

; constants
(constantDeclaration
  name: (constantIdentifier) @name
  (#set! "kind" "Constant")
  ) @symbol
