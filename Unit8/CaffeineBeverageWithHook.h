#ifndef __CAFFEINEBEVERAGEWITHHOOK_H__
#define __CAFFEINEBEVERAGEWITHHOOK_H__

#include <string>

using namespace std;

class CaffeineBeverageWithHook
{
public:
	void prepareRecipe();
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
	void boilWater();
	void pourInCup();
	virtual bool customerWantsCondiments();
};

class CoffeeWithHook: public CaffeineBeverageWithHook
{
private:
	string getUserInput();

public:
	void brew();
	void addCondiments();
	bool customerWantsCondiments();
};

class TeaWithHook: public CaffeineBeverageWithHook
{
private:
	string getUserInput();

public:
	void brew();
	void addCondiments();
	bool customerWantsCondiments();
};

#endif

