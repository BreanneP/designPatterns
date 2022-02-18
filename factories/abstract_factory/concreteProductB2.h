#ifndef CONCRETEPRODUCTB2_H
#define CONCRETEPRODUCTB2_H

#include <iostream>
#include "abstractProductA.h"
#include "abstractProductB.h"

class ConcreteProductB2 : public AbstractProductB {
    public:
        std::string UsefulFunctionB() const;
        std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const;
};

#endif