#include "ast/ast.h"
#include <iostream>

// init_declarator -> declarator
// (InitDeclarator -> Declarator)
IRValuePtr InitDeclarator1::GenerateIR(Context& context) {
    this->declaratorAst1->GenerateIR(context);
    this->directDeclarator = this->declaratorAst1->directDeclarator;
    this->initializerValue = nullptr;
    return nullptr;
}

// init_declarator -> declarator '=' initializer
// (InitDeclarator -> Declarator Eq Initializer)
IRValuePtr InitDeclarator2::GenerateIR(Context& context) {
    this->declaratorAst1->GenerateIR(context);
    this->directDeclarator = this->declaratorAst1->directDeclarator;
    this->initializerAst3->GenerateIR(context);
    this->initializerValue = this->initializerAst3->initializerVector;
    return nullptr;
}

