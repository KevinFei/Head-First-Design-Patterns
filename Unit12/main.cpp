#include <iostream>

#include "AbstractDuckFactory.h"
#include "Quackable.h"
#include "GooseAdapter.h"
#include "Observer.h"

using namespace std;

void simulate(Quackable *duck)
{
    duck->quack();
}

void simulate(AbstractDuckFactory *duckFactory)
{
    Quackable *redheadDuck = duckFactory->createRedheadDuck();
    Quackable *duckCall = duckFactory->createDuckCall();
    Quackable *rubberDuck = duckFactory->createRubberDuck();
    Quackable *gooseDuck = new GooseAdapter(new Goose());
    cout << "\nDuck Simulator: With Composite - Flocks" << endl;

    Flock *flockOfDucks = new Flock();
    flockOfDucks->add(redheadDuck);
    flockOfDucks->add(duckCall);
    flockOfDucks->add(rubberDuck);
    flockOfDucks->add(gooseDuck);

    Flock *flockOfMallards = new Flock();
    Quackable *mallardOne = duckFactory->createMallardDuck();
    Quackable *mallardTwo = duckFactory->createMallardDuck();
    Quackable *mallardThree = duckFactory->createMallardDuck();
    Quackable *mallardFour = duckFactory->createMallardDuck();

    flockOfMallards->add(mallardOne);
    flockOfMallards->add(mallardTwo);
    flockOfMallards->add(mallardThree);
    flockOfMallards->add(mallardFour);

    flockOfDucks->add(flockOfMallards);

    cout << "\nDuck Simulator: Whole Flock Simulation" << endl;
    simulate(flockOfDucks);

    cout << "\nDuck Simulator: Mallard Flock Simulation" << endl;
    simulate(flockOfMallards);

    cout << "\nDuck Simulator: With Observer" << endl;
    Quackologist *quackologist = new Quackologist();
    flockOfDucks->registerObserver(quackologist);

    simulate(flockOfDucks);

    cout << "\nThe ducks quacked " << QuackCounter::getQuacks()
        << " times" << endl;

    delete quackologist;
    delete mallardFour;
    delete mallardThree;
    delete mallardTwo;
    delete mallardOne;
    delete flockOfMallards;
    delete flockOfDucks;
    delete gooseDuck;
    delete rubberDuck;
    delete duckCall;
    delete redheadDuck;
}

int main()
{
    AbstractDuckFactory *duckFactory = new CountingDuckFactory();
    simulate(duckFactory);
    return 0;
}

