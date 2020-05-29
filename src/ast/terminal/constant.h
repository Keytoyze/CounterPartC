#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include "ast/terminal/token.h"

class Constant: public BasicToken {
public:
    explicit Constant(const char* yytext) {}

};

class IntConstant: public Constant {
public:
    int value;
    IntConstant(const char* yytext): Constant(yytext) {
        // TODO: parse int
    }

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] IntConstant: " << value << std::endl;
    }
};

class DoubleConstant: public Constant {
public:
    double value;
    DoubleConstant(const char* yytext): Constant(yytext) {
        // TODO: parse double
    }

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] DoubleConstant: " << value << std::endl;
    }
};

#endif // _CONSTANT_H_