#include "ast/ast.h"
#include <iostream>

// external_declaration -> function_definition
// (ExternalDeclaration -> FunctionDefinition)
IRValuePtr ExternalDeclaration1::GenerateIR(Context& context) {
    this->functionDefinitionAst1->GenerateIR(context);
//    auto* fun1 = dynamic_cast<FunctionDefinition1*>(this->functionDefinitionAst1);
    // std::cerr << "ExternalDeclaration Not implemented!" << std::endl;
    return nullptr;
}

// external_declaration -> declaration
// (ExternalDeclaration -> Declaration)
IRValuePtr ExternalDeclaration2::GenerateIR(Context& context) {
    this->declarationAst1->GenerateIR(context);
    // std::cerr << "ExternalDeclaration Not implemented!" << std::endl;
    return nullptr;
}

