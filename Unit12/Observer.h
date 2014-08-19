#ifndef __OBSERVER_H__
#define __OBSERVER_H__

class QuackObservable;

class Observer
{
public:
    virtual ~Observer(){}
    virtual void update(QuackObservable *duck) = 0;
};

class Quackologist: public Observer
{
public:
    void update(QuackObservable *duck);
};

#endif

