#ifndef __STATE_H__
#define __STATE_H__

class GumballMachine;

class State
{
public:
    virtual ~State(){}
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};

class NoQuarterState: public State
{
    GumballMachine *gumballMachine;

public:
    NoQuarterState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class HasQuarterState: public State
{
    GumballMachine *gumballMachine;

public:
    HasQuarterState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class SoldState: public State
{
    GumballMachine *gumballMachine;

public:
    SoldState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class SoldOutState: public State
{
    GumballMachine *gumballMachine;

public:
    SoldOutState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

class WinnerState: public State
{
    GumballMachine *gumballMachine;

public:
    WinnerState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif

