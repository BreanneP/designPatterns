#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product {
    public:
        virtual ~Product();
        virtual std::string Operation() const = 0;
};

#endif