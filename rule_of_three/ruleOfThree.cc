#include "ruleOfThree.h"

RuleOfThree::RuleOfThree() {
    dataObject = new int; // allocate memory for data
    *dataObject = 0;
}

RuleOfThree::~RuleOfThree() {
    std::cout << "Destructor called" << std::endl;
    delete dataObject;
}

RuleOfThree::RuleOfThree(const RuleOfThree& obj) {
    std::cout << "Copy constructor called" << std::endl;
    dataObject = new int;
    *dataObject = *(obj.dataObject);
}

RuleOfThree& RuleOfThree::operator=(const RuleOfThree& obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj) {
        delete dataObject;
        dataObject = new int;
        *dataObject = *(obj.dataObject);
    }
    return *this;
}

void RuleOfThree::SetDataObject(const int setVal) {
    *dataObject = setVal;
}

int RuleOfThree::GetDataObject() const {
    return *dataObject;
}

void RuleOfThree::SomeFunction(RuleOfThree obj) {}