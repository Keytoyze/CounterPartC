#include "IR/ir.h"
#include "ast/terminal/constant.h"

void IR::operation(IRValuePtr z, IRValuePtr x, IRValuePtr y) {
    // TODO
}

void IR::label(int labelId) {
    // TODO
}

void IR::functionDefinition(FunctionValuePtr function) {
    // TODO
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
}

void IR::conditionJump(IRValuePtr condition, int labelId) {
    // TODO
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

