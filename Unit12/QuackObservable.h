#ifndef __QUACKOBSERVABLE_H__
#define __QUACKOBSERVABLE_H__

#include <vector>

using namespace std;

class Observer;

class QuackObservable
{
public:
    virtual ~QuackObservable(){}
    virtual void registerObserver(Observer *observer) = 0;
    virtual void notifyObservers() = 0;
};

class Observable: public QuackObservable
{
    vector<Observer*> observers;
    QuackObservable *duck;

public:
    Observable(QuackObservable *duck);
    void registerObserver(Observer *observer);
    void notifyObservers();
};

#endif

