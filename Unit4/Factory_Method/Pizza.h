#ifndef __PIZZA_H__
#define __PIZZA_H__

#include <string>
#include <vector>

using namespace std;

class Pizza
{
protected:
	string name;
	string dough;
	string sauce;
	vector<string> toppings;

public:
	void prepare();
	void bake();
	virtual void cut();
	void box();
	string getName();
};

class NYStyleCheesePizza: public Pizza
{
public:
	NYStyleCheesePizza();
};

class ChicagoStyleCheesePizza: public Pizza
{
public:
	ChicagoStyleCheesePizza();
	void cut();
};

#endif

