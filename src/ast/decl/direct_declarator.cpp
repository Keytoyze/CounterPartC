// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"

void DirectDeclarator1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator1" << std::endl;
    identifierAst1->Dump(depth + 1);
}

DirectDeclarator1::~DirectDeclarator1() {
    delete identifierAst1;
}

void DirectDeclarator2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator2" << std::endl;
    lRoundAst1->Dump(depth + 1);
    declaratorAst2->Dump(depth + 1);
    rRoundAst3->Dump(depth + 1);
}

DirectDeclarator2::~DirectDeclarator2() {
    delete lRoundAst1;
    delete declaratorAst2;
    delete rRoundAst3;
}

void DirectDeclarator3::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator3" << std::endl;
    directDeclaratorAst1->Dump(depth + 1);
    lSquareAst2->Dump(depth + 1);
    constantExpressionAst3->Dump(depth + 1);
    rSquareAst4->Dump(depth + 1);
}

DirectDeclarator3::~DirectDeclarator3() {
    delete directDeclaratorAst1;
    delete lSquareAst2;
    delete constantExpressionAst3;
    delete rSquareAst4;
}

void DirectDeclarator4::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator4" << std::endl;
    directDeclaratorAst1->Dump(depth + 1);
    lSquareAst2->Dump(depth + 1);
    rSquareAst3->Dump(depth + 1);
}

DirectDeclarator4::~DirectDeclarator4() {
    delete directDeclaratorAst1;
    delete lSquareAst2;
    delete rSquareAst3;
}

void DirectDeclarator5::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator5" << std::endl;
    directDeclaratorAst1->Dump(depth + 1);
    lRoundAst2->Dump(depth + 1);
    parameterTypeListAst3->Dump(depth + 1);
    rRoundAst4->Dump(depth + 1);
}

DirectDeclarator5::~DirectDeclarator5() {
    delete directDeclaratorAst1;
    delete lRoundAst2;
    delete parameterTypeListAst3;
    delete rRoundAst4;
}

void DirectDeclarator6::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator6" << std::endl;
    directDeclaratorAst1->Dump(depth + 1);
    lRoundAst2->Dump(depth + 1);
    identifierListAst3->Dump(depth + 1);
    rRoundAst4->Dump(depth + 1);
}

DirectDeclarator6::~DirectDeclarator6() {
    delete directDeclaratorAst1;
    delete lRoundAst2;
    delete identifierListAst3;
    delete rRoundAst4;
}

void DirectDeclarator7::Dump(int depth) {
    std::cout << "[" << depth << "] " << "DirectDeclarator7" << std::endl;
    directDeclaratorAst1->Dump(depth + 1);
    lRoundAst2->Dump(depth + 1);
    rRoundAst3->Dump(depth + 1);
}

DirectDeclarator7::~DirectDeclarator7() {
    delete directDeclaratorAst1;
    delete lRoundAst2;
    delete rRoundAst3;
}
