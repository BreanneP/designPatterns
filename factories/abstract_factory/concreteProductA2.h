#ifndef CONCRETEPRODUCTA2_H
#define CONCRETEPRODUCTA2_H

#include <iostream>
#include "abstractProductA.h"

class ConcreteProductA2 : public AbstractProductA {
    public:
        std::string UsefulFunctionA() const;
};

#endif