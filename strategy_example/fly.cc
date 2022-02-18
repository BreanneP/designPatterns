#include "movement.h"
#include "fly.h"
#include <iostream>

std::string ConcreteStrategyFly::Move() {
    std::string result = "I am flying";
    return result;
}
