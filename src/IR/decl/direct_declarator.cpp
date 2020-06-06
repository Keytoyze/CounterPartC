#include "ast/ast.h"
#include <iostream>

// direct_declarator -> IDENTIFIER
// (DirectDeclarator -> Identifier)
IRValuePtr DirectDeclarator1::GenerateIR(Context& context) {
    this->identifier = this->identifierAst1->content;
    return nullptr;
}

// direct_declarator -> '(' declarator ')'
// (DirectDeclarator -> LRound Declarator RRound)
IRValuePtr DirectDeclarator2::GenerateIR(Context& context) {
    std::cerr << "DirectDeclarator2 Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '[' constant_expression ']'
// (DirectDeclarator -> DirectDeclarator LSquare ConstantExpression RSquare)
IRValuePtr DirectDeclarator3::GenerateIR(Context& context) {
    this->directDeclaratorAst1->GenerateIR(context);
    auto directDeclarator = dynamic_cast<DirectDeclarator1*>(this->directDeclaratorAst1);
    if (directDeclarator == nullptr) {
        context.error("Array only support identifier!");
        return nullptr;
    }
    this->identifier = directDeclarator->identifier;
    this->isArray = true;
    this->isArrayHasSize = true;
    this->arraySize = this->constantExpressionAst3->GenerateIR(context);
    return nullptr;
}

// direct_declarator -> direct_declarator '[' ']'
// (DirectDeclarator -> DirectDeclarator LSquare RSquare)
IRValuePtr DirectDeclarator4::GenerateIR(Context& context) {
    this->directDeclaratorAst1->GenerateIR(context);
    auto directDeclarator = dynamic_cast<DirectDeclarator1*>(this->directDeclaratorAst1);
    if (directDeclarator == nullptr) {
        context.error("Array only support identifier!");
        return nullptr;
    }
    this->identifier = directDeclarator->identifier;
    this->isArray = true;
    this->isArrayHasSize = false;
    return nullptr;
}

// direct_declarator -> direct_declarator '(' parameter_type_list ')'
// (DirectDeclarator -> DirectDeclarator LRound ParameterTypeList RRound)
IRValuePtr DirectDeclarator5::GenerateIR(Context& context) {
    this->directDeclaratorAst1->GenerateIR(context);
    // Parse parameter list, function name is identifier
    this->parameterTypeListAst3->GenerateIR(context);
    this->identifier = this->directDeclaratorAst1->identifier;
    // TODO: vector copy is not the best solution here , deciding...
    this->parameterList = parameterTypeListAst3->parameterList;
    return nullptr;
}

// direct_declarator -> direct_declarator '(' identifier_list ')'
// (DirectDeclarator -> DirectDeclarator LRound IdentifierList RRound)
IRValuePtr DirectDeclarator6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "DirectDeclarator6 Not implemented!" << std::endl;
    return nullptr;
}

// direct_declarator -> direct_declarator '(' ')'
// (DirectDeclarator -> DirectDeclarator LRound RRound)
IRValuePtr DirectDeclarator7::GenerateIR(Context& context) {
    // Like DirectDeclarator6 but not parameters
    this->directDeclaratorAst1->GenerateIR(context);
    this->identifier = this->directDeclaratorAst1->identifier;
    return nullptr;
}

