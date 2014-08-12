#include <iostream>

#include "ChocolateBoiler.h"

using namespace std;

int main()
{
	ChocolateBoiler *chocolateboiler = ChocolateBoiler::getInstance();
	chocolateboiler->fill();
	chocolateboiler->boil();
	chocolateboiler->drain();
    
    delete chocolateboiler;

	return 0;
}

