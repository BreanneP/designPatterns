#include <iostream>
#include "product.h"
#include "creator.h"
#include "concreteCreator1.h"
#include "concreteCreator2.h"

void ClientCode(const Creator& creator) {
    std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
    << creator.SomeOperation() << std::endl;
}

int main() {
    std::cout << "App: Launched with the ConcreteCreator1.\n";
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreator2.\n";
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    return 0;
}