#ifndef __BEHAVIOR_H__
#define __BEHAVIOR_H__

#include <iostream>

using namespace std;

class FlyBehavior
{
public:
	virtual void fly()
	{
	}
};

class FlyWithWings: public FlyBehavior
{
public:
	void fly()
	{
		cout << "我用翅膀飞翔。" << endl;
	}
};

class FlyNoWay: public FlyBehavior
{
public:
	void fly()
	{
		cout << "我不能飞。" << endl;
	}
};

class QuackBehavior
{
public:
	virtual void quack()
	{
	}
};

class Quack: public QuackBehavior
{
public:
	void quack()
	{
		cout << "呱呱叫。" << endl;
	}
};

class Squeak: public QuackBehavior
{
public:
	void quack()
	{
		cout << "吱吱叫。" << endl;
	}
};

class MuteQuack: public QuackBehavior
{
public:
	void quack()
	{
		cout << "不会叫。" << endl;
	}
};

#endif

