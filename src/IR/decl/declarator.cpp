#include "ast/ast.h"
#include <iostream>

// declarator -> pointer direct_declarator
// (Declarator -> Pointer DirectDeclarator)
IRValuePtr Declarator1::GenerateIR(Context &context) {
    // TODO: implement me!
    this->directDeclaratorAst2->GenerateIR(context);
    std::cerr << "Declarator Not implemented!" << std::endl;
    return nullptr;
}

// declarator -> direct_declarator
// (Declarator -> DirectDeclarator)
IRValuePtr Declarator2::GenerateIR(Context &context) {
    // TODO: implement me!
    // used by : function def, dec
    this->directDeclaratorAst1->GenerateIR(context);
    this->identifier = directDeclaratorAst1->identifier;
    this->parameterList = directDeclaratorAst1->parameterList;
    for (size_t i = 0; i < parameterList.size(); i++) {
        std::cout << "param" << i << " " << parameterList[i].first << " " << parameterList[i].second << std::endl;
    }
//    std::cerr << "Declarator Not implemented!" << std::endl;
    return nullptr;
}

