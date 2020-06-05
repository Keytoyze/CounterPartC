// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void PrimaryExpression1::Dump(int depth) {
    TreeRender::push("PrimaryExpression");
    identifierAst1->Dump(depth + 1);
    TreeRender::pop();
}

PrimaryExpression1::~PrimaryExpression1() {
    delete identifierAst1;
}

void PrimaryExpression2::Dump(int depth) {
    TreeRender::push("PrimaryExpression");
    constantAst1->Dump(depth + 1);
    TreeRender::pop();
}

PrimaryExpression2::~PrimaryExpression2() {
    delete constantAst1;
}

void PrimaryExpression3::Dump(int depth) {
    TreeRender::push("PrimaryExpression");
    stringLiteralAst1->Dump(depth + 1);
    TreeRender::pop();
}

PrimaryExpression3::~PrimaryExpression3() {
    delete stringLiteralAst1;
}

void PrimaryExpression4::Dump(int depth) {
    TreeRender::push("PrimaryExpression");
    lRoundAst1->Dump(depth + 1);
    expressionAst2->Dump(depth + 1);
    rRoundAst3->Dump(depth + 1);
    TreeRender::pop();
}

PrimaryExpression4::~PrimaryExpression4() {
    delete lRoundAst1;
    delete expressionAst2;
    delete rRoundAst3;
}
