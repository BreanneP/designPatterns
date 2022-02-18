# Strategy Pattern

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/strategies/strategy_pattern
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
Strategy A

Strategy B
```


## Parts of this Design
  * Context
    * maintains a reference to one of the concrete strategies and communicates with this object only via the strategy interface
  * Strategy
    * is common to all concrete strategies
    * it declares a method the context uses to excute a strategy
  * Concrete Strategies
    * implement different variations of an algorithm the context uses
  * Client
    * creates a specific strategy object and passes it to the context
    * the context exposes a setter which lets clients replace the strategy associated with the context at runtime

## UML Design

![Alt text](StrategyPattern.png?raw=true "Title") 