# Rule of Three

## Declarations
* Destructor
    * ~ClassName::ClassName() {}
* Copy Constructor
    * ClassName::ClassName(const ClassName& objectName) {}
* Copy Assignment Operator
    * ClassName& ClassName::operator=(const ClassName& objectName) {}

## Descriptions
* Destructor
    * A special class member function that is called automatically when a variable of that class type is destroyed
* Copy Constructor
    * A constructor that is automatically called when an object of that class type is passed by value to a function and when an object is initialized by copying another object during declaration
    * If you do not define a copy constructor, the compiler implicitly defines a constructor with statements that perform a memberwise copy, which simply copies each member. This is called a shallow copy and works fine if there are no object members.
* Copy Assignment Operator
    * An overloaded function of the = operator