#ifndef _CONSTANT_H_
#define _CONSTANT_H_

#include "ast/terminal/token.h"
#include "ostream"

class Constant: public BasicToken {
public:
    explicit Constant(const char* yytext) {}
    Constant() {}
    virtual std::ostream& write(std::ostream& sm) const;
};

class IntConstant: public Constant {
public:
    int value;
    IntConstant(const char* yytext): Constant(yytext) {
        // TODO: parse int
    }

    IntConstant(){}

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] IntConstant: " << value << std::endl;
    }

    virtual std::ostream& write(std::ostream& sm) const;
};

class DoubleConstant: public Constant {
public:
    double value;
    DoubleConstant(){}
    DoubleConstant(const char* yytext): Constant(yytext) {
        // TODO: parse double
    }

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] DoubleConstant: " << value << std::endl;
    }

    virtual std::ostream& write(std::ostream& sm) const;
};


#endif // _CONSTANT_H_