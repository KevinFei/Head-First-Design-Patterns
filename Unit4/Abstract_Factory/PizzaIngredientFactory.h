#ifndef __PIZZAINGREDIENTFACTORY_H__
#define __PIZZAINGREDIENTFACTORY_H__

#include <string>
#include <vector>

using namespace std;

class Dough;
class Sauce;
class Veggies;
class Cheese;
class Pepperoni;
class Clams;

class PizzaIngredientFactory
{
public:
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
	virtual vector<Veggies*> createVeggies() = 0;
	virtual Pepperoni* createPepperoni() = 0;
	virtual Clams* createClam() = 0;
};

class NYPizzaIngredientFactory: public PizzaIngredientFactory
{
public:
	Dough* createDough();
	Sauce* createSauce();
	Cheese* createCheese();
	vector<Veggies*> createVeggies();
	Pepperoni* createPepperoni();
	Clams* createClam();
};

#endif

