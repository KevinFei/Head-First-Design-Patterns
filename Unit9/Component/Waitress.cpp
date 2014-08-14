#include <iostream>

#include "Waitress.h"
#include "Menu.h"
#include "Iterator.h"

using namespace std;

Waitress::Waitress(MenuComponent *allMenus)
{
    this->allMenus = allMenus;
}

void Waitress::printMenu()
{
    allMenus->print();
}

void Waitress::printVegetarianMenu()
{
    Iterator *iterator = allMenus->createIterator();
    cout << "\nVEGETARIAN MENU\n---------------------------" << endl;
    while(iterator->hasNext())
    {
        MenuComponent *menuComponent = iterator->next();
        try
        {
            if(menuComponent->isVegetarian())
            {
                menuComponent->print();
            }
        }
        catch(UnsupportedOperationException &e)
        {
        }
    }
    delete iterator;
}

