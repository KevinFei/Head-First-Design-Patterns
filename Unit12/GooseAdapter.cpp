#include "GooseAdapter.h"

GooseAdapter::GooseAdapter(Goose *goose)
{
    this->goose = goose;
    observable = new Observable(this);
}

GooseAdapter::~GooseAdapter()
{
    delete observable;
}

void GooseAdapter::quack()
{
    goose->honk();
    notifyObservers();
}

void GooseAdapter::registerObserver(Observer *observer)
{
    observable->registerObserver(observer);
}

void GooseAdapter::notifyObservers()
{
    observable->notifyObservers();
}

