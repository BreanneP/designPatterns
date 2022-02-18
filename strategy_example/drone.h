#ifndef DRONE_H
#define DRONE_H

#include "movement.h"

class Drone {
    private:
        Movement *strategy_;
    public:
        Drone(Movement *strategy);
        ~Drone();
        void set_strategy(Movement *strategy);
        void UseStrategy();
};

#endif