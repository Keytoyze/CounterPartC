#include "ast/ast.h"
#include <iostream>

// init_declarator -> declarator
// (InitDeclarator -> Declarator)
IRValuePtr InitDeclarator1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// init_declarator -> declarator '=' initializer
// (InitDeclarator -> Declarator Eq Initializer)
IRValuePtr InitDeclarator2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

