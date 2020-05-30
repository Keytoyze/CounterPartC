#include "constant.h"
#include <string>

IntConstant::IntConstant(const char* yytext, IntType intType): Constant(yytext) {
    switch (intType) {
        case IntType::DEC:
            sscanf(yytext, "%d", &this->value);
            break;
        case IntType::HEX:
            sscanf(yytext + 2, "%x", &this->value);
            break;
        case IntType::OCT:
            sscanf(yytext + 1, "%o", &this->value);
            break;
        case IntType::CHR:
            this->value = (int)yytext[1];
            break;
        default:
            std::cerr << "Error: unknown constant type: " << yytext << std::endl;
    }
}

DoubleConstant::DoubleConstant(const char* yytext): Constant(yytext) {
    sscanf(yytext, "%lf", &this->value);    
}