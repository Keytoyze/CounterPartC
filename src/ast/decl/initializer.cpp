// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"

void Initializer1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "Initializer1" << std::endl;
    assignmentExpressionAst1->Dump(depth + 1);
}

Initializer1::~Initializer1() {
    delete assignmentExpressionAst1;
}

void Initializer2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "Initializer2" << std::endl;
    lCurlyAst1->Dump(depth + 1);
    initializerListAst2->Dump(depth + 1);
    rCurlyAst3->Dump(depth + 1);
}

Initializer2::~Initializer2() {
    delete lCurlyAst1;
    delete initializerListAst2;
    delete rCurlyAst3;
}

void Initializer3::Dump(int depth) {
    std::cout << "[" << depth << "] " << "Initializer3" << std::endl;
    lCurlyAst1->Dump(depth + 1);
    initializerListAst2->Dump(depth + 1);
    commaAst3->Dump(depth + 1);
    rCurlyAst4->Dump(depth + 1);
}

Initializer3::~Initializer3() {
    delete lCurlyAst1;
    delete initializerListAst2;
    delete commaAst3;
    delete rCurlyAst4;
}
