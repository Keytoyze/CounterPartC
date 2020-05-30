#include "ast/ast.h"
#include <iostream>

// translation_unit -> external_declaration
// (TranslationUnit -> ExternalDeclaration)
IRValuePtr TranslationUnit1::GenerateIR(Context& context) {
    this->externalDeclarationAst1->GenerateIR(context);
    return nullptr;
}

// translation_unit -> translation_unit external_declaration
// (TranslationUnit -> TranslationUnit ExternalDeclaration)
IRValuePtr TranslationUnit2::GenerateIR(Context& context) {
    this->translationUnitAst1->GenerateIR(context);
    this->externalDeclarationAst2->GenerateIR(context);
    return nullptr;
}

