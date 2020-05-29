#ifndef _IR_VALUE_H_
#define _IR_VALUE_H_

#include <string>
#include <memory>
#include <map>
#include <vector>

enum Type {
    TYPE_VOID, TYPE_BOOL, TYPE_INT, TYPE_DOUBLE // TODO: more types
};

static const char * TypeToStr[] = {
        "void",
        "bool",
        "int",
        "double"
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