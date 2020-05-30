#include "IR/ir.h"
#include "ast/terminal/constant.h"

void IR::operation(IRValuePtr z,Oper op, IRValuePtr x, IRValuePtr y) {
    // TODO
    std::cout << "operation" << std::endl;
}

void IR::label(int labelId) {
    // TODO
    std::cout << "label " << labelId << std::endl;
}

void IR::functionDefinition(FunctionValuePtr function) {
    // TODO
    // since the stack block is contained in function
    // information to generate the complete code is presented
    std::cout << "functionDefinition " << std::endl;
}

void IR::valueToValue(IRValuePtr x, IRValuePtr y) {
    // TODO
}

void IR::addressToValue(IRValuePtr x, IRValuePtr y) {
    // TODO
}

void IR::ptrToValue(IRValuePtr x, IRValuePtr y) {
    // TODO
}

void IR::valueToPtr(IRValuePtr x, IRValuePtr y) {
    // TODO
}

void IR::constantToValue(IRValuePtr x, Constant constant) {
    // TODO
}

void IR::jump(int labelId) {
    // TODO
    std::cout << "goto " << labelId << std::endl;
}

void IR::conditionJump(IRValuePtr condition, int labelId) {
    // TODO
    std::cout << "if goto " << labelId << std::endl;
}

void IR::notEqualJump(IRValuePtr x1, IRValuePtr x2, int labelId) {
    // TODO
    std::cout << "if neq goto " << labelId << std::endl;
}

void IR::returnValue(IRValuePtr x) {
    // TODO
}

void IR::malloc(IRValuePtr x, IRValuePtr size) {
    // TODO
}

void IR::argument(IRValuePtr node) {
    // TODO
}

void IR::parameter(IRValuePtr node) {
    // TODO
}

