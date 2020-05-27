#include "ast/ast.h"
#include <iostream>

// statement_list -> statement
// (StatementList -> Statement)
IRValuePtr StatementList1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// statement_list -> statement_list statement
// (StatementList -> StatementList Statement)
IRValuePtr StatementList2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

