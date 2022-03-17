#ifndef SUBJECT_H
#define SUBJECT_H

#include "isubject.h"
#include "iobserver.h"
#include <list>

class Subject : public ISubject {
    public:
        virtual ~Subject();
        void Attach(IObserver *observer);
        void Detach(IObserver *observer);
        void Notify();
        void CreateMessage(std::string message = "Empty");
        void HowManyObserver();
        void SomeBusinessLogic();

    private:
        std::list<IObserver *> list_observer_;
        std::string message_;
};

#endif