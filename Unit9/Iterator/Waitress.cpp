#include <iostream>

#include "Waitress.h"
#include "MenuItem.h"
#include "Iterator.h"

using namespace std;

Waitress::Waitress(vector<Menu*> &menus)
{
    this->menus = menus;
}

void Waitress::printMenu()
{
    vector<Menu*>::iterator menuIterator;
    for(menuIterator = menus.begin();
            menuIterator != menus.end();
            menuIterator++)
    {
        printMenu((*menuIterator)->createIterator());
    }
}

void Waitress::printMenu(Iterator *iterator)
{
    while(iterator->hasNext())
    {
        MenuItem *menuItem = iterator->next();
        cout << menuItem->getName() << ", "
            << menuItem->getPrice() << " -- "
            << menuItem->getDescription() << endl;
    }
}

