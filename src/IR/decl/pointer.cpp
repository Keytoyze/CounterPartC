#include "ast/ast.h"
#include <iostream>

// pointer -> '*'
// (Pointer -> Mul)
IRValuePtr Pointer1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// pointer -> '*' type_qualifier_list
// (Pointer -> Mul TypeQualifierList)
IRValuePtr Pointer2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// pointer -> '*' pointer
// (Pointer -> Mul Pointer)
IRValuePtr Pointer3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// pointer -> '*' type_qualifier_list pointer
// (Pointer -> Mul TypeQualifierList Pointer)
IRValuePtr Pointer4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

