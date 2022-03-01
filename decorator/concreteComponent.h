#include "component.h"
#include <iostream>

class ConcreteComponent : public Component {
    public:
        std::string Operation() const;
};