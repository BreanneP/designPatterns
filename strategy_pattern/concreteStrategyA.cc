#include "strategy.h"
#include "concreteStrategyA.h"
#include <iostream>

std::string ConcreteStrategyA::VirtualFunction() {
    std::string result = "Strategy A";
    return result;
}