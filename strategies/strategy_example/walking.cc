#include "movement.h"
#include "walking.h"
#include <iostream>

std::string ConcreteStrategyWalking::Move() {
    std::string result = "I am walking";
    return result;
}