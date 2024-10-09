import XCTest
import SwiftTreeSitter
import TreeSitterGiovi

final class TreeSitterGioviTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_giovi())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Giovi grammar")
    }
}
