#include <iostream>

#include "Pizza.h"

using namespace std;

void Pizza::prepare()
{
    cout << "Preparing " << name << endl
        << "Tossing dough..." << endl
        << "Adding sauce..." << endl
        << "Adding toppings..." << endl;
    for(int i = 0; i < toppings.size(); i++)
    {
        cout << " " << toppings[i] << endl;
    }
}

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

string Pizza::getName()
{
    return name;
}

NYStyleCheesePizza::NYStyleCheesePizza()
{
    name = "NY Style Sauce and Cheese Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";

    toppings.push_back("Grated Reggiano Cheese");
}

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Shredded Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut()
{
    cout << "Cutting the pizza into square slices" << endl;
}

