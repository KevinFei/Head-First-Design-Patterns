#ifndef __PIZZA_H__
#define __PIZZA_H__

#include <string>
#include <vector>

using namespace std;

class PizzaIngredientFactory;
class Dough;
class Sauce;
class Veggies;
class Cheese;
class Pepperoni;
class Clams;

class Pizza
{
protected:
	PizzaIngredientFactory *ingredientFactory;
	string name;
	Dough *dough;
	Sauce *sauce;
	vector<Veggies*> veggies;
	Cheese *cheese;
	Pepperoni *pepperoni;
	Clams *clam;

public:
	virtual void prepare() = 0;
	void bake();
	virtual void cut();
	void box();
	void setName(const string& name);
	string getName();
};

class CheesePizza: public Pizza
{
public:
	CheesePizza(PizzaIngredientFactory *ingredientFactory);
	void prepare();
};

class ClamPizza: public Pizza
{
public:
	ClamPizza(PizzaIngredientFactory *ingredientFactory);
	void prepare();
};

#endif

