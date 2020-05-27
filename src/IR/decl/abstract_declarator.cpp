#include "ast/ast.h"
#include <iostream>

// abstract_declarator -> pointer
// (AbstractDeclarator -> Pointer)
IRValuePtr AbstractDeclarator1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// abstract_declarator -> direct_abstract_declarator
// (AbstractDeclarator -> DirectAbstractDeclarator)
IRValuePtr AbstractDeclarator2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// abstract_declarator -> pointer direct_abstract_declarator
// (AbstractDeclarator -> Pointer DirectAbstractDeclarator)
IRValuePtr AbstractDeclarator3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "AbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

