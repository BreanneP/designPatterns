#ifndef CONCRETEPRODUCT1_H
#define CONCRETEPRODUCT1_H

#include <iostream>
#include "product.h"

class ConcreteProduct1 : public Product {
    public:
        std::string Operation() const;
};

#endif