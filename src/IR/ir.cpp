#include "IR/ir.h"
#include "ast/terminal/constant.h"
#include "CodeOptimization.h"

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

static const char * SingleOpToStr[] = {
    "NOT", 
    "SUB", 
    "XOR"
};

void IR::singleOperation(IRValuePtr y, SingleOper op, IRValuePtr x) {
    this->codeStream << "OP_SINGLE " << SingleOpToStr[op];
    this->codeStream << " var" << y->id << " var" << x->id;
    this->codeStream << std::endl;
}
/*
//including logical operation , shift operation and relational operation
void IR::operation(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y) {
    this->codeStream << "OP " << OpToStr[(int)op];
    this->codeStream << " var" << z->id << " var" << x->id << " var" << y->id;
    this->codeStream << std::endl;
}
*/

void IR::operation_int(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y) {
    this->codeStream << "OP_INT " << OpToStr[(int)op];
    this->codeStream << " var" << z->id << " var" << x->id << " var" << y->id;
    this->codeStream << std::endl;
}

void IR::operation_double(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y) {
    this->codeStream << "OP_DOUBLE " << OpToStr[(int)op];
    this->codeStream << " var" << z->id << " var" << x->id << " var" << y->id;
    this->codeStream << std::endl;
}

void IR::operation(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y) {
    if (x->type == Type::TYPE_INT) {
        this->operation_int(z, op, x, y);
    } else {
        this->operation_double(z, op, x, y);
    }
}

void IR::functionEnd() {
    this->codeStream << "FUNC_END" << std::endl;
}

void IR::label(int labelId) {
    this->codeStream << "LABEL " << labelId << std::endl;
}

void IR::functionDefinition(std::string functionName, FunctionValuePtr function) {
     this->codeStream << "FUNCTION " << functionName << " " << TypeToStr(function->returnType) << ":" << std::endl;
    // this->codeStream << "functionDefinition " << std::endl;
}

void IR::valueToValue(IRValuePtr x, IRValuePtr y) {
    CodeOptimization::valueAssignment(x, y);
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
    // call when a variable is initialized with a constant value
    x->isConstant = true;
    auto intPtr = dynamic_cast<IntConstant*>(&constant);
    if (intPtr != nullptr) {
        x->constVal.intVal = intPtr->value;
        this->codeStream << "ASSIGN_CONST_INT var" << x->id << " " << intPtr->value << std::endl;
        return;
    }
    auto doublePtr = dynamic_cast<DoubleConstant*>(&constant);
    if (doublePtr != nullptr) {
        x->constVal.doubleVal = doublePtr->value;
        this->codeStream << "ASSIGN_CONST_DOUBLE var" << x->id << " " << doublePtr->value << std::endl;
        return;
    }
    std::cerr << "Find unknown constant type in IR::constantToValue!" << std::endl;
}

void IR::jump(int labelId) {
    this->codeStream << "GOTO " << labelId << std::endl;
}

void IR::conditionJump(IRValuePtr condition, int labelId) {
    this->codeStream << "IF var" << condition->id << " LABEL " << labelId << std::endl;
}

void IR::notEqualJump(IRValuePtr x1, IRValuePtr x2, int labelId) {
    this->codeStream << "BNE var" << x1->id << " var" << x2->id << " " << labelId << std::endl;
}

void IR::returnValue(IRValuePtr x) {
    if (x != nullptr && x->type != Type::TYPE_VOID) {
        this->codeStream << "RETURN var" << x->id << std::endl;
    } else {
        this->codeStream << "RETURN" << std::endl;
    }
}

void IR::malloc(IRValuePtr x, Type base, IRValuePtr size) {
    if (size->isConstant) {
        if (size->type != Type::TYPE_INT) {
            context.error("Array size must be an integer!");
        }
        mallocConst(x, base, size->constVal.intVal);
    } else {
        IRValuePtr typeSize = this->context.newVar(Type::TYPE_INT, false);
        IntConstant constant(sizeOf(base));
        this->constantToValue(typeSize, constant);
        this->operation_int(typeSize, Oper::OP_MUL, typeSize, size);
        this->codeStream << "MALLOC var" << x->id << " var" << typeSize->id << " (bytes)" << std::endl;
    }
}

void IR::mallocConst(IRValuePtr x, Type base, int size) {
    x->isConstant = true;
    this->codeStream << "MALLOC_CONST var" << x->id << " " << size * sizeOf(base) << " (bytes)" << std::endl;
}

void IR::argument(IRValuePtr node) {
    this->codeStream << "ARGUMENT var" << node->id << std::endl;
}

void IR::parameter(IRValuePtr node) {
    int size = sizeOf(node->type);
    if (size != 0) {
        this->codeStream << "PARAMETER var" << node->id << " " << size << " (bytes)" << std::endl;
    }
}

std::string IR::getCode() {
    return this->codeStream.str();
}

void IR::functionCall(std::string functionName, IRValuePtr returnValue) {
    this->codeStream << "CALL " << functionName << " var" << returnValue->id << std::endl;
}
