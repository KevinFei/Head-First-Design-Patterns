#include <iostream>
#include <algorithm>

#include "Menu.h"
#include "Iterator.h"

using namespace std;

MenuComponent::~MenuComponent()
{
}

void MenuComponent::add(MenuComponent *menuComponent)
{
    throw UnsupportedOperationException();
}

void MenuComponent::remove(MenuComponent *menuComponent)
{
    throw UnsupportedOperationException();
}

MenuComponent* MenuComponent::getChild(int i)
{
    throw UnsupportedOperationException();
}

string MenuComponent::getName()
{
    throw UnsupportedOperationException();
}

string MenuComponent::getDescription()
{
    throw UnsupportedOperationException();
}

double MenuComponent::getPrice()
{
    throw UnsupportedOperationException();
}

bool MenuComponent::isVegetarian()
{
    throw UnsupportedOperationException();
}

void MenuComponent::print(int num)
{
    throw UnsupportedOperationException();
}

MenuItem::MenuItem(const string &name, const string &description,
        bool vegetarian, double price)
{
    this->name = name;
    this->description = description;
    this->vegetarian = vegetarian;
    this->price = price;
}

string MenuItem::getName()
{
    return name;
}

string MenuItem::getDescription()
{
    return description;
}

double MenuItem::getPrice()
{
    return price;
}

bool MenuItem::isVegetarian()
{
    return vegetarian;
}

void MenuItem::print(int num)
{
    for(int i=0; i<num; i++)
    {
        cout << "    ";
    }
    cout << getName();
    if(isVegetarian())
    {
        cout << "(v)";
    }
    cout << ", " << getPrice() << endl;
    for(int i=0; i<num; i++)
    {
        cout << "    ";
    }
    cout << "      -- " << getDescription() << endl;
}

Iterator* MenuItem::createIterator()
{
    return new NullIterator();
}

Menu::Menu(const string &name, const string &description)
{
    this->name = name;
    this->description = description;
}

void Menu::add(MenuComponent* menuComponent)
{
    menuComponents.push_back(menuComponent);
}

void Menu::remove(MenuComponent* menuComponent)
{
    vector<MenuComponent*>::iterator iter = 
        find(menuComponents.begin(), menuComponents.end(), menuComponent);
    if(iter != menuComponents.end())
    {
        menuComponents.erase(iter);
    }
}

MenuComponent* Menu::getChild(int i)
{
    return menuComponents.at(i);
}

string Menu::getName()
{
    return name;
}

string Menu::getDescription()
{
    return description;
}

void Menu::print(int num)
{
    cout << "\n";
    for(int i=0; i<num; i++)
    {
        cout << "    ";
    }
    cout << getName();
    cout << ", " << getDescription() << endl;
    for(int i=0; i<num; i++)
    {
        cout << "    ";
    }
    cout << "--------------------------------" << endl;
    Iterator *iterator = createMenuIterator();
    while(iterator->hasNext())
    {
        MenuComponent* menuComponent = iterator->next();
        menuComponent->print(num+1);
    }
    delete iterator;
}

Iterator* Menu::createIterator()
{
    return new CompositeIterator(createMenuIterator());
}

Iterator* Menu::createMenuIterator()
{
    return new MenuIterator(menuComponents);
}

