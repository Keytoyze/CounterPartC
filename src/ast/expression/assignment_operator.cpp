// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/ast.h"
#include "ast/render.h"

void AssignmentOperator1::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    eqAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator1::~AssignmentOperator1() {
    delete eqAst1;
}

void AssignmentOperator2::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    mulAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator2::~AssignmentOperator2() {
    delete mulAssignAst1;
}

void AssignmentOperator3::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    divAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator3::~AssignmentOperator3() {
    delete divAssignAst1;
}

void AssignmentOperator4::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    modAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator4::~AssignmentOperator4() {
    delete modAssignAst1;
}

void AssignmentOperator5::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    addAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator5::~AssignmentOperator5() {
    delete addAssignAst1;
}

void AssignmentOperator6::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    subAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator6::~AssignmentOperator6() {
    delete subAssignAst1;
}

void AssignmentOperator7::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    leftAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator7::~AssignmentOperator7() {
    delete leftAssignAst1;
}

void AssignmentOperator8::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    rightAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator8::~AssignmentOperator8() {
    delete rightAssignAst1;
}

void AssignmentOperator9::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    andAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator9::~AssignmentOperator9() {
    delete andAssignAst1;
}

void AssignmentOperator10::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    xorAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator10::~AssignmentOperator10() {
    delete xorAssignAst1;
}

void AssignmentOperator11::Dump(int depth) {
    TreeRender::push("AssignmentOperator");
    orAssignAst1->Dump(depth + 1);
    TreeRender::pop();
}

AssignmentOperator11::~AssignmentOperator11() {
    delete orAssignAst1;
}
