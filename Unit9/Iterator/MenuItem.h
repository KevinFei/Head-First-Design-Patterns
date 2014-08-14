#ifndef __MENUITEM_H__
#define __MENUITEM_H__

#include <string>
#include <vector>
#include <map>

using namespace std;

class Iterator;

class MenuItem
{
private:
    string name;
    string description;
    bool vegetarian;
    double price;

public:
    MenuItem(const string &name, const string &description,
            bool vegetarian, double price);
    string getName();
    string getDescription();
    bool isVegetarian();
    double getPrice();
};

class Menu
{
public:
    virtual ~Menu(){}
    virtual Iterator* createIterator() = 0;
};

class PancakeHouseMenu: public Menu
{
private:
    vector<MenuItem*> menuItems;

public:
    PancakeHouseMenu();
    ~PancakeHouseMenu();
    void addItem(const string &name, const string &description,
            bool vegetarian, double price);
    Iterator* createIterator();
};

class DinerMenu: public Menu
{
private:
    const static int MAX_ITEMS = 6;
    int numberOfItems;
    MenuItem *menuItems[MAX_ITEMS];

public:
    DinerMenu();
    ~DinerMenu();
    void addItem(const string &name, const string &description,
            bool vegetarian, double price);
    Iterator* createIterator();
};

class CafeMenu: public Menu
{
    map<string, MenuItem*> menuItems;

public:
    CafeMenu();
    ~CafeMenu();
    void addItem(const string &name, const string &description,
            bool vegetarian, double price);
    Iterator* createIterator();
};

#endif

