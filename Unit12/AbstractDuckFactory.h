#ifndef __ABSTRACTDUCKFACTORY_H__
#define __ABSTRACTDUCKFACTORY_H__

class Quackable;

class AbstractDuckFactory
{
public:
    virtual ~AbstractDuckFactory(){}
    virtual Quackable* createMallardDuck() = 0;
    virtual Quackable* createRedheadDuck() = 0;
    virtual Quackable* createDuckCall() = 0;
    virtual Quackable* createRubberDuck() = 0;
};

class DuckFactory: public AbstractDuckFactory
{
public:
    Quackable* createMallardDuck();
    Quackable* createRedheadDuck();
    Quackable* createDuckCall();
    Quackable* createRubberDuck();
};

class CountingDuckFactory: public AbstractDuckFactory
{
public:
    Quackable* createMallardDuck();
    Quackable* createRedheadDuck();
    Quackable* createDuckCall();
    Quackable* createRubberDuck();
};

#endif

