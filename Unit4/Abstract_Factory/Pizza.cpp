#include <iostream>

#include "PizzaIngredientFactory.h"
#include "Pizza.h"

using namespace std;

void Pizza::bake()
{
	cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
	cout << "Place pizza in official PizzaStore box" << endl;
}

void Pizza::setName(const string& name)
{
	this->name = name;
}

string Pizza::getName()
{
	return name;
}

CheesePizza::CheesePizza(PizzaIngredientFactory *ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}

void CheesePizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
}

ClamPizza::ClamPizza(PizzaIngredientFactory *ingredientFactory)
{
	this->ingredientFactory = ingredientFactory;
}

void ClamPizza::prepare()
{
	cout << "Preparing " << name << endl;
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
	clam = ingredientFactory->createClam();
}

