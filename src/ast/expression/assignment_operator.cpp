// Generated by buildSrc/GenerateAST.py
#include <iostream>
#include "ast/expression/assignment_operator.h"

void AssignmentOperator1::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator1" << std::endl;
    eqAst1->Dump(depth + 1);
}

AssignmentOperator1::~AssignmentOperator1() {
    delete eqAst1;
}

void AssignmentOperator2::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator2" << std::endl;
    mulAssignAst1->Dump(depth + 1);
}

AssignmentOperator2::~AssignmentOperator2() {
    delete mulAssignAst1;
}

void AssignmentOperator3::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator3" << std::endl;
    divAssignAst1->Dump(depth + 1);
}

AssignmentOperator3::~AssignmentOperator3() {
    delete divAssignAst1;
}

void AssignmentOperator4::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator4" << std::endl;
    modAssignAst1->Dump(depth + 1);
}

AssignmentOperator4::~AssignmentOperator4() {
    delete modAssignAst1;
}

void AssignmentOperator5::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator5" << std::endl;
    addAssignAst1->Dump(depth + 1);
}

AssignmentOperator5::~AssignmentOperator5() {
    delete addAssignAst1;
}

void AssignmentOperator6::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator6" << std::endl;
    subAssignAst1->Dump(depth + 1);
}

AssignmentOperator6::~AssignmentOperator6() {
    delete subAssignAst1;
}

void AssignmentOperator7::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator7" << std::endl;
    leftAssignAst1->Dump(depth + 1);
}

AssignmentOperator7::~AssignmentOperator7() {
    delete leftAssignAst1;
}

void AssignmentOperator8::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator8" << std::endl;
    rightAssignAst1->Dump(depth + 1);
}

AssignmentOperator8::~AssignmentOperator8() {
    delete rightAssignAst1;
}

void AssignmentOperator9::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator9" << std::endl;
    andAssignAst1->Dump(depth + 1);
}

AssignmentOperator9::~AssignmentOperator9() {
    delete andAssignAst1;
}

void AssignmentOperator10::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator10" << std::endl;
    xorAssignAst1->Dump(depth + 1);
}

AssignmentOperator10::~AssignmentOperator10() {
    delete xorAssignAst1;
}

void AssignmentOperator11::Dump(int depth) {
    std::cout << "[" << depth << "] " << "AssignmentOperator11" << std::endl;
    orAssignAst1->Dump(depth + 1);
}

AssignmentOperator11::~AssignmentOperator11() {
    delete orAssignAst1;
}
