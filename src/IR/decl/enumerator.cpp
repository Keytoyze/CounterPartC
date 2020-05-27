#include "ast/ast.h"
#include <iostream>

// enumerator -> IDENTIFIER
// (Enumerator -> Identifier)
IRValuePtr Enumerator1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Enumerator Not implemented!" << std::endl;
    return nullptr;
}

// enumerator -> IDENTIFIER '=' constant_expression
// (Enumerator -> Identifier Eq ConstantExpression)
IRValuePtr Enumerator2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Enumerator Not implemented!" << std::endl;
    return nullptr;
}

