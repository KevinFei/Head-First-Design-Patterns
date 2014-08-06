#include <iostream>

#include "ChocolateBoiler.h"

using namespace std;

ChocolateBoiler* ChocolateBoiler::uniqueInstance = new ChocolateBoiler();

ChocolateBoiler::ChocolateBoiler()
{
	empty = true;
	boiled = false;
}

ChocolateBoiler* ChocolateBoiler::getInstance()
{
//	if(uniqueInstance == NULL)
//	{
//		uniqueInstance = new ChocolateBoiler();
//	}
	return uniqueInstance;
}

void ChocolateBoiler::fill()
{
	if(isEmpty())
	{
		empty = false;
		boiled = false;
		cout << "在锅炉内填满巧克力和牛奶的混合物" << endl;
	}
}

void ChocolateBoiler::drain()
{
	if(!isEmpty() && isBoiled())
	{
		empty = true;
		cout << "排出煮沸的巧克力和牛奶" << endl;
	}
}

void ChocolateBoiler::boil()
{
	if(!isEmpty() && !isBoiled())
	{
		boiled = true;
		cout << "将炉内物煮沸" << endl;
	}
}

bool ChocolateBoiler::isEmpty()
{
	return empty;
}

bool ChocolateBoiler::isBoiled()
{
	return boiled;
}

