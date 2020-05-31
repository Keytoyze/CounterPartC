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
    this->codeStream << " var" << z->id << " var" << x->id << " var" << y->id;
    this->codeStream << std::endl;
}

void IR::label(int labelId) {
    this->codeStream << "LABEL " << labelId << std::endl;
}

void IR::functionDefinition(std::string functionName, FunctionValuePtr function) {
     this->codeStream << "FUNCTION " << functionName << " "<< TypeToStr(function->returnType) << ":" << std::endl;
    // this->codeStream << "functionDefinition " << std::endl;
}

void IR::valueToValue(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN var" << x->id << " var" << y->id << std::endl;
}

void IR::addressToValue(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN var" << x->id << " &var" << y->id << std::endl;
}

void IR::ptrToValue(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN var" << x->id << " *var" << y->id << std::endl;
}

void IR::valueToPtr(IRValuePtr x, IRValuePtr y) {
    this->codeStream << "ASSIGN *var" << x->id << " var" << y->id << std::endl;
}

void IR::constantToValue(IRValuePtr x, Constant& constant) {
    auto intPtr = dynamic_cast<IntConstant*>(&constant);
    if (intPtr != nullptr) {
        this->codeStream << "ASSIGN_CONST_INT var" << x->id << " " << intPtr->value << std::endl;
        return;
    }
    auto doublePtr = dynamic_cast<DoubleConstant*>(&constant);
    if (doublePtr != nullptr) {
        this->codeStream << "ASSIGN_CONST_DOUBLE var" << x->id << " " << doublePtr->value << std::endl;
        return;
    }
    std::cerr << "Find unknown constant type in IR::constantToValue!" << std::endl;
}

void IR::jump(int labelId) {
    this->codeStream << "GOTO " << labelId << std::endl;
}

void IR::conditionJump(IRValuePtr condition, int labelId) {
    this->codeStream << "BEQ_1 var" << condition->id << " LABEL" << labelId << std::endl;
}

void IR::notEqualJump(IRValuePtr x1, IRValuePtr x2, int labelId) {
    this->codeStream << "BNE var" << x1->id << " var" << x2->id << " " << labelId << std::endl;
}

void IR::returnValue(IRValuePtr x) {
    this->codeStream << "RETURN var" << x->id << std::endl;
}

void IR::malloc(IRValuePtr x, IRValuePtr size) {
    this->codeStream << "MALLOC var" << x->id << " " << size << std::endl;
}

void IR::mallocConst(IRValuePtr x, Type base, int size) {
    this->codeStream << "MALLOC_CONST var" << x->id << " " << TypeToStr(base) << " * " << size << std::endl;
}

void IR::argument(IRValuePtr node) {
    this->codeStream << "ARGUMENT var" << node->id << std::endl;
}

void IR::parameter(IRValuePtr node) {
    this->codeStream << "PARAMETER var" << node->id << std::endl;
}

std::string IR::getCode() {
    return this->codeStream.str();
}

void IR::functionCall(std::string functionName) {
    this->codeStream << "CALL " << functionName << std::endl;
}
