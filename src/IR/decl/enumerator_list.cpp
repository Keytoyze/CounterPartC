#include "ast/ast.h"
#include <iostream>

// enumerator_list -> enumerator
// (EnumeratorList -> Enumerator)
IRValuePtr EnumeratorList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// enumerator_list -> enumerator_list ',' enumerator
// (EnumeratorList -> EnumeratorList Comma Enumerator)
IRValuePtr EnumeratorList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

