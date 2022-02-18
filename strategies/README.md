# Strategy Pattern

## Definition
* Extract out all the different algorithms into their own classes which we call strategies
* The class using the strategies is called the context
* The context should have an abstract interface between it and the strategies. This interface if the class that decides which strategy to use
* The context has a member variable of type Interface that indicates which strategy to use

## Usage
* Main reason is to be able to switch between algorithms easily even at runtime while maintaining good coding practice as well as design principles

## Example

### Problem
* Suppose we have a drone class that has a move function but there are multiple approaches to move the drone, called Movement1, Movement2, ...

### Strategy Pattern
* Have a Movement class with an abstract move function
* Have a Drone class that uses the Movement class
* Movement1, Movement2, ... are each their own classes that inherit from the Movement class

### Terms
* Movement1, Movement2, ... are the strategies
* Drone is the context
* Movement is the interface between the context and the strategies