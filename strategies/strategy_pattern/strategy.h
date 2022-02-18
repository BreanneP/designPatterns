#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>

class Strategy {
    public:
        virtual ~Strategy();
        virtual std::string VirtualFunction() = 0;
};

#endif