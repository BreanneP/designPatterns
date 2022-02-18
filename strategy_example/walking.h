#include "movement.h"
#include <iostream>

class ConcreteStrategyWalking : public Movement {
    public:
        std::string Move();
};