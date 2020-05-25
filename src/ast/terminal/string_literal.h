#ifndef _STRING_LITERAL_H_
#define _STRING_LITERAL_H_

#include "ast/terminal/token.h"
#include <string>
#include <cstring>
#include <iostream>

class StringLiteral: public BasicToken {
public:

    std::string text;

    StringLiteral(const char* yytext) {
        int length = strlen(yytext) - 2;
        const char* start = yytext + 1;
        text = std::string(start, length);
    }

    virtual ~StringLiteral() {

    }

    virtual void Dump(int depth) {
        std::cout << "[" << depth << "] StringLiteral: " << text << std::endl;
    }

};


#endif // _STRING_LITERAL_H_