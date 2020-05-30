#ifndef _IR_VALUE_H_
#define _IR_VALUE_H_

#include <string>
#include <memory>
#include <map>
#include <vector>

enum Type {
    TYPE_VOID,
    TYPE_CHAR,
    TYPE_SHORT,
    TYPE_INT,
    TYPE_LONG,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_SIGNED,
    TYPE_UNSIGNED // TODO: maybe there are more ?
};

static const char * TypeToStr[] = {
        "void",
        "char",
        "short",
        "int",
        "long",
        "float",
        "double",
        "signed",
        "unsigned"
};

enum Oper{
    LOGICAL_AND,LOGICAL_OR,OP_ADD,OP_SUB, OP_MUL, OP_DIV, OP_MOD, OP_LS, OP_RS, OP_LT, OP_GT, OP_LTE, OP_GTE, OP_EQ, OP_NEQ, OP_AND, OP_OR,OP_XOR
};



struct IRValue {
    int id;
    Type type;
    std::string content = "";
    bool useAddress = false;
};

using IRValuePtr = std::shared_ptr<IRValue>;



using FunctionParameter = std::pair<Type, std::string>;
using FunctionParameterList = std::vector<FunctionParameter>;

class Block {
public:
    int id;
    std::map<std::string, IRValuePtr> varTable;
    std::map<std::string, IRValuePtr> arrayTable;
    bool breakable = false;
    bool continuable = false;
    bool switchable = false;
    int breakLabel = -1;
    int continueLabel = -1;
    IRValuePtr switchValue = nullptr;
    std::shared_ptr<Block> parentBlock = nullptr;
    // Please modify Context::newBlock if you append new attribute here
};

using BlockPtr = std::shared_ptr<Block>;

class FunctionValue : public Block {
public:
    FunctionValue(Type type,
                  FunctionParameterList &list,
                  bool hasDefined = false) :
            returnType(type), parameters(list),
            hasDefined(hasDefined) {};
    Type returnType;
    FunctionParameterList &parameters;
    bool hasDefined;
};

using FunctionValuePtr = std::shared_ptr<FunctionValue>;


#endif // _IR_VALUE_H_