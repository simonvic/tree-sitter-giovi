package tree_sitter_giovi_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_giovi "github.com/tree-sitter/tree-sitter-giovi/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_giovi.Language())
	if language == nil {
		t.Errorf("Error loading Giovi grammar")
	}
}
