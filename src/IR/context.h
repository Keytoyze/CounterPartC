#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <map>
#include <vector>
#include <memory>
#include <iostream>

#include "IR/ir.h"
#include "IR/value.h"
#include "CodeOptimization.h"
enum Parsing {
    PARSING_NULL,
    PARSING_FUNCTION,
    PARSING_ASSIGN_LEFT,
    PARSING_ASSIGN_RIGHT
};


class Context {
public:
    IR ir;
    Parsing parsingContext;
    std::map<std::string, FunctionValuePtr> functionPool;
    std::vector<BlockPtr> blockStack;
    std::map<std::string, int> identifierLabelPool; // identifier -> labelId

    Context();

    IRValuePtr newVar(Type type, bool useAddress, int arrayConstSize = -1, IRValuePtr arrayVarSize = nullptr);

    int newLabelId();

    void error(std::string err) const;

    BlockPtr newBlock(BlockPtr parent);

    IRValuePtr findVar(std::string& identifier, bool mute = false);

    IRValuePtr findFunction(const std::string &functionName);

    bool optimizationEnabled(unsigned long flag);

    void setOptimizationFlags(unsigned long flag);
private:
    int varNum, labelNum, arrayNum;
    unsigned long optimization;
};

#endif // _CONTEXT_H_
