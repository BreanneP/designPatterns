#ifndef CREATOR_H
#define CREATOR_H

#include <iostream>
#include "product.h"

class Creator {
    public:
        virtual ~Creator() ;
        virtual Product* FactoryMethod() const = 0;
        std::string SomeOperation() const;
};

#endif