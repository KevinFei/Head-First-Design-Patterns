#include <iostream>
#include <algorithm>
#include <cctype>

#include "CaffeineBeverageWithHook.h"

using namespace std;

void CaffeineBeverageWithHook::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	if(customerWantsCondiments())
	{
		addCondiments();
	}
}

void CaffeineBeverageWithHook::boilWater()
{
	cout << "Boiling water" << endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
	cout << "Pouring into cup" << endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments()
{
	return true;
}

string CoffeeWithHook::getUserInput()
{
	string answer;

	cout << "Would you like milk and sugar with your coffee (y/n)?";
	cin >> answer;

	return answer;
}

void CoffeeWithHook::brew()
{
	cout << "Dripping Coffee through filter" << endl;
}

void CoffeeWithHook::addCondiments()
{
	cout << "Adding Sugar and Milk" << endl;
}

bool CoffeeWithHook::customerWantsCondiments()
{
	string answer = getUserInput();

	transform(answer.begin(), answer.end(),
			answer.begin(), ::tolower);
	if(answer.size() && answer[0] == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

string TeaWithHook::getUserInput()
{
	string answer;

	cout << "Would you like lemon with your tea (y/n)?";
	cin >> answer;

	return answer;
}

void TeaWithHook::brew()
{
	cout << "Steeping the tea" << endl;
}

void TeaWithHook::addCondiments()
{
	cout << "Adding Lemon" << endl;
}

bool TeaWithHook::customerWantsCondiments()
{
	string answer = getUserInput();

	transform(answer.begin(), answer.end(),
			answer.begin(), ::tolower);
	if(answer.size() && answer[0] == 'y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

