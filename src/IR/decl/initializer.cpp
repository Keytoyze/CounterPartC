#include "ast/ast.h"
#include <iostream>

// initializer -> assignment_expression
// (Initializer -> AssignmentExpression)
IRValuePtr Initializer1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// initializer -> '{' initializer_list '}'
// (Initializer -> LCurly InitializerList RCurly)
IRValuePtr Initializer2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// initializer -> '{' initializer_list ',' '}'
// (Initializer -> LCurly InitializerList Comma RCurly)
IRValuePtr Initializer3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

