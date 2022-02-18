#ifndef ABSTRACTPRODUCTA_H
#define ABSTRACTPRODUCTA_H

#include <iostream>

class AbstractProductA {
    public:
        virtual ~AbstractProductA(){};
        virtual std::string UsefulFunctionA() const = 0;
};

#endif