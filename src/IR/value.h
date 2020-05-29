#ifndef _IR_VALUE_H_
#define _IR_VALUE_H_

#include <string>
#include <memory>
#include <map>
#include <vector>

enum Type {
    TYPE_VOID, TYPE_BOOL, TYPE_INT, TYPE_DOUBLE, TYPE_IDENTIFIER // TODO: more types
};

struct IRValue {
    int id;
    Type type;
    std::string content = "";
    bool useAddress = false;
};

using IRValuePtr = std::shared_ptr<IRValue>;

class Block {
public:
    int id;
    std::map<std::string, IRValuePtr> varTable;
    std::map<std::string, IRValuePtr> arrayTable;
    bool breakable = false;
};

using BlockPtr = std::shared_ptr<Block>;

class FunctionValue: public Block {
public:
    Type returnType;
    std::vector<IRValuePtr> parameters;
    bool hasDefined = false;
};

using FunctionValuePtr = std::shared_ptr<FunctionValue>;

#endif // _IR_VALUE_H_