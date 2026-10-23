# tree-sitter-giovi

Giovi grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Getting started

### neovim

Neovim doesn't recognize the Giovi filetype (yet); add the following somewhere
in your `init.lua`

```lua
vim.filetype.add({
	extension = {
		giovi = "giovi",
	},
})

```

To install the parser, I recommend using the
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) plugin.
Using vanilla neovim plugin package manager:

```lua
vim.pack.add({
	{ src = "https://github.com/nvim-treesitter/nvim-treesitter" },
})
```

nvim-treesitter doesn't know (yet) about this parser; add the following

```lua
vim.api.nvim_create_autocmd("User", {
	pattern = "TSUpdate",
	callback = function()
		local parsers = require("nvim-treesitter.parsers")
		parsers.textblock = {
			install_info = {
				url = "https://github.com/simonvic/tree-sitter-textblock",
				queries = "queries",
				generate = true,
			},
		}
		parsers.giovi = {
			install_info = {
				url = "https://github.com/simonvic/tree-sitter-giovi",
				-- if `url` isn't reachable, use `path` instead
				-- path = "path/to/tree-sitter-giovi",
				queries = "queries",
				generate = true,
			},
		}
	end
})
```

NOTE: this parser optionally relies on the injection of
[tree-sitter-textblock](https://github.com/simonvic/tree-sitter-textblock) for
parsing multiline strings; you may want to install that too.

Finally, to install the parser, you can either to it manually with `:TSInstall
textblock giovi` or with

```lua
require("nvim-treesitter").install({
    "textblock",
    "giovi",
})
```

### VSCode

> [!NOTE]
> This has not been tested. Use at your own discretion

You can use `tree-sitter-vscode` plugin.
You'll likely need `tree-sitter-giovi.wasm`, which you can find in the
[releases](https://github.com/simonvic/tree-sitter-giovi/releases)
or you can clone this repository and build it with tree-sitter cli

```bash
tree-sitter build --wasm
```
