#include "ast/ast.h"
#include <iostream>

// selection_statement -> IF '(' expression ')' statement
// (SelectionStatement -> If LRound Expression RRound Statement)
IRValuePtr SelectionStatement1::GenerateIR(Context& context) {
    auto res = this->expressionAst3->GenerateIR(context);
    // TODO: get the evaluation of the expression
    auto label1 = context.newLabelId();
    auto label2 = context.newLabelId();
    context.ir.conditionJump(res, label1);
    context.ir.jump(label2);
    context.ir.label(label1);
    // insert the block
    auto blockPtr = std::make_shared<Block>();
    context.blockStack.push_back(blockPtr);
    this->statementAst5->GenerateIR(context);
    // pop the block
    context.blockStack.pop_back();
    context.ir.label(label2);
    return nullptr;
}

// selection_statement -> IF '(' expression ')' statement ELSE statement
// (SelectionStatement -> If LRound Expression RRound Statement Else Statement)
IRValuePtr SelectionStatement2::GenerateIR(Context& context) {
    auto res = this->expressionAst3->GenerateIR(context);
    // TODO: get the evaluation of the expression
    auto label1 = context.newLabelId();
    auto label2 = context.newLabelId();
    auto label3 = context.newLabelId();
    context.ir.conditionJump(res, label1);
    context.ir.jump(label2);
    context.ir.label(label1);
    // insert the block
    auto blockPtr = std::make_shared<Block>();
    context.blockStack.push_back(blockPtr);
    this->statementAst5->GenerateIR(context);
    // pop the block
    context.blockStack.pop_back();
    context.ir.jump(label3);
    context.ir.label(label2);
    // insert the block
    auto block2Ptr = std::make_shared<Block>();
    context.blockStack.push_back(block2Ptr);
    this->statementAst7->GenerateIR(context);
    // pop the block
    context.blockStack.pop_back();
    context.ir.label(label3);
    return nullptr;
}

// selection_statement -> SWITCH '(' expression ')' statement
// (SelectionStatement -> Switch LRound Expression RRound Statement)
IRValuePtr SelectionStatement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Switch Not implemented!" << std::endl;
    return nullptr;
}

