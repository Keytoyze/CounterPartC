#include "constant.h"

std::ostream& Constant::write(std::ostream& sm) const {
    return sm;
}

std::ostream& IntConstant::write(std::ostream& sm) const {
    sm << value;
    return sm;
}

std::ostream& DoubleConstant::write(std::ostream& sm) const {
    sm << value;
    return sm;
}