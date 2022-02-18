#include "strategy.h"
#include "concreteStrategyB.h"
#include <iostream>

std::string ConcreteStrategyB::VirtualFunction() {
    std::string result = "Strategy B";
    return result;
}
