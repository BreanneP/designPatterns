#ifndef ABSTRACTPRODUCTB_H
#define ABSTRACTPRODUCTB_H

#include <iostream>
#include "abstractProductA.h"

class AbstractProductB {
    public:
        virtual ~AbstractProductB() {};
        virtual std::string UsefulFunctionB() const = 0;
        virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};

#endif