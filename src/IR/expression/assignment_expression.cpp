#include "ast/ast.h"
#include <iostream>

// assignment_expression -> conditional_expression
// (AssignmentExpression -> ConditionalExpression)
IRValuePtr AssignmentExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "AssignmentExpression Not implemented!" << std::endl;
    //return nullptr;

    return conditionalExpressionAst1->GenerateIR(context);
}

// assignment_expression -> unary_expression assignment_operator assignment_expression
// (AssignmentExpression -> UnaryExpression AssignmentOperator AssignmentExpression)
IRValuePtr AssignmentExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    //std::cerr << "AssignmentExpression Not implemented!" << std::endl;
    //return nullptr;

    IRValuePtr p1 = unaryExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = assignmentExpressionAst3->GenerateIR(context);

    IRValuePtr p3;

    if(dynamic_cast<AssignmentOperator1*>(assignmentOperatorAst2)!=NULL){
        p3=p2;
    }
    else{
        p3 = context.newVar(p2->type,false);

        if(dynamic_cast<AssignmentOperator2*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_MUL,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator3*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_DIV,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator4*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_MOD,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator5*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_ADD,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator6*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_SUB,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator7*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_LS,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator8*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_RS,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator9*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_AND,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator10*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_XOR,p1,p2);
        }
        else if(dynamic_cast<AssignmentOperator11*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_OR,p1,p2);
        }

    }

    //ir修正(
    //赋值地址使用判断？
    context.ir.valueToValue(p1,p3);

    return p1;

}

