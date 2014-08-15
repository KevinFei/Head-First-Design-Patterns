#include <iostream>

#include "State.h"
#include "GumballMachine.h"

using namespace std;

int main()
{
    GumballMachine *gumballMachine = new GumballMachine(5);

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    cout << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    cout << endl;

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    cout << endl;

    delete gumballMachine;

    return 0;
}

