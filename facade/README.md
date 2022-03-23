# Facade Pattern

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/facade
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
Facade initializes subsystems:
Subsystem1: Ready!
Subsystem2: Get ready!
Facade orders subsystems to perform the action:
Subsystem1: Go!
Subsystem2: Fire!
```

## Parts of this Design
* Facade
    * provides convenient access to a particular part of the subsystem's functionality
    * it knows where to direct the client's request and how to operate all the moving parts
* Additional Facade
    * can be created to prevent polluting a single facade with unrelated features that might make it yet another complex structure
    * can be used by both clients and other facades
* Complex Subsystem
    * consists of dozens of various objects
    * to make them all do something meaningful, you have to dive deep into the subsystem's implementation details, such as initializing objects in the correct order and supplying them with data in the proper format
    * they aren't aware of the facade's existence
    * they operate within the system and work with each other directly
* Client
    * uses the facade instead of calling the subsystem objects directly

## UML Design

![Alt text](FacadePattern.png?raw=true "Title") 
