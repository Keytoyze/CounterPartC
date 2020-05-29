#include "ast/ast.h"
#include <iostream>

// iteration_statement -> WHILE '(' expression ')' statement
// (IterationStatement -> While LRound Expression RRound Statement)
IRValuePtr IterationStatement1::GenerateIR(Context& context) {
    auto label1 = context.newLabelId();
    auto label2 = context.newLabelId();
    auto label3 = context.newLabelId();
    auto blockPtr = std::make_shared<Block>();
    blockPtr->breakable = true;
    blockPtr->continuable = true;
    blockPtr->continueLabel = label1;
    blockPtr->breakLabel = label3;
    context.blockStack.push_back(blockPtr);

    context.ir.label(label1);
    // TODO: get value from expression
    auto res = this->expressionAst3->GenerateIR(context);
    context.ir.conditionJump(res, label2);
    context.ir.jump(label3);
    context.ir.label(label2);

    this->statementAst5->GenerateIR(context);
    context.ir.jump(label1);
    context.ir.label(label3);

    context.blockStack.pop_back();
    return nullptr;
}

// iteration_statement -> DO statement WHILE '(' expression ')' ';'
// (IterationStatement -> Do Statement While LRound Expression RRound SimicolonSingle)
IRValuePtr IterationStatement2::GenerateIR(Context& context) {
    auto label1 = context.newLabelId();
    auto breakLabel = context.newLabelId();
    auto continueLable = context.newLabelId();
    auto blockPtr = std::make_shared<Block>();
    blockPtr->breakable = true;
    blockPtr->continuable = true;
    blockPtr->breakLabel = breakLabel;
    blockPtr->continueLabel = continueLable;
    context.blockStack.push_back(blockPtr);

    context.ir.label(label1);
    this->statementAst2->GenerateIR(context);
    context.ir.label(continueLable);
    // TODO: get value from expression
    auto res = this->expressionAst5->GenerateIR(context);
    context.ir.conditionJump(res, label1);
    context.ir.label(breakLabel);
    context.blockStack.pop_back();
    return nullptr;
}

// iteration_statement -> FOR '(' expression_statement expression_statement ')' statement
// (IterationStatement -> For LRound ExpressionStatement ExpressionStatement RRound Statement)
IRValuePtr IterationStatement3::GenerateIR(Context& context) {
    auto label1 = context.newLabelId();
    auto label2 = context.newLabelId();
    auto label3 = context.newLabelId();
    // generate for block
    auto blockPtr = std::make_shared<Block>();
    // TODO: break is not implemented for now
    blockPtr->breakable = true;
    blockPtr->continuable = true;
    blockPtr->breakLabel = label3;
    blockPtr->continueLabel = label1;
    context.blockStack.push_back(blockPtr);
    this->expressionStatementAst3->GenerateIR(context);
    // TODO: get value from expression_statement
    context.ir.label(label1);
    auto res = this->expressionStatementAst4->GenerateIR(context);
    context.ir.conditionJump(res, label2);
    context.ir.jump(label3);
    context.ir.label(label2);
    // parse statement
    this->statementAst6->GenerateIR(context);
    // exit for
    context.ir.jump(label1);
    context.ir.label(label3);
    context.blockStack.pop_back();
    return nullptr;
}

// iteration_statement -> FOR '(' expression_statement expression_statement expression ')' statement
// (IterationStatement -> For LRound ExpressionStatement ExpressionStatement Expression RRound Statement)
IRValuePtr IterationStatement4::GenerateIR(Context& context) {
    auto label1 = context.newLabelId();
    auto label2 = context.newLabelId();
    auto label3 = context.newLabelId();
    auto continueLabel = context.newLabelId();
    auto blockPtr = std::make_shared<Block>();
    blockPtr->breakable = true;
    blockPtr->continuable = true;
    blockPtr->breakLabel = label3;
    blockPtr->continueLabel = continueLabel;
    context.blockStack.push_back(blockPtr);

    this->expressionStatementAst3->GenerateIR(context);
    // TODO: get value from expression_statement
    context.ir.label(label1);
    auto res = this->expressionStatementAst4->GenerateIR(context);
    context.ir.conditionJump(res, label2);
    context.ir.jump(label3);
    context.ir.label(label2);
    // parse statement
    this->statementAst7->GenerateIR(context);
    // update
    context.ir.label(continueLabel);
    this->expressionAst5->GenerateIR(context);
    // exit for
    context.ir.jump(label1);
    context.ir.label(label3);
    context.blockStack.pop_back();
    return nullptr;
}

