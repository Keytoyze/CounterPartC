#include "ast/ast.h"
#include <iostream>

// jump_statement -> GOTO IDENTIFIER ';'
// (JumpStatement -> Goto Identifier SimicolonSingle)
IRValuePtr JumpStatement1::GenerateIR(Context &context) {
    auto& identifier = identifierAst2->content;
    auto& labelPool = context.identifierLabelPool;
    int labelId;
    if (labelPool.find(identifier) != labelPool.end()) {
        labelId = labelPool[identifier];
    } else {
        labelId = context.newLabelId();
        labelPool[identifier] = labelId;
    }
    context.ir.jump(labelId);
    return nullptr;
}

// jump_statement -> CONTINUE ';'
// (JumpStatement -> Continue SimicolonSingle)
IRValuePtr JumpStatement2::GenerateIR(Context &context) {
    auto blockPtr = context.blockStack.back();
    if (blockPtr->continuable) {
        context.ir.jump(blockPtr->continueLabel);
    } else {
        context.error("This scope does not support continue.");
    }
    return nullptr;
}

// jump_statement -> BREAK ';'
// (JumpStatement -> Break SimicolonSingle)
IRValuePtr JumpStatement3::GenerateIR(Context &context) {
    auto blockPtr = context.blockStack.back();
    if (blockPtr->breakable) {
        context.ir.jump(blockPtr->breakLabel);
    } else {
        context.error("This scope does not support break.");
    }
    return nullptr;
}

// jump_statement -> RETURN ';'
// (JumpStatement -> Return SimicolonSingle)
IRValuePtr JumpStatement4::GenerateIR(Context &context) {
    FunctionValuePtr function = nullptr;
    for (auto i = context.blockStack.size() - 1; i >= 0; i--) {
        BlockPtr blockPtr = context.blockStack[i];
        function = std::static_pointer_cast<FunctionValue>(blockPtr);
        if (function != nullptr) {
            break;
        }
    }
    if (function != nullptr) {
        if (function->returnType != Type::TYPE_VOID) {
            context.error(std::string("Function expected ") +
                          TypeToStr[function->returnType] + " as return type but void is returned.");
        }
        context.ir.returnValue(nullptr);
    } else {
        context.error("This scope does not support return value.");
    }
    return nullptr;
}

// jump_statement -> RETURN expression ';'
// (JumpStatement -> Return Expression SimicolonSingle)
IRValuePtr JumpStatement5::GenerateIR(Context &context) {
    FunctionValuePtr function = nullptr;
    for (auto i = context.blockStack.size() - 1; i >= 0; i--) {
        BlockPtr blockPtr = context.blockStack[i];
        function = std::static_pointer_cast<FunctionValue>(blockPtr);
        if (function != nullptr) {
            break;
        }
    }
    if (function != nullptr) {
        // TODO: check return value from expression
        auto res = this->expressionAst2->GenerateIR(context);
        if (function->returnType != res->type) {
            context.error(std::string("Function expected ")
                          + TypeToStr[function->returnType] + " as return type but "
                          + TypeToStr[res->type] + " is returned.");
        }
        context.ir.returnValue(res);
    } else {
        context.error("This scope does not support return value.");
    }
    return nullptr;
}

