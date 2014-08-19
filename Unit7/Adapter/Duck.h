#ifndef __DUCK_H__
#define __DUCK_H__

class Duck
{
public:
    virtual ~Duck(){}
    virtual void quack() = 0;
    virtual void fly() = 0;
};

class MallardDuck: public Duck
{
public:
    void quack();
    void fly();
};

#endif

