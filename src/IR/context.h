#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <map>
#include <vector>
#include <memory>
#include <iostream>

#include "IR/ir.h"
#include "IR/value.h"

class Context {
private:
    int varNum, labelNum, arrayNum = 0;
public:
    std::map<std::string, FunctionValuePtr> functionPool;
    std::vector<BlockPtr> blockStack;
    IR ir;

    IRValuePtr newVar(Type type, bool useAddress) {
        auto newValue = std::make_shared<IRValue>();
        newValue->id = varNum++;
        newValue->type = type;
        newValue->useAddress = useAddress;
        return newValue;
    }

    int newLabelId() {
        return labelNum++;
    }

    void error(std::string err) {
        // TODO: print line number
        std::cerr << err << std::endl;
    }
};

#endif // _CONTEXT_H_
