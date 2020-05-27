#include "ast/ast.h"
#include <iostream>

// jump_statement -> GOTO IDENTIFIER ';'
// (JumpStatement -> Goto Identifier SimicolonSingle)
IRValuePtr JumpStatement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "JumpStatement Not implemented!" << std::endl;
    return nullptr;
}

// jump_statement -> CONTINUE ';'
// (JumpStatement -> Continue SimicolonSingle)
IRValuePtr JumpStatement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "JumpStatement Not implemented!" << std::endl;
    return nullptr;
}

// jump_statement -> BREAK ';'
// (JumpStatement -> Break SimicolonSingle)
IRValuePtr JumpStatement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "JumpStatement Not implemented!" << std::endl;
    return nullptr;
}

// jump_statement -> RETURN ';'
// (JumpStatement -> Return SimicolonSingle)
IRValuePtr JumpStatement4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "JumpStatement Not implemented!" << std::endl;
    return nullptr;
}

// jump_statement -> RETURN expression ';'
// (JumpStatement -> Return Expression SimicolonSingle)
IRValuePtr JumpStatement5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "JumpStatement Not implemented!" << std::endl;
    return nullptr;
}

