#include "ast/ast.h"
#include <iostream>

// init_declarator_list -> init_declarator
// (InitDeclaratorList -> InitDeclarator)
IRValuePtr InitDeclaratorList1::GenerateIR(Context& context) {
    this->initDeclaratorAst1->GenerateIR(context);
    this->list = std::make_shared<std::vector<InitDeclarator*>>();
    this->list->push_back(this->initDeclaratorAst1);
    return nullptr;
}

// init_declarator_list -> init_declarator_list ',' init_declarator
// (InitDeclaratorList -> InitDeclaratorList Comma InitDeclarator)
IRValuePtr InitDeclaratorList2::GenerateIR(Context& context) {
    this->initDeclaratorListAst1->GenerateIR(context);
    this->list = this->initDeclaratorListAst1->list;
    this->initDeclaratorAst3->GenerateIR(context);
    this->list->push_back(this->initDeclaratorAst3);
    return nullptr;
}

