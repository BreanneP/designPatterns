#ifndef CONCRETEPRODUCTB1_H
#define CONCRETEPRODUCTB1_H

#include <iostream>
#include "abstractProductA.h"
#include "abstractProductB.h"

class ConcreteProductB1 : public AbstractProductB {
    public:
        std::string UsefulFunctionB() const;
        std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const;
};

#endif