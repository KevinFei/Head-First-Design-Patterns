#include "AbstractDuckFactory.h"
#include "Quackable.h"

Quackable* DuckFactory::createMallardDuck()
{
    return new MallardDuck();
}

Quackable* DuckFactory::createRedheadDuck()
{
    return new RedheadDuck();
}

Quackable* DuckFactory::createDuckCall()
{
    return new DuckCall();
}

Quackable* DuckFactory::createRubberDuck()
{
    return new RubberDuck();
}

Quackable* CountingDuckFactory::createMallardDuck()
{
    return new QuackCounter(new MallardDuck());
}

Quackable* CountingDuckFactory::createRedheadDuck()
{
    return new QuackCounter(new RedheadDuck());
}

Quackable* CountingDuckFactory::createDuckCall()
{
    return new QuackCounter(new DuckCall());
}

Quackable* CountingDuckFactory::createRubberDuck()
{
    return new QuackCounter(new RubberDuck());
}


