#include <iostream>

#include "CaffeineBeverageWithHook.h"

using namespace std;

int main()
{
	TeaWithHook *teaHook = new TeaWithHook();
	CoffeeWithHook *coffeeHook = new CoffeeWithHook();

	cout << "\nMaking tea..." << endl;
	teaHook->prepareRecipe();

	cout << "\nMaking coffee..." << endl;
	coffeeHook->prepareRecipe();

	delete teaHook;
	delete coffeeHook;

	return 0;
}

