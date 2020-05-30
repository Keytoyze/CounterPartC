#include "IR/ir.h"
#include "ast/terminal/constant.h"

static const char * OpToStr[] = {
    "LOGICAL_AND", 
    "LOGICAL_OR", 
    "OP_ADD", 
    "OP_SUB", 
    "OP_MUL", 
    "OP_DIV", 
    "OP_MOD", 
    "OP_LS", 
    "OP_RS", 
    "OP_LT", 
    "OP_GT", 
    "OP_LTE", 
    "OP_GTE", 
    "OP_EQ", 
    "OP_NEQ", 
    "OP_AND", 
    "OP_OR", 
    "OP_XOR"
};

void IR::operation(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y) {
    this->codeStream << "OP " << OpToStr[(int)op];
    this->codeStream << " " << z->id << " " << x->id << " " << y->id;
    this->codeStream << std::endl;
}

void IR::label(int labelId) {
    this->codeStream << "LABEL " << labelId << std::endl;
}

void IR::functionDefinition(FunctionValuePtr function) {
    // this->codeStream << "FUN " << TypeToStr[(int)function->returnType] << " ";
    // std::cout << "functionDefinition " << std::endl;
}

void IR::valueToValue(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN " << x->id << " " << y->id << std::endl;
}

void IR::addressToValue(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN " << x->id << " &" << y->id << std::endl;
}

void IR::ptrToValue(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN " << x->id << " *" << y->id << std::endl;
}

void IR::valueToPtr(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN *" << x->id << " " << y->id << std::endl;
}

void IR::constantToValue(IRValuePtr x, Constant& constant) {
    auto intPtr = dynamic_cast<IntConstant*>(&constant);
    if (intPtr != nullptr) {
        this->codeStream << "ASSIGN_CONST_INT " << x->id << " " << intPtr->value << std::endl;
        return;
    }
    auto doublePtr = dynamic_cast<DoubleConstant*>(&constant);
    if (doublePtr != nullptr) {
        this->codeStream << "ASSIGN_CONST_DOUBLE " << x->id << " " << doublePtr->value << std::endl;
        return;
    }
    std::cerr << "Find unknown constant type in IR::constantToValue!" << std::endl;
}

void IR::jump(int labelId) {
    this->codeStream << "GOTO " << labelId << std::endl;
}

void IR::conditionJump(IRValuePtr condition, int labelId) {
    this->codeStream << "BEQ_1 " << condition->id << " " << labelId << std::endl;
}

void IR::notEqualJump(IRValuePtr x1, IRValuePtr x2, int labelId) {
    std::cout << "BNE " << x1->id << " " << x2->id << " " << labelId << std::endl;
}

void IR::returnValue(IRValuePtr x) {
    std::cout << "RETURN " << x->id << std::endl;
}

void IR::malloc(IRValuePtr x, IRValuePtr size) {
    std::cout << "MALLOC " << x->id << " " << size << std::endl;
}

void IR::argument(IRValuePtr node) {
    std::cout << "ARGUMENT " << node->id << std::endl;
}

void IR::parameter(IRValuePtr node) {
    std::cout << "PARAMETER " << node->id << std::endl;
}

std::string IR::getCode() {
    return this->codeStream.str();
}
