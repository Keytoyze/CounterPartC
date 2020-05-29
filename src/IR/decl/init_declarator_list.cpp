#include "ast/ast.h"
#include <iostream>

// init_declarator_list -> init_declarator
// (InitDeclaratorList -> InitDeclarator)
IRValuePtr InitDeclaratorList1::GenerateIR(Context& context) {
    // TODO: implement me!
    this->initDeclaratorAst1->GenerateIR(context);
    std::cerr << "InitDeclaratorList Not implemented!" << std::endl;
    return nullptr;
}

// init_declarator_list -> init_declarator_list ',' init_declarator
// (InitDeclaratorList -> InitDeclaratorList Comma InitDeclarator)
IRValuePtr InitDeclaratorList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "InitDeclaratorList Not implemented!" << std::endl;
    return nullptr;
}

