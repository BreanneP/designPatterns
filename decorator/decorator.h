#ifndef DECORATOR_H
#define DECORATOR_H

#include "component.h"
#include <iostream>

class Decorator : public Component {
    protected:
        Component* component_;
    
    public:
        Decorator(Component* component);
        std::string Operation() const;
};

#endif