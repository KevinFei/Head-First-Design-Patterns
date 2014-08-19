#ifndef __QUACKABLE_H__
#define __QUACKABLE_H__

#include "QuackObservable.h"

#include <vector>

using namespace std;

class Quackable: public QuackObservable
{
public:
    virtual ~Quackable(){}
    virtual void quack() = 0;
};

class MallardDuck: public Quackable
{
    Observable *observable;
public:
    MallardDuck();
    ~MallardDuck();
    void quack();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

class RedheadDuck: public Quackable
{
    Observable *observable;
public:
    RedheadDuck();
    ~RedheadDuck();
    void quack();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

class DuckCall: public Quackable
{
    Observable *observable;
public:
    DuckCall();
    ~DuckCall();
    void quack();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

class RubberDuck: public Quackable
{
    Observable *observable;
public:
    RubberDuck();
    ~RubberDuck();
    void quack();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

class Goose
{
public:
    void honk();
};

class QuackCounter: public Quackable
{
    Quackable *duck;
    static int numberOfQuacks;

public:
    QuackCounter(Quackable *duck);
    void quack();
    static int getQuacks();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

class Flock: public Quackable
{
    vector<Quackable*> quackers;

public:
    void add(Quackable *quacker);
    void quack();
    void registerObserver(Observer *observer);
    void notifyObservers();
};

#endif

