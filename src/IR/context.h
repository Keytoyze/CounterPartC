#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <map>
#include <vector>
#include <memory>
#include <iostream>

#include "IR/ir.h"
#include "IR/value.h"

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

    void error(std::string err);

    BlockPtr newBlock(BlockPtr parent);

    IRValuePtr findVar(std::string& identifier, bool mute = false);

    IRValuePtr findFunction(const std::string &functionName);
private:
    int varNum, labelNum, arrayNum;
};

#endif // _CONTEXT_H_
