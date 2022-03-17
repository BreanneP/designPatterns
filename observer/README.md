# Observer Pattern

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/observer
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
Hi, I'm the Observer "1".
Hi, I'm the Observer "2".
Hi, I'm the Observer "3".
There are 3 observers in the list.
Observer "1": a new message is available --> Hello World! :D
Observer "2": a new message is available --> Hello World! :D
Observer "3": a new message is available --> Hello World! :D
Observer "3" removed from the list.
There are 2 observers in the list.
Observer "1": a new message is available --> The weather is hot today! :p
Observer "2": a new message is available --> The weather is hot today! :p
Hi, I'm the Observer "4".
Observer "2" removed from the list.
Hi, I'm the Observer "5".
There are 3 observers in the list.
Observer "1": a new message is available --> My new car is great! ;)
Observer "4": a new message is available --> My new car is great! ;)
Observer "5": a new message is available --> My new car is great! ;)
Observer "5" removed from the list.
Observer "4" removed from the list.
Observer "1" removed from the list.
Goodbye, I was the Observer "5".
Goodbye, I was the Observer "4".
Goodbye, I was the Observer "3".
Goodbye, I was the Observer "2".
Goodbye, I was the Observer "1".
Goodbye, I was the Subject.
```

## Description of the Observer Pattern
* Behavior design pattern
    * define a mechanism to notify multiple objects about any changes/events that happen to the object that they're observing
* Use this pattern when some objects need to observe others but only for a limited time

## Terminology
* Subject/publisher
    * object that has the interesting state
* Subscribers
    * all other objects that want to keep track of the publisher's state changes 

## Pros of this Design
* open/closed principle
* able to make relations between objects at runtime

## Parts of this Design
* Publisher
    * issues events of interest to other objects
    * these events occur when the publisher changes its state or executes some behaviors
    * contains a subscription infrastructure that lets new subscribers join and current subscribers to leave the list
* Subscriber
    * declares the notification interface
    * in most cases, it consists of a single update method
        * the method may have several parameters that let the publisher pass some event details along with the update
* Concrete Subscribers
    * perform some actions in response to notifications issued by the publisher
    * all of these classes must implement the same interface so the publisher isn't coupled to concrete classes
* Client
    * creates publisher and subscriber objects separately and then registers subscribers for publisher updates

## UML Design

![Alt text](ObserverPattern.png?raw=true "Title") 

## Example UML

![Alt text](ObserverExample.png?raw=true "Title") 
