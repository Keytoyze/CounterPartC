#include "ast/ast.h"
#include <iostream>

// declaration -> declaration_specifiers ';'
// (Declaration -> DeclarationSpecifiers SimicolonSingle)
IRValuePtr Declaration1::GenerateIR(Context& context) {
    // TODO: implement me!
    this->declarationSpecifiersAst1->GenerateIR(context);
    std::cerr << "Declaration1 Not implemented!" << std::endl;
    return nullptr;
}

// declaration -> declaration_specifiers init_declarator_list ';'
// (Declaration -> DeclarationSpecifiers InitDeclaratorList SimicolonSingle)
IRValuePtr Declaration2::GenerateIR(Context& context) {
    if (this->declarationType == DeclarationType::UNKNOWN) {
        context.error("Unknown type of declaration!!!!!");
        return nullptr;
    }
    this->declarationSpecifiersAst1->GenerateIR(context);
    this->initDeclaratorListAst2->GenerateIR(context);
    this->specifierType = declarationSpecifiersAst1->specifierType;
    if (this->declarationType == DeclarationType::FUNCTION) {
        // function declaration
        // TODO: fill parameterList
    } else if (this->declarationType == DeclarationType::VARIABLE) {
        // variable declaration
        // assign value
        std::cout << "Insert variable" << std::endl;
        std::cout << "type: " << TypeToStr[(int)this->specifierType] << std::endl;
        
        auto variableInitPair = this->initDeclaratorListAst2->list;
        for (auto it = variableInitPair->begin(); it != variableInitPair->end(); it++) {
		    std::cout << "identifier: " << (*it)->identifier << std::endl;
            auto initializerValue = (*it)->initializerValue;
            if (initializerValue == nullptr) {
                std::cout << "No initialize value!" << std::endl;
            } else {
                std::cout << "Initialize value count: " << initializerValue->size() << std::endl;
            }
        }

        context.blockStack.back();

        std::cout << "=======" << std::endl;
    }

    return nullptr;
}

