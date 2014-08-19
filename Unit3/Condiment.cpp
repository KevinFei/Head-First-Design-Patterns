#include "Beverage.h"
#include "Condiment.h"

Mocha::Mocha(Beverage *beverage)
{
    this->beverage = beverage;
}

string Mocha::getDescription()
{
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost()
{
    return beverage->cost() + 0.20;
}

Soy::Soy(Beverage *beverage)
{
    this->beverage = beverage;
}

string Soy::getDescription()
{
    return beverage->getDescription() + ", Soy";
}

double Soy::cost()
{
    return beverage->cost() + 0.15;
}

Whip::Whip(Beverage *beverage)
{
    this->beverage = beverage;
}

string Whip::getDescription()
{
    return beverage->getDescription() + ", Whip";
}

double Whip::cost()
{
    return beverage->cost() + 0.10;
}

