#ifndef __INGREDIENT_H__
#define __INGREDIENT_H__

#include <iostream>

using namespace std;

class Ingredient
{
protected:
	string name;
	virtual void printName() = 0;
};

class Dough: public Ingredient
{
protected:
	void printName()	
	{
		cout << " I am " << name << " in Dough." << endl;
	}
};

class ThinCrustDough: public Dough
{
public:
	ThinCrustDough()
	{
		name = "ThinCrustDough";
		printName();
	}
};

class Sauce: public Ingredient
{
protected:
	void printName()	
	{
		cout << " I am " << name << " in Sauce." << endl;
	}
};

class MarinaraSauce: public Sauce
{
public:
	MarinaraSauce()
	{
		name = "MarinaraSauce";
		printName();
	}
};

class Cheese: public Ingredient
{
protected:
	void printName()	
	{
		cout << " I am " << name << " in Cheese." << endl;
	}
};

class ReggianoCheese: public Cheese
{
public:
	ReggianoCheese()
	{
		name = "ReggianoCheese";
		printName();
	}
};

class Veggies: public Ingredient
{
protected:
	void printName()	
	{
		cout << " I am " << name << " in Veggies." << endl;
	}
};

class Garlic: public Veggies
{
public:
	Garlic()
	{
		name = "Garlic";
		printName();
	}
};

class Onion: public Veggies
{
public:
	Onion()
	{
		name = "Onion";
		printName();
	}
};

class Mushroom: public Veggies
{
public:
	Mushroom()
	{
		name = "Mushroom";
		printName();
	}
};

class RedPepper: public Veggies
{
public:
	RedPepper()
	{
		name = "RedPepper";
		printName();
	}
};

class Pepperoni: public Ingredient
{
protected:
	void printName()	
	{
		cout << " I am " << name << " in Pepperoni." << endl;
	}
};

class SlicedPepperoni: public Pepperoni
{
public:
	SlicedPepperoni()
	{
		name = "SlicedPepperoni";
		printName();
	}
};

class Clams: public Ingredient
{
protected:
	void printName()	
	{
		cout << " I am " << name << " in Clam." << endl;
	}
};

class FreshClams: public Clams
{
public:
	FreshClams()
	{
		name = "FreshClams";
		printName();
	}
};

#endif

