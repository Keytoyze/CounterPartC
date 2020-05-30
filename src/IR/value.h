#ifndef _IR_VALUE_H_
#define _IR_VALUE_H_

#include <string>
#include <memory>
#include <map>
#include <vector>

enum Type {
    TYPE_VOID, TYPE_BOOL, TYPE_INT, TYPE_DOUBLE // TODO: more types
};

enum Oper{
    LOGICAL_AND,LOGICAL_OR,OP_ADD,OP_SUB, OP_MUL, OP_DIV, OP_MOD, OP_LS, OP_RS, OP_LT, OP_GT, OP_LTE, OP_GTE, OP_EQ, OP_NEQ, OP_AND, OP_OR,OP_XOR
};



struct IRValue {
    int id;
    Type type;
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