#include "ast/ast.h"
#include <iostream>

// declarator -> pointer direct_declarator
// (Declarator -> Pointer DirectDeclarator)
IRValuePtr Declarator1::GenerateIR(Context &context) {
    // TODO: implement me!
    this->directDeclaratorAst2->GenerateIR(context);
    this->directDeclarator = this->directDeclaratorAst2;
    std::cerr << "Declarator Not implemented!" << std::endl;
    return nullptr;
}

// declarator -> direct_declarator
// (Declarator -> DirectDeclarator)
IRValuePtr Declarator2::GenerateIR(Context &context) {
    // TODO: implement me!
    // used by : function def, dec
    this->directDeclarator = this->directDeclaratorAst1;
    this->directDeclaratorAst1->GenerateIR(context);
    auto& parameterList = directDeclaratorAst1->parameterList;
    for (size_t i = 0; i < parameterList.size(); i++) {
        std::cout << "param" << i << " " << parameterList[i].first << " " << parameterList[i].second << std::endl;
    }
    return nullptr;
}

