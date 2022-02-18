#include "drone.h"
#include "fly.h"
#include "walking.h"
#include <iostream>

void ClientCode() {
    Drone *d = new Drone(new ConcreteStrategyFly);
    d->UseStrategy();
    std::cout << std::endl;
    d->set_strategy(new ConcreteStrategyWalking);
    d->UseStrategy();
    delete d;
}

int main() {
    ClientCode();
    return 0;
}