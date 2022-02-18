#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

class Context {
    private:
        Strategy *strategy_;
    public:
        Context(Strategy *strategy);
        ~Context();
        void set_strategy(Strategy *strategy);
        void UseStrategy();
};

#endif