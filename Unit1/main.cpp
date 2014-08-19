#include <iostream>
#include <string>

#include "duck.h"

using namespace std;

int main()
{
    MallardDuck mallardDuck;
    Duck *duck = &mallardDuck;
    Duck t_duck;

    mallardDuck.display();
    mallardDuck.performQuack();
    mallardDuck.performFly();
    cout << endl;

    mallardDuck.setFlyBehavior(new FlyNoWay());
    mallardDuck.setQuackBehavior(new Squeak());
    mallardDuck.display();
    mallardDuck.performQuack();
    mallardDuck.performFly();
    cout << endl;

    duck->display();
    duck->performQuack();
    duck->performFly();
    cout << endl;

    t_duck.display();
    t_duck.performQuack();
    t_duck.performFly();
    cout << endl;

    t_duck.setFlyBehavior(new FlyNoWay());
    t_duck.setQuackBehavior(new Squeak());
    t_duck.display();
    t_duck.performQuack();
    t_duck.performFly();
    cout << endl;

    return 0;
}

