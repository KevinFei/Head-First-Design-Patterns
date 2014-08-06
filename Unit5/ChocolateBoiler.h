#ifndef __CHOCOLATEBOILER_H__
#define __CHOCOLATEBOILER_H__

#include <string>

using namespace std;

class ChocolateBoiler
{
private:
	bool empty;
	bool boiled;
	static ChocolateBoiler *uniqueInstance;
	ChocolateBoiler();

public:
	static ChocolateBoiler* getInstance();
	void fill();
	void drain();
	void boil();
	bool isEmpty();
	bool isBoiled();
};

#endif

