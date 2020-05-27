#include "ast/ast.h"
#include <iostream>

// compound_statement -> '{' '}'
// (CompoundStatement -> LCurly RCurly)
IRValuePtr CompoundStatement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// compound_statement -> '{' statement_list '}'
// (CompoundStatement -> LCurly StatementList RCurly)
IRValuePtr CompoundStatement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// compound_statement -> '{' declaration_list '}'
// (CompoundStatement -> LCurly DeclarationList RCurly)
IRValuePtr CompoundStatement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// compound_statement -> '{' declaration_list statement_list '}'
// (CompoundStatement -> LCurly DeclarationList StatementList RCurly)
IRValuePtr CompoundStatement4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

