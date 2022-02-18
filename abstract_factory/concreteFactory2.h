#include "abstractFactory.h"
#include "abstractProductA.h"
#include "abstractProductB.h"
#include "concreteProductA2.h"
#include "concreteProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
    public:
        AbstractProductA *CreateProductA() const {
            return new ConcreteProductA2();
        }
        AbstractProductB *CreateProductB() const {
            return new ConcreteProductB2();
        }
};