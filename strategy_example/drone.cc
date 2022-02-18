#include <iostream>
#include "drone.h"

Drone::Drone(Movement *strategy) {
    strategy_ = strategy;
}

Drone::~Drone() {
    delete this->strategy_;
}

void Drone::set_strategy(Movement *strategy) {
    delete this->strategy_;
    this->strategy_ = strategy;
}

void Drone::UseStrategy() {
    std::string result = this->strategy_->Move();
    std::cout << result << std::endl;
}
