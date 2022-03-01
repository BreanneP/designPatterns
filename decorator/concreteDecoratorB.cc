#include "concreteDecoratorB.h"

ConcreteDecoratorB::ConcreteDecoratorB(Component* component) : Decorator(component) {}

std::string ConcreteDecoratorB::Operation() const {
    return "ConcreteDecoratorB(" + Decorator::Operation() + ")";
}
