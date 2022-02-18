#include "movement.h"
#include <iostream>

class ConcreteStrategyFly : public Movement {
    public:
        std::string Move();
};