#include "ast/ast.h"
#include <iostream>

// external_declaration -> function_definition
// (ExternalDeclaration -> FunctionDefinition)
IRValuePtr ExternalDeclaration1::GenerateIR(Context& context) {
    // now parsing function
    context.parsingContext = PARSING_FUNCTION;
    this->functionDefinitionAst1->GenerateIR(context);
//    auto* fun1 = dynamic_cast<FunctionDefinition1*>(this->functionDefinitionAst1);
    return nullptr;
}

// external_declaration -> declaration
// (ExternalDeclaration -> Declaration)
IRValuePtr ExternalDeclaration2::GenerateIR(Context& context) {
    this->declarationAst1->declarationType = DeclarationType::VARIABLE;
    this->declarationAst1->GenerateIR(context);
    return nullptr;
}

