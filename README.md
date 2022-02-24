# Design Patterns

## Sources
Examples taken from [refactoring.guru](refactoring.guru) and UML diagrams made from [LucidChart](lucid.app)

## Generic Design Patterns

### Coupling/Cohesion
* Coupling: objects know about each other
* Cohesion: objects with similar goals work together
* We want to build systems with loose coupling and high cohesion

![Alt text](coupling.png?raw=true "Title") 

### SOLID Principles
* Single Responsibility Principle
    * One class has one job and therefore only one reason to change
* Open Closed Principle
    * Open to extension, closed to modification
* Liskov Substitution Principle
    * Let f(x) be a property of objects x of type T. Then f(y) should be a property for objects y of type S where S is a subtype of T
* Interface Segregation Principle
    * No useless code
* Dependency Inversion Principle
    * Every object should depend on an abstract object not a concrete one
    * No one should be able to instantiate a base class, like Shape