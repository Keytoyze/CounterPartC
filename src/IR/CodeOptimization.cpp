//
// Created by Henry Little on 2020/6/7.
//

#include "CodeOptimization.h"


void CodeOptimization::valueAssignment(const IRValuePtr &lval, const IRValuePtr &rval) {
    lval->isConstant = rval->isConstant;
    // type should be checked before
    if (lval->isConstant) {
        lval->constVal = rval->constVal;
    }
}

void CodeOptimization::evalEqualityExpression(
        const IRValuePtr &lval,
        const IRValuePtr &rval,
        const IRValuePtr &res,
        bool isEqual
) {
    // res is bool type, we set const val int
    // 0 -> false
    // 1 -> true
    res->isConstant = true;
    bool compareEqaul = false;
    if (lval->type == Type::TYPE_INT) {
        if (lval->constVal.intVal == rval->constVal.intVal) {
            compareEqaul = true;
        }
    } else if (lval -> type == Type::TYPE_DOUBLE) {
        if (std::abs(lval->constVal.doubleVal - rval->constVal.doubleVal) < EPSILON) {
            compareEqaul = true;
        }
    }
    res->constVal.intVal = (isEqual == compareEqaul) ? 1 : 0;
}


