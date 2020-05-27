#include "ast/ast.h"
#include <iostream>

// translation_unit -> external_declaration
// (TranslationUnit -> ExternalDeclaration)
IRValuePtr TranslationUnit1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TranslationUnit Not implemented!" << std::endl;
    return nullptr;
}

// translation_unit -> translation_unit external_declaration
// (TranslationUnit -> TranslationUnit ExternalDeclaration)
IRValuePtr TranslationUnit2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "TranslationUnit Not implemented!" << std::endl;
    return nullptr;
}

