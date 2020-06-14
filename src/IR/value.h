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
    TYPE_UNSIGNED, 
    TYPE_BOOL, // TODO: move to int
    TYPE_POINTER,
    TYPE_FUNCTION
    // TODO: maybe there are more ?
};

inline const char* TypeToStr(Type type) {
    switch (type) {
        case Type::TYPE_VOID: return "void";
        case Type::TYPE_CHAR: return "char";
        case Type::TYPE_SHORT: return "short";
        case Type::TYPE_INT: return "int";
        case Type::TYPE_LONG: return "long";
        case Type::TYPE_FLOAT: return "float";
        case Type::TYPE_DOUBLE: return "double";
        case Type::TYPE_SIGNED: return "signed";
        case Type::TYPE_UNSIGNED: return "unsigned";
        case Type::TYPE_BOOL: return "bool";
        case Type::TYPE_POINTER: return "void*";
        case Type::TYPE_FUNCTION: return "function";
    }
    return nullptr;
}

inline int sizeOf(Type type) {
    switch (type) {
        case Type::TYPE_VOID: return 0;
        case Type::TYPE_CHAR: return 1;
        case Type::TYPE_SHORT: return 2;
        case Type::TYPE_INT: return 4;
        case Type::TYPE_LONG: return 8;
        case Type::TYPE_FLOAT: return 4;
        case Type::TYPE_DOUBLE: return 8;
        case Type::TYPE_SIGNED: return sizeOf(Type::TYPE_INT);
        case Type::TYPE_UNSIGNED: return sizeOf(Type::TYPE_INT);
        case Type::TYPE_BOOL: return sizeOf(Type::TYPE_INT);
        case Type::TYPE_POINTER: return sizeOf(Type::TYPE_INT);
        case Type::TYPE_FUNCTION: return 0;
    }
    return 0;
}

enum Oper {
    LOGICAL_AND,
    LOGICAL_OR,
    OP_ADD,
    OP_SUB, 
    OP_MUL, 
    OP_DIV, 
    OP_MOD, 
    OP_LS, 
    OP_RS, 
    OP_LT, 
    OP_GT, 
    OP_LTE, 
    OP_GTE,
    OP_EQ, 
    OP_NEQ, 
    OP_AND, 
    OP_OR,
    OP_XOR
};

enum SingleOper {
    NOT,
    SUB,
    XOR
};

struct IRValue {
    int id;
    Type type;
    std::string content = "";
    bool useAddress = false;
    bool isConstant = false;
    union const_val{
        int intVal;
        double doubleVal;
    } constVal;
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
    // make Block polymorphic
    virtual void cppIsStupid(){};
    // redundant information, just traverse the stack
//    std::shared_ptr<Block> parentBlock = nullptr;
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