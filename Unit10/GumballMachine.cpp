#include <iostream>

#include "GumballMachine.h"
#include "State.h"

using namespace std;

GumballMachine::GumballMachine(int numberGumballs)
{
    soldOutState = new SoldOutState(this);
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);
    winnerState = new WinnerState(this);
    count = numberGumballs;
    if(count > 0)
    {
        state = noQuarterState;
    }
    else
    {
        state = soldOutState;
    }
}

GumballMachine::~GumballMachine()
{
    delete soldOutState;
    delete noQuarterState;
    delete hasQuarterState;
    delete soldState;
    delete winnerState;
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    state->turnCrank();
    state->dispense();
}

void GumballMachine::setState(State *state)
{
    this->state = state;
}

void GumballMachine::releaseBall()
{
    cout << "A gumball comes rolling out the slot..." << endl;
    if(count != 0)
    {
        count--;
    }
}

void GumballMachine::refill(int count)
{
    this->count = count;
    if(this->count > 0)
    {
        state = noQuarterState;
    }
    else
    {
        state = soldOutState;
    }
}

int GumballMachine::getCount()
{
    return count;
}

State* GumballMachine::getSoldOutState()
{
    return soldOutState;
}

State* GumballMachine::getNoQuarterState()
{
    return noQuarterState;
}

State* GumballMachine::getHasQuarterState()
{
    return hasQuarterState;
}

State* GumballMachine::getSoldState()
{
    return soldState;
}

State* GumballMachine::getWinnerState()
{
    return winnerState;
}

