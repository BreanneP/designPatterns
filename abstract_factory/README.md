# Abstract Factory

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/abstract_factory
```

3. Compile the program using Make (ignore the warnings)
```
make
```

4. Run the program
```
./main
```

5. The output should look like the following
```
Client: Testing client code with the first factory type:
The result of the product B1.
The result of the B1 collaborating with ( The result of the product A1. )

Client: Testing the same client code with the second factory type:
The result of the product B2.
The result of the B2 collaborating with ( The result of the product A2. )
```


## Parts of this Design
  * Abstract Products
    * declare interfaces for a set of distinct but related products which make up a product family
  * Concrete Products
    * various implementations of abstract products, grouped by varients.
    * each abstract product must be implemented in all given variants
  * Abstract Factory
    * interface declares a set of methods for creating each of the abstract products
  * Concrete Factories
    * implement creation methods of the abstract factory
    * each concrete factory corresponds to a specific variant of products and creates only those product variants

## UML Design

![Alt text](AbstractFactory.png?raw=true "Title") 