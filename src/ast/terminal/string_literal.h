#ifndef _STRING_LITERAL_H_
#define _STRING_LITERAL_H_

#include "ast/terminal/token.h"
#include "ast/render.h"
#include <string>
#include <cstring>

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
        TreeRender::push(text.c_str(), true);
    }

};


#endif // _STRING_LITERAL_H_