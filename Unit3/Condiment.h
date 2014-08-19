#ifndef __CONDIMENT_H__
#define __CONDIMENT_H__

#include <string>

#include "Beverage.h"

using namespace std;

class CondimentDecorator: public Beverage
{
protected:
    Beverage *beverage;

public:
    virtual ~CondimentDecorator(){}
    virtual string getDescription() = 0;
};

class Mocha: public CondimentDecorator
{
public:
    Mocha(Beverage *beverage);
    string getDescription();
    double cost();
};

class Soy: public CondimentDecorator
{
public:
    Soy(Beverage *beverage);
    string getDescription();
    double cost();
};

class Whip: public CondimentDecorator
{
public:
    Whip(Beverage *beverage);
    string getDescription();
    double cost();
};

#endif

