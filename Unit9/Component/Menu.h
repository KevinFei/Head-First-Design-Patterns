#ifndef __MENU_H__
#define __MENU_H__

#include <exception>
#include <string>
#include <vector>

using namespace std;

class Iterator;

class UnsupportedOperationException: public exception
{
public:
    const char* what() const throw()
    {
        return "Unsupported Operation\n";
    }
};

class MenuComponent
{
public:
    virtual ~MenuComponent() = 0;
    virtual void add(MenuComponent *menuComponent);
    virtual void remove(MenuComponent *menuComponent);
    virtual MenuComponent* getChild(int i);
    virtual string getName();
    virtual string getDescription();
    virtual double getPrice();
    virtual bool isVegetarian();
    virtual void print(int num = 0);
    virtual Iterator* createIterator() = 0;
};

class MenuItem: public MenuComponent
{
    string name;
    string description;
    bool vegetarian;
    double price;

public:
    MenuItem(const string &name, const string &description,
            bool vegetarian, double price);
    string getName();
    string getDescription();
    double getPrice();
    bool isVegetarian();
    void print(int num = 0);
    Iterator* createIterator();
};

class Menu: public MenuComponent
{
    vector<MenuComponent*> menuComponents;
    string name;
    string description;

public:
    Menu(const string &name, const string &description);
    void add(MenuComponent* menuComponent);
    void remove(MenuComponent* menuComponent);
    MenuComponent* getChild(int i);
    string getName();
    string getDescription();
    void print(int num = 0);
    Iterator* createIterator();
    Iterator* createMenuIterator();
};

#endif

