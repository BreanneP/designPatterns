# Factory Pattern

## Facade Definition
* A facade hides complex information behind an interface
* This is bad to have all logic in one interface class
* That means it has high coupling and low cohesion

## Solution: Factory Pattern
* Factories handle the details of object creation
* The creation of objects is in one place which allows other classes to create their own objects
* Allows the class that uses the factory to not have to differentiate between what type of object to create

## Types of Factories
* Simple Factory
    * Allows interfaces to create objects without showing logic to the client
* Abstract Factory
    * Creates an instance of several families of classes
* Factory Method
    * Creates an instance of several derived classes

## How to Decide Which Factory to Use
![Alt text](Flowchart.png?raw=true "Title") 

## Example of an Abstract Factory
![Alt text](AbstractFactory.png?raw=true "Title") 

## Example of a Factory Pattern
![Alt text](FactoryMethod.png?raw=true "Title") 

