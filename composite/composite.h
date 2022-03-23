#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <list>

class Composite : public Component {
    protected:
        std::list<Component *> children_;
    public:
        void Add(Component *component);
        void Remove(Component *component);
        bool IsComposite() const;
        std::string Operation() const;
};

#endif