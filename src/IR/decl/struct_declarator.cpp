#include "ast/ast.h"
#include <iostream>

// struct_declarator -> declarator
// (StructDeclarator -> Declarator)
IRValuePtr StructDeclarator1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// struct_declarator -> ':' constant_expression
// (StructDeclarator -> Colon ConstantExpression)
IRValuePtr StructDeclarator2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// struct_declarator -> declarator ':' constant_expression
// (StructDeclarator -> Declarator Colon ConstantExpression)
IRValuePtr StructDeclarator3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "StructDeclarator Not implemented!" << std::endl;
    return nullptr;
}

