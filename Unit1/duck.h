#ifndef __DUCK_H__
#define __DUCK_H__

#include <iostream>

#include "behavior.h"

using namespace std;

class Duck
{
protected:
	QuackBehavior *quackBehavior;
	FlyBehavior *flyBehavior;

public:
	Duck()
	{
		quackBehavior = new QuackBehavior();
		flyBehavior = new FlyBehavior();
	}

	void swim()
	{
		cout << "我能游泳。" << endl;
	}

	virtual void display()
	{
		cout << "我是普通鸭子。" << endl;
	}

	void performQuack()
	{
		quackBehavior->quack();
	}

	void performFly()
	{
		flyBehavior->fly();
	}

	void setFlyBehavior(FlyBehavior *fb)
	{
		flyBehavior = fb;
	}

	void setQuackBehavior(QuackBehavior *qb)
	{
		quackBehavior = qb;
	}
};

class MallardDuck: public Duck
{
public:
	MallardDuck()
	{
		quackBehavior = new Quack();
		flyBehavior = new FlyWithWings();
	}

	void display()
	{
		cout << "我是绿头鸭。" << endl;
	}
};

#endif

