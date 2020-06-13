#include "ast/ast.h"
#include <iostream>

// unary_expression -> postfix_expression
// (UnaryExpression -> PostfixExpression)
IRValuePtr UnaryExpression1::GenerateIR(Context& context) {
    // TODO: implement me!
    return postfixExpressionAst1->GenerateIR(context);
}

// unary_expression -> INC_OP unary_expression
// (UnaryExpression -> IncOp UnaryExpression)
IRValuePtr UnaryExpression2::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = unaryExpressionAst2->GenerateIR(context);
    IntConstant cons;
    cons.value=1;
    if(p1->type !=TYPE_INT)
        std::cerr<<"not int type with ++"<<std::endl;
    IRValuePtr p2 = context.newVar(TYPE_INT,false);

    context.ir.constantToValue(p2,cons);
    context.ir.operation_int(p1,OP_ADD,p1,p2);

    return p1;
}

// unary_expression -> DEC_OP unary_expression
// (UnaryExpression -> DecOp UnaryExpression)
IRValuePtr UnaryExpression3::GenerateIR(Context& context) {
    // TODO: implement me!
    IRValuePtr p1 = unaryExpressionAst2->GenerateIR(context);
    IntConstant cons;
    cons.value=1;
    if(p1->type !=TYPE_INT)
        std::cerr<<"not int type with --"<<std::endl;
    IRValuePtr p2 = context.newVar(TYPE_INT,false);

    context.ir.constantToValue(p2,cons);
    context.ir.operation_int(p1,OP_SUB,p1,p2);

    return p1;
}

// unary_expression -> unary_operator cast_expression
// (UnaryExpression -> UnaryOperator CastExpression)
IRValuePtr UnaryExpression4::GenerateIR(Context& context) {
    IRValuePtr p = castExpressionAst2->GenerateIR(context);
    if (p->type != TYPE_INT && p->type != TYPE_DOUBLE) {
        context.error("not capable type for UnaryExpression: " + std::string(TypeToStr(p->type)));
    }

    if (dynamic_cast<UnaryOperator3*>(unaryOperatorAst1) != nullptr) { // +
        return p;
    }


    if (dynamic_cast<UnaryOperator1*>(unaryOperatorAst1) != nullptr) { // &
        IRValuePtr p2 = context.newVar(p->type, false);
        context.ir.addressToValue(p2, p);
        return p2;
    } else if (dynamic_cast<UnaryOperator2*>(unaryOperatorAst1) != nullptr) { // *
        if (context.parsingContext == Parsing::PARSING_ASSIGN_LEFT) {
            p->useAddress = true;
            return p;
        } else {
            IRValuePtr p2 = context.newVar(p->type, false);
            context.ir.ptrToValue(p2, p);
            return p2;
        }
    } else if (dynamic_cast<UnaryOperator4*>(unaryOperatorAst1) != nullptr) { // -
        IRValuePtr p2 = context.newVar(p->type, false);
        context.ir.singleOperation(p2, SingleOper::SUB, p);
        return p2;
    } else if (dynamic_cast<UnaryOperator5*>(unaryOperatorAst1) != nullptr) { // ~
        IRValuePtr p2 = context.newVar(p->type, false);
        context.ir.singleOperation(p2, SingleOper::XOR, p);
        return p2;
    } else if (dynamic_cast<UnaryOperator6*>(unaryOperatorAst1) != nullptr) { // !
        IRValuePtr p2 = context.newVar(p->type, false);
        context.ir.singleOperation(p2, SingleOper::NOT, p);
        return p2;
    }
}

// unary_expression -> SIZEOF unary_expression
// (UnaryExpression -> Sizeof UnaryExpression)
IRValuePtr UnaryExpression5::GenerateIR(Context& context) {
    auto p = this->unaryExpressionAst2->GenerateIR(context);
    auto result = context.newVar(Type::TYPE_INT, false);
    IntConstant constant(sizeOf(p->type));
    context.ir.constantToValue(result, constant);
    return result;
}

// unary_expression -> SIZEOF '(' type_name ')'
// (UnaryExpression -> Sizeof LRound TypeName RRound)
IRValuePtr UnaryExpression6::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "sizeof Not implemented!" << std::endl;
    return nullptr;
}

