#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

class Component {
    public:
        virtual ~Component();
        virtual std::string Operation() const = 0;
};

#endif