#include "decorator.h"
#include "component.h"

class ConcreteDecoratorB : public Decorator {
    public:
        ConcreteDecoratorB(Component* component);
        std::string Operation() const;
};