#include "ast/ast.h"
#include <iostream>

// postfix_expression -> primary_expression
// (PostfixExpression -> PrimaryExpression)
IRValuePtr PostfixExpression1::GenerateIR(Context &context) {
    return primaryExpressionAst1->GenerateIR(context);
}

// postfix_expression -> postfix_expression '[' expression ']'
// (PostfixExpression -> PostfixExpression LSquare Expression RSquare)
IRValuePtr PostfixExpression2::GenerateIR(Context &context) {
    auto pointer = postfixExpressionAst1->GenerateIR(context);
    // TODO: type check
    // if (!pointer->useAddress) {
    //     context.error("invalid types for array subscript!");
    //     return nullptr;
    // }
    
    // get type size
    auto size = context.newVar(Type::TYPE_INT, false);
    IntConstant constant(sizeOf(pointer->type));
    context.ir.constantToValue(size, constant);

    // calculate offset
    auto offset = expressionAst3->GenerateIR(context);
    auto offsetMul = context.newVar(Type::TYPE_INT, false);
    context.ir.operation(offsetMul, Oper::OP_MUL, offset, size);
    auto addressOffset = context.newVar(pointer->type, true);
    context.ir.operation(addressOffset, Oper::OP_ADD, pointer, offsetMul);

    if (context.parsingContext == Parsing::PARSING_ASSIGN_LEFT) {
        // return pointer if is in left
        return addressOffset;
    } else {
        // fetch value if is in right
        auto result = context.newVar(pointer->type, false);
        context.ir.ptrToValue(result, addressOffset);
        return result;
    }
}

IRValuePtr callFunction(Context &context, PostfixExpression* postfixExpression, ArgumentExpressionList* arguments) {
    // function call with parameters
    auto function = postfixExpression->GenerateIR(context);
    if (function == nullptr) {
        // TODO: maybe return the identifier name instead of nullptr
        context.error("function not found");
        return nullptr;
    } else {
        if (function->type != Type::TYPE_FUNCTION) {
            context.error("why did this happen???");
            return nullptr;
        }
    }
    // now we have the function name
    auto &functionName = function->content;
    std::vector<IRValuePtr> argumentList;
    if (arguments != nullptr) {
        arguments->GenerateIR(context);
        argumentList = arguments->argumentList;
    }
    // check against function pool
    auto &pool = context.functionPool;
    Type returnType = Type::TYPE_INT;
    if (pool.find(functionName) != pool.end()) {
        auto &functionValue = pool[functionName];
        returnType = functionValue->returnType;
        int expectedSize = functionValue->parameters.size();
        if (expectedSize != argumentList.size()) {
            context.error("function argument count "
                          + std::to_string(argumentList.size())
                          + " do not match definition count " +
                          std::to_string(expectedSize));
            return nullptr;
        }
        for (int i = 0; i < expectedSize; i++) {
            if (functionValue->parameters[i].first != argumentList[i]->type) {
                context.error(
                        std::string("function argument type do not match definition, expected ")
                        + TypeToStr(functionValue->parameters[i].first)
                        + " but found " + TypeToStr(argumentList[i]->type)
                );
            }
        }
    }
    for (auto &it:argumentList) {
        context.ir.argument(it);
    }
    auto returnValue = context.newVar(returnType, false);
    context.ir.functionCall(functionName, returnValue);
    return returnValue;
}

// postfix_expression -> postfix_expression '(' ')'
// (PostfixExpression -> PostfixExpression LRound RRound)
IRValuePtr PostfixExpression3::GenerateIR(Context &context) {
    return callFunction(context, this->postfixExpressionAst1, nullptr);    
}

// postfix_expression -> postfix_expression '(' argument_expression_list ')'
// (PostfixExpression -> PostfixExpression LRound ArgumentExpressionList RRound)
IRValuePtr PostfixExpression4::GenerateIR(Context &context) {
    return callFunction(context, this->postfixExpressionAst1, this->argumentExpressionListAst3);
}

// postfix_expression -> postfix_expression '.' IDENTIFIER
// (PostfixExpression -> PostfixExpression Period Identifier)
IRValuePtr PostfixExpression5::GenerateIR(Context &context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression PTR_OP IDENTIFIER
// (PostfixExpression -> PostfixExpression PtrOp Identifier)
IRValuePtr PostfixExpression6::GenerateIR(Context &context) {
    // TODO: implement me!
    std::cerr << "PostfixExpression Not implemented!" << std::endl;
    return nullptr;
}

// postfix_expression -> postfix_expression INC_OP
// (PostfixExpression -> PostfixExpression IncOp)
IRValuePtr PostfixExpression7::GenerateIR(Context &context) {
    // TODO: implement me!
    IRValuePtr p1 = postfixExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = context.newVar(p1->type, false);
    IRValuePtr p3 = context.newVar(p1->type, false);
    IntConstant cons;
    cons.value = 1;
    context.ir.valueToValue(p3, p1);
    context.ir.constantToValue(p2, cons);
    context.ir.operation(p1, OP_ADD, p1, p2);

    return p3;
}

// postfix_expression -> postfix_expression DEC_OP
// (PostfixExpression -> PostfixExpression DecOp)
IRValuePtr PostfixExpression8::GenerateIR(Context &context) {
    IRValuePtr p1 = postfixExpressionAst1->GenerateIR(context);
    IRValuePtr p2 = context.newVar(p1->type, false);
    IRValuePtr p3 = context.newVar(p1->type, false);
    IntConstant cons;
    cons.value = 1;
    context.ir.valueToValue(p3, p1);
    context.ir.constantToValue(p2, cons);
    context.ir.operation(p1, OP_SUB, p1, p2);

    return p3;
}

