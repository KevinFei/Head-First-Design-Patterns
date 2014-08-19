#include <iostream>
#include <typeinfo>

#include "Observer.h"
#include "QuackObservable.h"

using namespace std;

void Quackologist::update(QuackObservable *duck)
{
    cout << "Quackologist: " << typeid(*duck).name() 
        << " just quacked." << endl;
}

