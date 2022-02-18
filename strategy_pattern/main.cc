#include "context.h"
#include "concreteStrategyA.h"
#include "concreteStrategyB.h"
#include <iostream>

void ClientCode() {
    Context *c = new Context(new ConcreteStrategyA);
    c->UseStrategy();
    std::cout << std::endl;
    c->set_strategy(new ConcreteStrategyB);
    c->UseStrategy();
    delete c;
}

int main() {
    ClientCode();
    return 0;
}