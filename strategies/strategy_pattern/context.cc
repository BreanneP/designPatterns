#include <iostream>
#include "context.h"

Context::Context(Strategy *strategy) {
    strategy_ = strategy;
}

Context::~Context() {
    delete this->strategy_;
}

void Context::set_strategy(Strategy *strategy) {
    delete this->strategy_;
    this->strategy_ = strategy;
}

void Context::UseStrategy() {
    std::string result = this->strategy_->VirtualFunction();
    std::cout << result << std::endl;
}
