#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
    protected: 
        Component *parent_;
    public:
        virtual ~Component() {}
        void SetParent(Component *parent);
        Component *GetParent() const;
        virtual void Add(Component *component) {}
        virtual void Remove(Component *component) {}
        virtual bool IsComposite() const { return false; };
        virtual std::string Operation() const = 0;
};

#endif