#include "Pizza.h" 
#include "PizzaStore.h" 
#include "PizzaIngredientFactory.h"

Pizza* PizzaStore::orderPizza(const string &type)
{
	Pizza *pizza = createPizza(type);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}

Pizza* NYPizzaStore::createPizza(const string &type)
{
	Pizza *pizza = NULL;
	PizzaIngredientFactory *ingredientFactory = 
		new NYPizzaIngredientFactory();

	if(type == "cheese")
	{
		pizza = new CheesePizza(ingredientFactory);
		pizza->setName("New York Style Cheese Pizza");
	}
//	else if(type == "veggie")
//	{
//		pizza = new VeggiePizza(ingredientFactory);
//		pizza->setName("New York Style Veggie Pizza");
//	}
//	else if(type == "clam")
//	{
//		pizza = new ClamPizza(ingredientFactory);
//		pizza->setName("New York Style Clam Pizza");
//	}
//	else if(type == "pepperoni")
//	{
//		pizza = new PepperoniPizza(ingredientFactory);
//		pizza->setName("New York Style Pepperoni Pizza");
//	}

	return pizza;
}
#if 0
Pizza* ChicagoPizzaStore::createPizza(const string &type)
{
	Pizza *pizza = NULL;
	PizzaIngredientFactory *ingredientFactory = 
		new ChicagoPizzaIngredientFactory();

	if(type == "cheese")
	{
		pizza = new CheesePizza(ingredientFactory);
		pizza->setName("Chicago Style Cheese Pizza");
	}
	else if(type == "veggie")
	{
		pizza = new VeggiePizza(ingredientFactory);
		pizza->setName("Chicago Style Veggie Pizza");
	}
	else if(type == "clam")
	{
		pizza = new ClamPizza(ingredientFactory);
		pizza->setName("Chicago Style Clam Pizza");
	}
	else if(type == "pepperoni")
	{
		pizza = new PepperoniPizza(ingredientFactory);
		pizza->setName("Chicago Style Pepperoni Pizza");
	}

	return pizza;
}

Pizza* CaliforniaPizzaStore::createPizza(const string &type)
{
	Pizza *pizza = NULL;
	PizzaIngredientFactory *ingredientFactory = 
		new CaliforniaPizzaIngredientFactory();

	if(type == "cheese")
	{
		pizza = new CheesePizza(ingredientFactory);
		pizza->setName("California Style Cheese Pizza");
	}
	else if(type == "veggie")
	{
		pizza = new VeggiePizza(ingredientFactory);
		pizza->setName("California Style Veggie Pizza");
	}
	else if(type == "clam")
	{
		pizza = new ClamPizza(ingredientFactory);
		pizza->setName("California Style Clam Pizza");
	}
	else if(type == "pepperoni")
	{
		pizza = new PepperoniPizza(ingredientFactory);
		pizza->setName("California Style Pepperoni Pizza");
	}

	return pizza;
}
#endif

