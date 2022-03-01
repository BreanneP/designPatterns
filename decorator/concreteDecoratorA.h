#include "decorator.h"
#include "component.h"

class ConcreteDecoratorA : public Decorator {
    public:
        ConcreteDecoratorA(Component* component);
        std::string Operation() const;
};