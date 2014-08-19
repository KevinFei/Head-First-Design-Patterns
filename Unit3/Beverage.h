#ifndef __BEVERAGE_H__
#define __BEVERAGE_H__

#include <string>

using namespace std;

class Beverage
{
protected:
    string description;

public:
    Beverage();
    virtual ~Beverage(){}
    virtual string getDescription();
    virtual double cost() = 0;
};

class Espresso: public Beverage
{
public:
    Espresso();
    double cost();
};

class HouseBlend: public Beverage
{
public:
    HouseBlend();
    double cost();
};

class DarkRoast: public Beverage
{
public:
    DarkRoast();
    double cost();
};

class Decat: public Beverage
{
public:
    Decat();
    double cost();
};

#endif

