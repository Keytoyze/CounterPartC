//
// Created by Henry Little on 2020/6/7.
//

#ifndef CPC_CODEOPTIMIZATION_H
#define CPC_CODEOPTIMIZATION_H

#include "value.h"
#include "context.h"
#include <cmath>
#define EPSILON 1e-5

// remove redundant code caused by equality expression
// in if statement
#define UNREACHABLE_CODE_FLAG ((unsigned long)0x1)
#define CONSTANT_FOLDING_FLAG (((unsigned long)0x1) << (unsigned int)1)


class CodeOptimization {
public:
    static void valueAssignment(const IRValuePtr& lval, const IRValuePtr& rval);
    static void evalEqualityExpression(
            const IRValuePtr& lval,
            const IRValuePtr& rval,
            const IRValuePtr& res,
            bool isEqual = true
    );
    static void evalMultiplicativeExpression(
            const IRValuePtr& lval,
            const IRValuePtr& rval,
            const IRValuePtr& res,
            const Context &context,
            bool isDivide = false
            );
    static void evalAdditiveExpression(
            const IRValuePtr& lval,
            const IRValuePtr& rval,
            const IRValuePtr& res,
            bool isSubtract = false
            );
};


#endif //CPC_CODEOPTIMIZATION_H
