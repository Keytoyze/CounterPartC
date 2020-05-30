#include "ast/ast.h"
#include <iostream>

// labeled_statement -> IDENTIFIER ':' statement
// (LabeledStatement -> Identifier Colon Statement)
IRValuePtr LabeledStatement1::GenerateIR(Context& context) {
    auto& identifier = identifierAst1->content;
    auto& labelPool = context.identifierLabelPool;
    int labelId;
    if (labelPool.find(identifier) != labelPool.end()) {
        labelId = labelPool[identifier];
    } else {
        labelId = context.newLabelId();
        labelPool[identifier] = labelId;
    }
    context.ir.label(labelId);

    this->statementAst3->GenerateIR(context);

    return nullptr;
}

// labeled_statement -> CASE constant_expression ':' statement
// (LabeledStatement -> Case ConstantExpression Colon Statement)
IRValuePtr LabeledStatement2::GenerateIR(Context& context) {
    // not support fallback!!!
    auto currentBlock = context.blockStack.back();
    if (!currentBlock->switchable) {
        context.error("CASE is not supported in current block!");
        return nullptr;
    }
    auto newBlock = context.newBlock(currentBlock);
    context.blockStack.push_back(newBlock);
    auto constantValue = this->constantExpressionAst2->GenerateIR(context);

    auto continueLabel = context.newLabelId();
    context.ir.notEqualJump(currentBlock->switchValue, constantValue, continueLabel);

    this->statementAst4->GenerateIR(context);
    context.ir.jump(currentBlock->breakLabel);

    context.ir.label(continueLabel);

    context.blockStack.pop_back();

    return nullptr;
}

// labeled_statement -> DEFAULT ':' statement
// (LabeledStatement -> Default Colon Statement)
IRValuePtr LabeledStatement3::GenerateIR(Context& context) {
    // nothing to do!
    this->statementAst3->GenerateIR(context);
    return nullptr;
}

