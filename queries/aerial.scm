; Modules
(declaration_module
  name: (_) @name
  (#set! "kind" "Module")) @symbol

(import_entry
  alias: (_) @name
  (#set! "kind" "Namespace")) @symbol

(statement_alias
  alias: (_) @name
  (#set! "kind" "Namespace")) @symbol

; Structs
(declaration_struct
  typename: (_) @name
  (#set! "kind" "Class")) @symbol

; fields
(struct_field
  name: (_) @name
  (#set! "kind" "Field")) @symbol

; methods
(declaration_function
  name: (_) @name
  (#set! "kind" "Function")) @symbol

; variables
(declaration_variable
  name: (_) @name
  (#set! "kind" "Variable")) @symbol

; constants
(declaration_constant
  name: (_) @name
  (#set! "kind" "Constant")) @symbol
