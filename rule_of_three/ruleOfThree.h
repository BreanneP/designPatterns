#include <iostream>

class RuleOfThree {
    public:
        // constructors and destructors
        RuleOfThree();
        ~RuleOfThree();
        RuleOfThree(const RuleOfThree& obj);
        RuleOfThree& operator=(const RuleOfThree& obj);

        // other functions
        void SetDataObject(const int setVal);
        int GetDataObject() const;
        void SomeFunction(RuleOfThree obj);

    private:
        int* dataObject;
};