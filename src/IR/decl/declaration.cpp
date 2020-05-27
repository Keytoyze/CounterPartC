#include "ast/ast.h"
#include <iostream>

// declaration -> declaration_specifiers ';'
// (Declaration -> DeclarationSpecifiers SimicolonSingle)
IRValuePtr Declaration1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// declaration -> declaration_specifiers init_declarator_list ';'
// (Declaration -> DeclarationSpecifiers InitDeclaratorList SimicolonSingle)
IRValuePtr Declaration2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

