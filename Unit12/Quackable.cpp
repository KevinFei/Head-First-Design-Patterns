#include <iostream>

#include "Quackable.h"

using namespace std;

MallardDuck::MallardDuck()
{
    observable = new Observable(this);
}

MallardDuck::~MallardDuck()
{
    delete observable;
}

void MallardDuck::quack()
{
    cout << "Quack" << endl;
    notifyObservers();
}

void MallardDuck::registerObserver(Observer *observer)
{
    observable->registerObserver(observer);
}

void MallardDuck::notifyObservers()
{
    observable->notifyObservers();
}

RedheadDuck::RedheadDuck()
{
    observable = new Observable(this);
}

RedheadDuck::~RedheadDuck()
{
    delete observable;
}

void RedheadDuck::quack()
{
    cout << "Quack" << endl;
    notifyObservers();
}

void RedheadDuck::registerObserver(Observer *observer)
{
    observable->registerObserver(observer);
}

void RedheadDuck::notifyObservers()
{
    observable->notifyObservers();
}

DuckCall::DuckCall()
{
    observable = new Observable(this);
}

DuckCall::~DuckCall()
{
    delete observable;
}

void DuckCall::quack()
{
    cout << "Kwak" << endl;
    notifyObservers();
}

void DuckCall::registerObserver(Observer *observer)
{
    observable->registerObserver(observer);
}

void DuckCall::notifyObservers()
{
    observable->notifyObservers();
}

RubberDuck::RubberDuck()
{
    observable = new Observable(this);
}

RubberDuck::~RubberDuck()
{
    delete observable;
}

void RubberDuck::quack()
{
    cout << "Squeak" << endl;
    notifyObservers();
}

void RubberDuck::registerObserver(Observer *observer)
{
    observable->registerObserver(observer);
}

void RubberDuck::notifyObservers()
{
    observable->notifyObservers();
}

void Goose::honk()
{
    cout << "Honk" << endl;
}

int QuackCounter::numberOfQuacks = 0;

QuackCounter::QuackCounter(Quackable *duck)
{
    this->duck = duck;
}

void QuackCounter::quack()
{
    duck->quack();
    numberOfQuacks++;
}

int QuackCounter::getQuacks()
{
    return numberOfQuacks;
}

void QuackCounter::registerObserver(Observer *observer)
{
    duck->registerObserver(observer);
}

void QuackCounter::notifyObservers()
{
    duck->notifyObservers();
}

void Flock::add(Quackable *quacker)
{
    quackers.push_back(quacker);
}

void Flock::quack()
{
    vector<Quackable*>::iterator iter;
    for(iter = quackers.begin();
            iter != quackers.end();
            iter++)
    {
        (*iter)->quack();
    }
}

void Flock::registerObserver(Observer *observer)
{
    vector<Quackable*>::iterator iter;
    for(iter = quackers.begin();
            iter != quackers.end();
            iter++)
    {
        (*iter)->registerObserver(observer);
    }
}

void Flock::notifyObservers()
{
}

