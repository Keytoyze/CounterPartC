#ifndef _BASIC_AST_H_
#define _BASIC_AST_H_

#include "IR/context.h"

class BasicAST {
public:
    ~BasicAST() {};

    virtual IRValuePtr GenerateIR(Context& context) = 0;
    virtual void Dump(int depth) {}
};


#endif //_BASIC_AST_H_