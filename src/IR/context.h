#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <map>
#include <vector>
#include <memory>
#include <iostream>

#include "IR/ir.h"
#include "IR/value.h"
enum Parsing{
    PARSING_NULL,
    PARSING_FUNCTION
};

class Context {
public:
    IR ir;
    Parsing parsingContext;
    std::map<std::string, FunctionValuePtr> functionPool;
    std::vector<BlockPtr> blockStack;

    Context();

    IRValuePtr newVar(Type type, bool useAddress);

    int newLabelId();

    void error(std::string err);

private:
    int varNum, labelNum, arrayNum;
};

#endif // _CONTEXT_H_
