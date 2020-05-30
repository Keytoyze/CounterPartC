#ifndef _IR_H_
#define _IR_H_

#include <vector>
#include <string>
#include "IR/value.h"

class Constant;

class IR {
private:
    std::vector<std::string> codeList;
public:
    // z = x [op] y
    void operation(IRValuePtr z, IRValuePtr x, IRValuePtr y);
    // definite label
    void label(int labelId);
    // definite function
    void functionDefinition(FunctionValuePtr function);
    // x = y
    void valueToValue(IRValuePtr x, IRValuePtr y);
    // x = &y
    void addressToValue(IRValuePtr x, IRValuePtr y);
    // x = *y
    void ptrToValue(IRValuePtr x, IRValuePtr y);
    // *x = y
    void valueToPtr(IRValuePtr x, IRValuePtr y);
    // x = CONSTANT
    void constantToValue(IRValuePtr x, Constant constant);
    // GOTO label
    void jump(int labelId);
    // IF condition GOTO label
    void conditionJump(IRValuePtr condition, int labelId);
    // IF x != y GOTO label
    void notEqualJump(IRValuePtr x, IRValuePtr y, int labelId);
    // return x
    void returnValue(IRValuePtr x);
    // x = malloc [size]
    void malloc(IRValuePtr x, IRValuePtr size);
    // push arguments
    void argument(IRValuePtr node);
    // definite parameters
    void parameter(IRValuePtr node);
};

#endif // _IR_H_