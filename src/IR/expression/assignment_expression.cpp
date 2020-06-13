#include "ast/ast.h"
#include <iostream>

// assignment_expression -> conditional_expression
// (AssignmentExpression -> ConditionalExpression)
IRValuePtr AssignmentExpression1::GenerateIR(Context& context) {
    return conditionalExpressionAst1->GenerateIR(context);
}

// assignment_expression -> unary_expression assignment_operator assignment_expression
// (AssignmentExpression -> UnaryExpression AssignmentOperator AssignmentExpression)
IRValuePtr AssignmentExpression2::GenerateIR(Context& context) {

    Parsing preParsing = context.parsingContext;
    context.parsingContext = Parsing::PARSING_ASSIGN_LEFT;
    IRValuePtr p1 = unaryExpressionAst1->GenerateIR(context);
    context.parsingContext = Parsing::PARSING_ASSIGN_RIGHT;
    IRValuePtr p2 = assignmentExpressionAst3->GenerateIR(context);
    context.parsingContext = preParsing;

    IRValuePtr p3, p11;
    if (!p1->useAddress) {
        p11 = p1;
    } else {
        p11 = context.newVar(p1->type, false);
        context.ir.ptrToValue(p11, p1);
    }

    if(dynamic_cast<AssignmentOperator1*>(assignmentOperatorAst2) != NULL) {
        p3 = p2;
    }
    else{
        p3 = context.newVar(p2->type,false);

        if(dynamic_cast<AssignmentOperator2*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_MUL,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator3*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_DIV,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator4*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_MOD,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator5*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_ADD,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator6*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_SUB,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator7*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_LS,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator8*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_RS,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator9*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_AND,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator10*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_XOR,p11,p2);
        }
        else if(dynamic_cast<AssignmentOperator11*>(assignmentOperatorAst2)!=NULL){
            if(p1->type!=p2->type)
                std::cerr<<"Different type for two variables in AssignmentExpression2"<<std::endl;
            context.ir.operation(p3,OP_OR,p11,p2);
        }

    }

    if (p1->useAddress) {
        context.ir.valueToPtr(p1, p3);
    } else {
        context.ir.valueToValue(p1, p3);
    }

    return p3;
}

