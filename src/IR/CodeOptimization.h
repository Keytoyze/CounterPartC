//
// Created by Henry Little on 2020/6/7.
//

#ifndef CPC_CODEOPTIMIZATION_H
#define CPC_CODEOPTIMIZATION_H

#include "value.h"
#include <cmath>
#define EPSILON 1e-5

// remove redundant code caused by equality expression
// in if statement
#define UNREACHABLE_CODE_FLAG 0x1


class CodeOptimization {
public:
    static void valueAssignment(const IRValuePtr& lval, const IRValuePtr& rval);
    static void evalEqualityExpression(
            const IRValuePtr& lval,
            const IRValuePtr& rval,
            const IRValuePtr& res,
            bool isEqual = true
    );
};


#endif //CPC_CODEOPTIMIZATION_H
