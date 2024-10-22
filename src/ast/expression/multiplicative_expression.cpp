// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void MultiplicativeExpression1::Dump(int depth) {
    TreeRender::push("MultiplicativeExpression");
    castExpressionAst1->Dump(depth + 1);
    TreeRender::pop();
}

MultiplicativeExpression1::~MultiplicativeExpression1() {
    delete castExpressionAst1;
}

void MultiplicativeExpression2::Dump(int depth) {
    TreeRender::push("MultiplicativeExpression");
    multiplicativeExpressionAst1->Dump(depth + 1);
    mulAst2->Dump(depth + 1);
    castExpressionAst3->Dump(depth + 1);
    TreeRender::pop();
}

MultiplicativeExpression2::~MultiplicativeExpression2() {
    delete multiplicativeExpressionAst1;
    delete mulAst2;
    delete castExpressionAst3;
}

void MultiplicativeExpression3::Dump(int depth) {
    TreeRender::push("MultiplicativeExpression");
    multiplicativeExpressionAst1->Dump(depth + 1);
    divAst2->Dump(depth + 1);
    castExpressionAst3->Dump(depth + 1);
    TreeRender::pop();
}

MultiplicativeExpression3::~MultiplicativeExpression3() {
    delete multiplicativeExpressionAst1;
    delete divAst2;
    delete castExpressionAst3;
}

void MultiplicativeExpression4::Dump(int depth) {
    TreeRender::push("MultiplicativeExpression");
    multiplicativeExpressionAst1->Dump(depth + 1);
    modAst2->Dump(depth + 1);
    castExpressionAst3->Dump(depth + 1);
    TreeRender::pop();
}

MultiplicativeExpression4::~MultiplicativeExpression4() {
    delete multiplicativeExpressionAst1;
    delete modAst2;
    delete castExpressionAst3;
}
