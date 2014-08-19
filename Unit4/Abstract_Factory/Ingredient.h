#ifndef __INGREDIENT_H__
#define __INGREDIENT_H__

#include <iostream>

using namespace std;

class Ingredient
{
protected:
    string name;
    virtual void printName() = 0;
public:
    virtual ~Ingredient(){}
};

class Dough: public Ingredient
{
protected:
    void printName();    
};

class ThinCrustDough: public Dough
{
public:
    ThinCrustDough();
};

class Sauce: public Ingredient
{
protected:
    void printName();    
};

class MarinaraSauce: public Sauce
{
public:
    MarinaraSauce();
};

class Cheese: public Ingredient
{
protected:
    void printName();
};

class ReggianoCheese: public Cheese
{
public:
    ReggianoCheese();
};

class Veggies: public Ingredient
{
protected:
    void printName();
};

class Garlic: public Veggies
{
public:
    Garlic();
};

class Onion: public Veggies
{
public:
    Onion();
};

class Mushroom: public Veggies
{
public:
    Mushroom();
};

class RedPepper: public Veggies
{
public:
    RedPepper();
};

class Pepperoni: public Ingredient
{
protected:
    void printName();
};

class SlicedPepperoni: public Pepperoni
{
public:
    SlicedPepperoni();
};

class Clams: public Ingredient
{
protected:
    void printName();
};

class FreshClams: public Clams
{
public:
    FreshClams();
};

#endif

