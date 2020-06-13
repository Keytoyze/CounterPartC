#ifndef _IR_H_
#define _IR_H_

#include <vector>
#include <string>
#include "IR/value.h"
#include <sstream>

class Constant;
class Context;

class IR {
private:
    Context& context;
    std::stringstream codeStream;
    void addCode(std::string &str);
    void operation_int(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y);
    void operation_double(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y);
public:

    IR(Context& context): context(context) {}

    // z = x [op] y
    void operation(IRValuePtr z, Oper op, IRValuePtr x, IRValuePtr y);

    // y = [op] x
    void singleOperation(IRValuePtr y, SingleOper op, IRValuePtr x);

    // definite label
    void label(int labelId);

    // definite function
    void functionDefinition(
            std::string functionName,
            FunctionValuePtr function
    );

    // x = y
    void valueToValue(IRValuePtr x, IRValuePtr y);

    // x = &y
    void addressToValue(IRValuePtr x, IRValuePtr y);

    // x = *y
    void ptrToValue(IRValuePtr x, IRValuePtr y);

    // *x = y
    void valueToPtr(IRValuePtr x, IRValuePtr y);

    // x = CONSTANT
    void constantToValue(IRValuePtr x, Constant &constant);

    // GOTO label
    void jump(int labelId);

    // IF condition GOTO label
    void conditionJump(IRValuePtr condition, int labelId);

    // IF x != y GOTO label
    void notEqualJump(IRValuePtr x, IRValuePtr y, int labelId);

    // return x
    void returnValue(IRValuePtr x);

    // x = malloc [size]
    void malloc(IRValuePtr x, Type base, IRValuePtr size);

    // x = malloc [const]
    void mallocConst(IRValuePtr x, Type base, int size);

    // push arguments
    void argument(IRValuePtr node);

    // definite parameters
    void parameter(IRValuePtr node);

    // call function
    void functionCall(std::string functionName, IRValuePtr returnValue);

    std::string getCode();
};

#endif // _IR_H_