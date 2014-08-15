#include <iostream>
#include <cstdlib>
#include <ctime>

#include "State.h"
#include "GumballMachine.h"

using namespace std;

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter()
{
    cout << "You inserted a quarter" << endl;
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
    cout << "You haven't inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
    cout << "You turned, but there's no quarter" << endl;
}

void NoQuarterState::dispense()
{
    cout << "You need to pay first" << endl;
}

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void HasQuarterState::insertQuarter()
{
    cout << "You can't insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter()
{
    cout << "Quarter returned" << endl;
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
    cout << "You turned..." << endl;
    srand(time(0));
    int winner = rand()%10;
    if(winner == 0 && gumballMachine->getCount() > 1)
    {
        gumballMachine->setState(gumballMachine->getWinnerState());
    }
    else
    {
        gumballMachine->setState(gumballMachine->getSoldState());
    }
}

void HasQuarterState::dispense()
{
    cout << "No gumball dispensed" << endl;
}

SoldState::SoldState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter()
{
    cout << "Please wait, we're already giving you a gumball" << endl;
}

void SoldState::ejectQuarter()
{
    cout << "Sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank()
{
    cout << "Turning twice doesn't get you another gumball" << endl;
}

void SoldState::dispense()
{
    gumballMachine->releaseBall();
    if(gumballMachine->getCount() > 0)
    {
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }
    else
    {
        cout << "Oops, out of gumballs" << endl;
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}

SoldOutState::SoldOutState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void SoldOutState::insertQuarter()
{
    cout << "You can't inserted a quarter, the machine is sold out" << endl;
}

void SoldOutState::ejectQuarter()
{
    cout << "You can't eject, you haven't inserted a quarter yet" << endl;
}

void SoldOutState::turnCrank()
{
    cout << "You turned, but there are no gumballs" << endl;
}

void SoldOutState::dispense()
{
    cout << "No gumball dispensed" << endl;
}

WinnerState::WinnerState(GumballMachine *gumballMachine)
{
    this->gumballMachine = gumballMachine;
}

void WinnerState::insertQuarter()
{
    cout << "Please wait, we're already giving you a gumball" << endl;
}

void WinnerState::ejectQuarter()
{
    cout << "Sorry, you already turned the crank" << endl;
}

void WinnerState::turnCrank()
{
    cout << "Turning twice doesn't get you another gumball" << endl;
}

void WinnerState::dispense()
{
    cout << "YOU'RE A WINNER! You get two gumballs for your quarter" << endl;
    gumballMachine->releaseBall();
    if(gumballMachine->getCount() == 0)
    {
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
    else
    {
        gumballMachine->releaseBall();
        if(gumballMachine->getCount() > 0)
        {
            gumballMachine->setState(gumballMachine->getNoQuarterState());
        }
        else
        {
            cout << "Oops, out of gumballs" << endl;
            gumballMachine->setState(gumballMachine->getSoldOutState());
        }
    }
}

