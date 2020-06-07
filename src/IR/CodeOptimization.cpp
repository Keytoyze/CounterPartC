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
    } else if (lval->type == Type::TYPE_DOUBLE) {
        if (std::abs(lval->constVal.doubleVal - rval->constVal.doubleVal) < EPSILON) {
            compareEqaul = true;
        }
    }
    res->constVal.intVal = (isEqual == compareEqaul) ? 1 : 0;
}

void
CodeOptimization::evalMultiplicativeExpression(
        const IRValuePtr &lval,
        const IRValuePtr &rval,
        const IRValuePtr &res,
        const Context &context,
        bool isDivide
) {
    if (lval->isConstant && rval->isConstant) {
        if (lval->type == Type::TYPE_INT) {
            if (isDivide && rval->constVal.intVal == 0) {
                context.error("Divide by 0 (INT) !!");
            } else {
                res->constVal.intVal =
                        isDivide
                        ? lval->constVal.intVal / rval->constVal.intVal
                        : lval->constVal.intVal * rval->constVal.intVal;
            }
        } else if (lval->type == Type::TYPE_DOUBLE) {
            if (isDivide && std::abs(rval->constVal.doubleVal) < EPSILON) {
                context.error("Divide by 0 (DOUBLE) !!");
            } else {
                res->constVal.doubleVal =
                        isDivide
                        ? lval->constVal.doubleVal / rval->constVal.doubleVal
                        : lval->constVal.doubleVal * rval->constVal.doubleVal;
            }
        }
    }
}

void CodeOptimization::evalAdditiveExpression(
        const IRValuePtr &lval,
        const IRValuePtr &rval,
        const IRValuePtr &res,
        bool isSubtract
) {
    if (lval->isConstant && rval->isConstant) {
        if (lval->type == Type::TYPE_INT) {
            res->constVal.intVal =
                    isSubtract
                    ? lval->constVal.intVal - rval->constVal.intVal
                    : lval->constVal.intVal + rval->constVal.intVal;
        } else if (lval->type == Type::TYPE_DOUBLE) {
            res->constVal.doubleVal =
                    isSubtract
                    ? lval->constVal.doubleVal - rval->constVal.doubleVal
                    : lval->constVal.doubleVal + rval->constVal.doubleVal;
        }
    }
}


