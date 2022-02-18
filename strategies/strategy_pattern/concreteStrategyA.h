#include "strategy.h"
#include <iostream>

class ConcreteStrategyA : public Strategy {
    public:
        std::string VirtualFunction();
};