#ifndef _IDENTIFIER_H_
#define _IDENTIFIER_H_

#include "ast/terminal/token.h"
#include <string>
#include <cstring>
#include <sstream>

class Identifier: public BasicToken {
public:

    std::string content;

    Identifier(const char* yytext) {
        content = std::string(yytext);
    }

    virtual ~Identifier() {

    }

    virtual void Dump(int depth) {
        std::stringstream ss;
        ss << "Identifier: " << content;
        TreeRender::push(ss.str().c_str(), true);
    }

};


#endif // _IDENTIFIER_H_