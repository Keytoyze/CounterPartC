#include "ast/ast.h"
#include <iostream>
#include <string>


// primary_expression -> IDENTIFIER
// (PrimaryExpression -> Identifier)
IRValuePtr PrimaryExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::string name = identifierAst1->content;
    int N = context.blockStack.size();
    for(int i=N-1;i--;i>=0){
        if(context.blockStack[i]->varTable.find(name)!=context.blockStack[i]->varTable.end())
            return context.blockStack[i]->varTable[name];
    }
    std::cerr<<"not defined variable"<<std::endl;
    return nullptr;
}

// primary_expression -> CONSTANT
// (PrimaryExpression -> Constant)
IRValuePtr PrimaryExpression2::GenerateIR(Context& context) {

    IRValuePtr p ;

        p = context.newVar(TYPE_INT,false);
        context.ir.constantToValue(p,*constantAst1);
    return p;

}

// primary_expression -> STRING_LITERAL
// (PrimaryExpression -> StringLiteral)
IRValuePtr PrimaryExpression3::GenerateIR(Context& context) {
    std::cerr << "PrimaryExpression3 Not implemented!" << std::endl;
    //return stringLiteralAst1->GenerateIR(context);
    return nullptr;
}

// primary_expression -> '(' expression ')'
// (PrimaryExpression -> LRound Expression RRound)
IRValuePtr PrimaryExpression4::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "PrimaryExpression Not implemented!" << std::endl;
    //return nullptr;
    return expressionAst2->GenerateIR(context);
}

