#include "ast/ast.h"
#include <iostream>

// declaration -> declaration_specifiers ';'
// (Declaration -> DeclarationSpecifiers SimicolonSingle)
IRValuePtr Declaration1::GenerateIR(Context& context) {
    // TODO: implement me!
    this->declarationSpecifiersAst1->GenerateIR(context);
    std::cerr << "Declaration1 Not implemented!" << std::endl;
    return nullptr;
}

// declaration -> declaration_specifiers init_declarator_list ';'
// (Declaration -> DeclarationSpecifiers InitDeclaratorList SimicolonSingle)
IRValuePtr Declaration2::GenerateIR(Context& context) {
    // function declaration
    this->declarationSpecifiersAst1->GenerateIR(context);
    this->initDeclaratorListAst2->GenerateIR(context);
    this->specifierType = declarationSpecifiersAst1->specifierType;
    // distinguish [function | variable] declaration


    std::cerr << "Declaration2 Not implemented!" << std::endl;
    return nullptr;
}

