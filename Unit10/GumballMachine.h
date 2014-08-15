#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

class State;

class GumballMachine
{
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *winnerState;
    State *state;
    int count;

public:
    GumballMachine(int numberGumballs);
    ~GumballMachine();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(State *state);
    void releaseBall();
    void refill(int count);
    int getCount();
    State* getSoldOutState();
    State* getNoQuarterState();
    State* getHasQuarterState();
    State* getSoldState();
    State* getWinnerState();
};

#endif

