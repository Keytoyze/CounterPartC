#ifndef _IDENTIFIER_H_
#define _IDENTIFIER_H_

#include "ast/terminal/token.h"
#include <string>
#include <cstring>

class Identifier: public BasicToken {
public:

    std::string content;

    Identifier(const char* yytext) {
        content = std::string(yytext);
    }

    virtual ~Identifier() {

    }

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] Identifier: " << content << std::endl;
    }

};


#endif // _IDENTIFIER_H_