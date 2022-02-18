# Factory Method

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/factory_method
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
App: Launched with the ConcreteCreator1.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the ConcreteProduct1}

App: Launched with the ConcreteCreator2.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the ConcreteProduct2}
```


## Parts of this Design
  * Product
    * declares the interface, which is common to all objects that can be produced by the creator and its subclasses
  * Concrete Products
    * different implementations of the product interface
  * Creator
    * declares the factory method that returns new product objects
    * It's important that the return type of this method matches the product interface
  * Concrete Creators
    * override the base factory method so it returns a different type of product

## UML Design

![Alt text](FactoryMethod.png?raw=true "Title") 