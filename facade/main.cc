#include "facade.h"
#include <iostream>

void ClientCode(Facade *facade) {
  std::cout << facade->Operation();
}

int main() {
  Subsystem1 *subsystem1 = new Subsystem1;
  Subsystem2 *subsystem2 = new Subsystem2;
  Facade *facade = new Facade(subsystem1, subsystem2);
  ClientCode(facade);

  delete facade;

  return 0;
}