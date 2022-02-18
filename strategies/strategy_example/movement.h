#ifndef MOVEMENT_H
#define MOVEMENT_H

#include <iostream>

class Movement {
    public:
        virtual ~Movement();
        virtual std::string Move() = 0;
};

#endif