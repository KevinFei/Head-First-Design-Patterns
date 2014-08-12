#include <iostream>

#include "Duck.h"
#include "TurkeyAdapter.h"
#include "Turkey.h"

using namespace std;

void testDuck(Duck *duck)
{
	duck->quack();
	duck->fly();
}

int main()
{
	Duck *duck = new MallardDuck();
	Turkey *turkey = new WildTurkey();
	Duck *turkeyAdapter = new TurkeyAdapter(turkey);

	cout << "The Turkey says..." << endl;
	turkey->gobble();
	turkey->fly();

	cout << "\nThe Duck says..." << endl;
	testDuck(duck);

	cout << "\nThe TurkeyAdapter says..." << endl;
	testDuck(turkeyAdapter);

    delete duck;
    delete turkey;
    delete turkeyAdapter;

	return 0;
}

