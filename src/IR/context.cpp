//
// Created by Henry Little on 2020/5/29.
//
#include "context.h"

IRValuePtr Context::newVar(Type type, bool useAddress, int arrayConstSize, IRValuePtr arrayVarSize) {
    auto newValue = std::make_shared<IRValue>();
    newValue->id = varNum++;
    newValue->type = type;
    newValue->useAddress = useAddress;
    if (useAddress) {
        if (arrayConstSize != -1) {
            // int a[] = {1, 2, 3}
            ir.mallocConst(newValue, Type::TYPE_INT, arrayConstSize);
        } else if (arrayVarSize != nullptr) {
            // int a[x]
            ir.malloc(newValue, Type::TYPE_INT, arrayVarSize);
        } else {
            // int *a
            ir.mallocConst(newValue, Type::TYPE_INT, 1);
        }
    } else {
        // int a
        ir.mallocConst(newValue, type, 1);
    }
    return newValue;
}

int Context::newLabelId() {
    return labelNum++;
}

void Context::error(std::string err) const {
    throw std::runtime_error(err);
}

BlockPtr Context::newBlock(BlockPtr parent) {
    auto newBlock = std::make_shared<Block>();
   if (parent != nullptr) {
       newBlock->breakable = parent->breakable;
       newBlock->continuable = parent->continuable;
       // newBlock->switchable = parent->switchable;
       newBlock->breakLabel = parent->breakLabel;
       newBlock->continueLabel = parent->continueLabel;
       // newBlock->switchValue = parent->switchValue;
   }
    return newBlock;
}

IRValuePtr Context::findVar(std::string &identifier, bool mute) {
//    auto block = blockStack.back();
//    while (block != nullptr) {
//        auto &varTable = block->varTable;
//        if (varTable.find(identifier) != varTable.end()) {
//            return varTable[identifier];
//        }
//        block = block->parentBlock;
//    }
    // traverse the block stack to find the var
    int blockcount = this->blockStack.size();
    for (int i = blockcount - 1; i >= 0; i--) {
        auto &table = blockStack[i]->varTable;
        if (table.find(identifier) != table.end()) {
            return table[identifier];
        }
    }
    if (!mute) {
        error("Cannot find identifier " + identifier);
    }
    return nullptr;
}

Context::Context(): ir(*this) {
    arrayNum = 0;
    varNum = 0;
    labelNum = 0;
    parsingContext = PARSING_NULL;

    blockStack.push_back(newBlock(nullptr));
}

IRValuePtr Context::findFunction(const std::string &functionName) {
    if (functionPool.find(functionName) != functionPool.end()) {
        IRValuePtr valuePtr = std::make_shared<IRValue>();
        valuePtr->id = -1;
        valuePtr->type = Type::TYPE_FUNCTION;
        valuePtr->content = functionName;
        return valuePtr;
    }
    return nullptr;
}

bool Context::optimizationEnabled(unsigned long flag) {
    return flag & optimization;
}

void Context::setOptimizationFlags(unsigned long flag) {
    optimization = optimization | flag;
}

