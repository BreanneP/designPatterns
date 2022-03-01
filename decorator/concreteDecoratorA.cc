#include "concreteDecoratorA.h"

ConcreteDecoratorA::ConcreteDecoratorA(Component* component) : Decorator(component) {}

std::string ConcreteDecoratorA::Operation() const {
    return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
}
