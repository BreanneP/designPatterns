#ifndef CONCRETEPRODUCTA1_H
#define CONCRETEPRODUCTA1_H

#include <iostream>
#include "abstractProductA.h"

class ConcreteProductA1 : public AbstractProductA {
    public:
        std::string UsefulFunctionA() const {
            return "The result of the product A1.";
        };
};

#endif