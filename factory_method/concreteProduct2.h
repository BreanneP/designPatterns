#ifndef CONCRETEPRODUCT2_H
#define CONCRETEPRODUCT2_H

#include <iostream>
#include "product.h"

class ConcreteProduct2 : public Product {
    public:
        std::string Operation() const;
};

#endif