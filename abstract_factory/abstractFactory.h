#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "abstractProductA.h"
#include "abstractProductB.h"

class AbstractFactory {
    public:
        virtual AbstractProductA *CreateProductA() const = 0;
        virtual AbstractProductB *CreateProductB() const = 0;
};

#endif