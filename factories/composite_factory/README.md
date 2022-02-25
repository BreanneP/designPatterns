# Composite Factory

## How to Run
1. Clone the repo
```
git clone https://github.com/BreanneP/patternDesigns.git
```

2. Change into this current directory
```
cd patternDesigns/factories/composite_factory
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
RESULT: Leaf

Client: Now I've got a composite tree:
RESULT: Branch(Branch(Leaf+Leaf)+Branch(Leaf))

Client: I don't need to check the components classes even when managing the tree:
RESULT: Branch(Branch(Leaf+Leaf)+Branch(Leaf)+Leaf)
```


## Parts of this Design
* Component
    * this interface describes operations that are common to both simple and complex elements of the tree
* Client
    * works with all the elements through the component interface. As a result, the client can work in the same way with both simple or complex elements of the tree
* Leaf
    * basic element of a tree that doesn't have sub-elements
    * end up doing most of the work since they don't have anyone to delegate the work to
* Composite
    * an element that has sub-elements (leaves or other containers)
    * does not know the concrete classes of its children
    * works with sub-elements only via the component interface
    * upon receiving a request, it delegates the work to its sub-elements, processes intermediate results, and then returns the final result the client


## UML Design

![Alt text](CompositeFactory.png?raw=true "Title") 
