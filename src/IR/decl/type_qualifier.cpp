#include "ast/ast.h"
#include <iostream>

// type_qualifier -> CONST
// (TypeQualifier -> Const)
IRValuePtr TypeQualifier1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// type_qualifier -> VOLATILE
// (TypeQualifier -> Volatile)
IRValuePtr TypeQualifier2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

