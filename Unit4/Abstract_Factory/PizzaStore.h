#ifndef __PIZZASTORE_H__
#define __PIZZASTORE_H__

#include <string>

using namespace std;

class Pizza;

class PizzaStore
{
public:
	Pizza* orderPizza(const string &type);

protected:
	virtual Pizza* createPizza(const string &type) = 0;
};

class NYPizzaStore: public PizzaStore
{
protected:
	Pizza* createPizza(const string &type);
};
#if 0
class ChicagoPizzaStore: public PizzaStore
{
protected:
	Pizza* createPizza(const string &type);
};

class CaliforniaPizzaStore: public PizzaStore
{
protected:
	Pizza* createPizza(const string &type);
};
#endif
#endif

