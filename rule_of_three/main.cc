#include "ruleOfThree.h"

int main() {
    // Make an object
    RuleOfThree obj1;
    obj1.SetDataObject(9);
    std::cout << "Object 1 before: " << obj1.GetDataObject() << std::endl;

    // Make another object
    RuleOfThree obj2;
    obj2.SetDataObject(10);
    std::cout << "Object 2 before: " << obj2.GetDataObject() << std::endl;
    std::cout << std::endl;

    // call copy constructor
    RuleOfThree obj3(obj2);
    std::cout << "Object 1 after: " << obj1.GetDataObject() << std::endl;
    std::cout << "Object 2 after: " << obj2.GetDataObject() << std::endl;
    std::cout << "Object 3 after: " << obj3.GetDataObject() << std::endl;
    std::cout << std::endl;

    // call copy constructor again
    RuleOfThree obj4 = obj2;
    std::cout << "Object 1 after: " << obj1.GetDataObject() << std::endl;
    std::cout << "Object 2 after: " << obj2.GetDataObject() << std::endl;
    std::cout << "Object 3 after: " << obj3.GetDataObject() << std::endl;
    std::cout << "Object 4 after: " << obj4.GetDataObject() << std::endl;
    std::cout << std::endl;

    // call copy constructor again
    obj1.SomeFunction(obj2);   
    std::cout << "Object 1 after: " << obj1.GetDataObject() << std::endl; 
    std::cout << "Object 2 after: " << obj2.GetDataObject() << std::endl;
    std::cout << "Object 3 after: " << obj3.GetDataObject() << std::endl;
    std::cout << "Object 4 after: " << obj4.GetDataObject() << std::endl;
    std::cout << std::endl; 

    // call copy assignment operator
    obj1 = obj2;
    std::cout << "Object 1 after: " << obj1.GetDataObject() << std::endl;
    std::cout << "Object 2 after: " << obj2.GetDataObject() << std::endl;
    std::cout << "Object 3 after: " << obj3.GetDataObject() << std::endl;
    std::cout << "Object 4 after: " << obj4.GetDataObject() << std::endl;
    std::cout << std::endl;

    return 0;
}