// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/decl/init_declarator.h"

void InitDeclarator1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "InitDeclarator1" << std::endl;
    declaratorAst1->Dump(depth + 1);
}

InitDeclarator1::~InitDeclarator1() {
    delete declaratorAst1;
}

void InitDeclarator2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "InitDeclarator2" << std::endl;
    declaratorAst1->Dump(depth + 1);
    eqAst2->Dump(depth + 1);
    initializerAst3->Dump(depth + 1);
}

InitDeclarator2::~InitDeclarator2() {
    delete declaratorAst1;
    delete eqAst2;
    delete initializerAst3;
}
