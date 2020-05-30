//
// Created by Henry Little on 2020/5/29.
//
#include "context.h"

IRValuePtr Context::newVar(Type type, bool useAddress) {
    auto newValue = std::make_shared<IRValue>();
    newValue->id = varNum++;
    newValue->type = type;
    newValue->useAddress = useAddress;
    return newValue;
}

int Context::newLabelId() {
    return labelNum++;
}

void Context::error(std::string err) {
    // TODO: print line number
    std::cerr << err << std::endl;
}

BlockPtr Context::newBlock(BlockPtr parent) {
    auto newBlock = std::make_shared<Block>();
    newBlock->breakable = parent->breakable;
    newBlock->continuable = parent->continuable;
    // newBlock->switchable = parent->switchable;
    newBlock->breakLabel = parent->breakLabel;
    newBlock->continueLabel = parent->continueLabel;
    // newBlock->switchValue = parent->switchValue;
    newBlock->parentBlock = parent;
    return newBlock;
}

Context::Context() {
    arrayNum = 0;
    varNum = 0;
    labelNum = 0;
    parsingContext = PARSING_NULL;
}

