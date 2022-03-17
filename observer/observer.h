#ifndef OBSERVER_H
#define OBSERVER_H

#include "iobserver.h"
#include "subject.h"

class Observer : public IObserver {
    public:
        Observer(Subject &subject);
        virtual ~Observer();
        void Update(const std::string &message_from_subject);
        void RemoveMeFromTheList();
        void PrintInfo();

    private:
        std::string message_from_subject_;
        Subject &subject_;
        static int static_number_;
        int number_;
};

#endif