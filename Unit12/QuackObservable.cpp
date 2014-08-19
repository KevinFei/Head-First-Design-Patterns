#include "QuackObservable.h"
#include "Observer.h"

Observable::Observable(QuackObservable *duck)
{
    this->duck = duck;
}

void Observable::registerObserver(Observer *observer)
{
    observers.push_back(observer);
}

void Observable::notifyObservers()
{
    std::vector<Observer*>::iterator iter;
    for(iter = observers.begin();
            iter != observers.end();
            iter++)
    {
        (*iter)->update(duck);
    }
}

