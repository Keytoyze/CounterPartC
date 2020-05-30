#include "ast/ast.h"
#include <iostream>

// conditional_expression -> logical_or_expression
// (ConditionalExpression -> LogicalOrExpression)
IRValuePtr ConditionalExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ConditionalExpression Not implemented!" << std::endl;
    //return nullptr;
    return logicalOrExpressionAst1->GenerateIR(context);
}

// conditional_expression -> logical_or_expression '?' expression ':' conditional_expression
// (ConditionalExpression -> LogicalOrExpression Question Expression Colon ConditionalExpression)
IRValuePtr ConditionalExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "ConditionalExpression Not implemented!" << std::endl;
    //return nullptr;
    IRValuePtr p1 = logicalOrExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = expressionAst3->GenerateIR(context);
    IRValuePtr p3 = conditionalExpressionAst5->GenerateIR(context);

    IRValuePtr p4 = context.newVar(p2->type,false);
    
}

