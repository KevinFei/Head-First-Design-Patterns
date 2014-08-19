#include "Beverage.h" 

Beverage::Beverage()
{
    description = "Unknown Beverage";
}

string Beverage::getDescription()
{
    return description;
}

Espresso::Espresso()
{
    description = "Espresso";
}

double Espresso::cost()
{
    return 1.99;
}

HouseBlend::HouseBlend()
{
    description = "House Blend Coffee";
}

double HouseBlend::cost()
{
    return 0.89;
}

DarkRoast::DarkRoast()
{
    description = "Dark Roast Coffee";
}

double DarkRoast::cost()
{
    return 0.99;
}

Decat::Decat()
{
    description = "Decat";
}

double Decat::cost()
{
    return 1.05;
}

