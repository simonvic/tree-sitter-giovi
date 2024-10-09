// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterYourLanguageName",
    products: [
        .library(name: "TreeSitterYourLanguageName", targets: ["TreeSitterYourLanguageName"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterYourLanguageName",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterYourLanguageNameTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterYourLanguageName",
            ],
            path: "bindings/swift/TreeSitterYourLanguageNameTests"
        )
    ],
    cLanguageStandard: .c11
)
