#include "ast/ast.h"
#include <iostream>

// direct_declarator -> IDENTIFIER
// (DirectDeclarator -> Identifier)
IRValuePtr DirectDeclarator1::GenerateIR(Context& context) {
    // TODO: implement me!
    this->identifier = this->identifierAst1->content;
//    auto identifierName = this->identifierAst1->content;
//    auto ptr = context.newVar(TYPE_IDENTIFIER, false);
//    ptr->content = identifierName;
    std::cout << "DirectDeclarator identifier: " << identifier << std::endl;
    return nullptr;
}

// direct_declarator -> '(' declarator ')'
// (DirectDeclarator -> LRound Declarator RRound)
IRValuePtr DirectDeclarator2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectDeclarator2 Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '[' constant_expression ']'
// (DirectDeclarator -> DirectDeclarator LSquare ConstantExpression RSquare)
IRValuePtr DirectDeclarator3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectDeclarator3 Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '[' ']'
// (DirectDeclarator -> DirectDeclarator LSquare RSquare)
IRValuePtr DirectDeclarator4::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '(' parameter_type_list ')'
// (DirectDeclarator -> DirectDeclarator LRound ParameterTypeList RRound)
IRValuePtr DirectDeclarator5::GenerateIR(Context& context) {
    // TODO: implement me!
    this->directDeclaratorAst1->GenerateIR(context);
    // Parse parameter list, function name is identifier
    this->parameterTypeListAst3->GenerateIR(context);
    this->identifier = this->directDeclaratorAst1->identifier;
    // TODO: vector copy is not the best solution here , deciding...
    this->parameterList = parameterTypeListAst3->parameterList;
    std::cerr << "DirectDeclarator5 Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '(' identifier_list ')'
// (DirectDeclarator -> DirectDeclarator LRound IdentifierList RRound)
IRValuePtr DirectDeclarator6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectDeclarator Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '(' ')'
// (DirectDeclarator -> DirectDeclarator LRound RRound)
IRValuePtr DirectDeclarator7::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectDeclarator Not implemented!" << std::endl;
    return nullptr;
}

