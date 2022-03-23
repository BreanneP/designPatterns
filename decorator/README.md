# Decorator Pattern

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/decorator
```

3. Compile the program using Make
```
make
```

4. Run the program
```
./main
```

5. The output should look like the following
```
Client: I've got a simple component:
RESULT: ConcreteComponent

Client: Now I've got a decorated component:
RESULT: ConcreteDecoratorB(ConcreteDecoratorA(ConcreteComponent))
```

## Description of the Decorator Pattern
* Structural pattern
* Essentially a wrapper
    * Object that can be linked with some target object
    * Contains the same methods as the target and gives the target all the requests that wrapper receives
* Attach new behaviors to an object by placing the object inside special wrapper objects that contain the new behaviors

## Pros of this Design
* extend behavior without making a new subclass
* add/remove functionality during runtime
* combination of several behaviors with multiple decorators
* Single Responsibility Principle

## Parts of this Design
* Component
    * declares the common interface for both wrappers and wrapped objects
* Concrete Component
    * class of objects being wrapped
    * defines basic behavior, which can be altered by decorators
* Base Decorator
    * has a field for referencing a wrapped object
    * the field's type should be declared as the component interface so it can contain both concrete components and decorators
    * delegates all operations to the wrapped objects
* Concrete Decorators
    * define extra behaviors that can be added to components dynamically
    * override methods of the base decorator and execute their behavior either before or after calling the parent method
* Client
    * can wrap components in multiple layers of decorators, as long as it works with all objects via the component interface

## UML Design

![Alt text](DecoratorPattern.png?raw=true "Title") 


## Bad Solution

![Alt text](GoodExample.png?raw=true "Title") 


## Good Solution Using Decorator Pattern

![Alt text](BadExample.png?raw=true "Title") 
