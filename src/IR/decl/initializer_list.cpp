#include "ast/ast.h"
#include <iostream>

// initializer_list -> initializer
// (InitializerList -> Initializer)
IRValuePtr InitializerList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// initializer_list -> initializer_list ',' initializer
// (InitializerList -> InitializerList Comma Initializer)
IRValuePtr InitializerList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

