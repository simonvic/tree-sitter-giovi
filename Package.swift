// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterGiovi",
    products: [
        .library(name: "TreeSitterGiovi", targets: ["TreeSitterGiovi"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGiovi",
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
            name: "TreeSitterGioviTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGiovi",
            ],
            path: "bindings/swift/TreeSitterGioviTests"
        )
    ],
    cLanguageStandard: .c11
)
