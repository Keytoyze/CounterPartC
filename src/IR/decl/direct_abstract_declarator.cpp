#include "ast/ast.h"
#include <iostream>

// direct_abstract_declarator -> '(' abstract_declarator ')'
// (DirectAbstractDeclarator -> LRound AbstractDeclarator RRound)
IRValuePtr DirectAbstractDeclarator1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> '[' ']'
// (DirectAbstractDeclarator -> LSquare RSquare)
IRValuePtr DirectAbstractDeclarator2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> '[' constant_expression ']'
// (DirectAbstractDeclarator -> LSquare ConstantExpression RSquare)
IRValuePtr DirectAbstractDeclarator3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> direct_abstract_declarator '[' ']'
// (DirectAbstractDeclarator -> DirectAbstractDeclarator LSquare RSquare)
IRValuePtr DirectAbstractDeclarator4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> direct_abstract_declarator '[' constant_expression ']'
// (DirectAbstractDeclarator -> DirectAbstractDeclarator LSquare ConstantExpression RSquare)
IRValuePtr DirectAbstractDeclarator5::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> '(' ')'
// (DirectAbstractDeclarator -> LRound RRound)
IRValuePtr DirectAbstractDeclarator6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> '(' parameter_type_list ')'
// (DirectAbstractDeclarator -> LRound ParameterTypeList RRound)
IRValuePtr DirectAbstractDeclarator7::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> direct_abstract_declarator '(' ')'
// (DirectAbstractDeclarator -> DirectAbstractDeclarator LRound RRound)
IRValuePtr DirectAbstractDeclarator8::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_abstract_declarator -> direct_abstract_declarator '(' parameter_type_list ')'
// (DirectAbstractDeclarator -> DirectAbstractDeclarator LRound ParameterTypeList RRound)
IRValuePtr DirectAbstractDeclarator9::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectAbstractDeclarator Not implemented!" << std::endl;
    return nullptr;
}

