#ifndef __GOOSEADAPTER_H__
#define __GOOSEADAPTER_H__

#include "Quackable.h"

class GooseAdapter: public Quackable
{
    Observable *observable;
    Goose *goose;

public:
    GooseAdapter(Goose *goose);
    ~GooseAdapter();
    void quack();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

#endif

