#include "strategy.h"
#include <iostream>

class ConcreteStrategyB : public Strategy {
    public:
        std::string VirtualFunction();
};