#include "ast/ast.h"
#include <iostream>

// init_declarator_list -> init_declarator
// (InitDeclaratorList -> InitDeclarator)
IRValuePtr InitDeclaratorList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// init_declarator_list -> init_declarator_list ',' init_declarator
// (InitDeclaratorList -> InitDeclaratorList Comma InitDeclarator)
IRValuePtr InitDeclaratorList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

