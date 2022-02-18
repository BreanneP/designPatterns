#include "abstractFactory.h"
#include "abstractProductA.h"
#include "abstractProductB.h"
#include "concreteProductA1.h"
#include "concreteProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
    public:
        AbstractProductA *CreateProductA() const {
            return new ConcreteProductA1();
        }
        AbstractProductB *CreateProductB() const {
            return new ConcreteProductB1();
        }
};