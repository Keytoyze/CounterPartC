#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include "ast/terminal/token.h"
#include "ostream"

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

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] IntConstant: " << value << std::endl;
    }
};

class DoubleConstant: public Constant {
public:
    double value;
    DoubleConstant(){}
    DoubleConstant(const char* yytext);

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] DoubleConstant: " << value << std::endl;
    }
};


#endif // _CONSTANT_H_