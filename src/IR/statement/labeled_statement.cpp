#include "ast/ast.h"
#include <iostream>

// labeled_statement -> IDENTIFIER ':' statement
// (LabeledStatement -> Identifier Colon Statement)
IRValuePtr LabeledStatement1::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// labeled_statement -> CASE constant_expression ':' statement
// (LabeledStatement -> Case ConstantExpression Colon Statement)
IRValuePtr LabeledStatement2::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

// labeled_statement -> DEFAULT ':' statement
// (LabeledStatement -> Default Colon Statement)
IRValuePtr LabeledStatement3::GenerateIR(Context& context) {
    // TODO: implement me!
    std::cerr << "Not implemented!" << std::endl;
    return nullptr;
}

