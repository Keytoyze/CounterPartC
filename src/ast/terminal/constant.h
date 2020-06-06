#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include "ast/terminal/token.h"
#include "ast/render.h"
#include <sstream>

class Constant: public BasicToken {
public:
    explicit Constant(const char* yytext) {}
    Constant() {}
};

enum IntType {
    DEC, HEX, OCT, CHR, NOT_IMPL
};

class IntConstant: public Constant {
public:
    int value;
    IntConstant(const char* yytext, IntType intType);

    IntConstant(){}

    IntConstant(int value): value(value) {}

    virtual void Dump(int depth) {
        std::stringstream ss;
        ss << "int: " << value;
        TreeRender::push(ss.str().c_str(), true);
    }
};

class DoubleConstant: public Constant {
public:
    double value;
    DoubleConstant(){}
    DoubleConstant(const char* yytext);

    virtual void Dump(int depth) {
        std::stringstream ss;
        ss << "double: " << value;
        TreeRender::push(ss.str().c_str(), true);
    }
};


#endif // _CONSTANT_H_