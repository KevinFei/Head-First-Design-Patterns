#include <iostream>

#include "MenuItem.h"
#include "Iterator.h"

using namespace std;

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

bool MenuItem::isVegetarian()
{
    return vegetarian;
}

double MenuItem::getPrice()
{
    return price;
}

PancakeHouseMenu::PancakeHouseMenu()
{
    addItem("K&B's Pancake Breakfast",
            "Pancakes with scrambled eggs, and toast",
            true,
            2.99);

    addItem("Regular Pancake Breakfast",
            "Pancakes with fried eggs, sausage",
            false,
            2.99);

    addItem("Blueberry Pancakes",
            "Pancakes made with fresh blueberries",
            true,
            3.49);

    addItem("Waffles",
            "Waffles, with your choice of blueberries or strawberries",
            true,
            3.59);
}

PancakeHouseMenu::~PancakeHouseMenu()
{
    vector<MenuItem*>::iterator iter;
    for(iter = menuItems.begin();
            iter != menuItems.end();
            iter++)
    {
        delete *iter;
    }
}

void PancakeHouseMenu::addItem(const string &name, const string &description,
         bool vegetarian, double price)
{
    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
    menuItems.push_back(menuItem);
}

Iterator* PancakeHouseMenu::createIterator()
{
    return new PancakeHouseMenuIterator(menuItems);
}

DinerMenu::DinerMenu()
{
    numberOfItems = 0;
    for(int i=0; i<MAX_ITEMS; i++)
    {
        menuItems[i] = NULL;
    }

    addItem("Vegetarian BLT",
            "(Fakin') Bacon with lettuce & tomato on whole wheat",
            true,
            2.99);

    addItem("BLT",
            "Bacon with lettuce & tomato on whole wheat",
            false,
            2.99);

    addItem("Soup of the day",
            "Soup of the day, with a side of potato salad",
            false,
            3.29);

    addItem("Hotdog",
            "A hot dog, with saurkraut, relish, onions, topped with cheese",
            false,
            3.05);

    addItem("Steamed Veggies and Brown Rice",
            "Steamed vegetables over brown rice",
            true,
            3.99);

    addItem("Pasta",
            "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
            false,
            3.89);
}

DinerMenu::~DinerMenu()
{
    for(int i=0; i<MAX_ITEMS && menuItems[i]!=NULL; i++)
    {
        delete menuItems[i];
    }
}

void DinerMenu::addItem(const string &name, const string &description,
        bool vegetarian, double price)
{
    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
    if(numberOfItems >= MAX_ITEMS)
    {
        cout << "Sorry, menu is full! Can't add item to menu";
    }
    else
    {
        menuItems[numberOfItems] = menuItem;
        numberOfItems++;
    }
}

Iterator* DinerMenu::createIterator()
{
    return new DinerMenuIterator(menuItems, sizeof(menuItems)/sizeof(*menuItems));
}

CafeMenu::CafeMenu()
{
    addItem("Veggie Burger and Air Fries",
            "Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
            true,
            3.99);

    addItem("Soup of the day",
            "A cup of the soup of the day, with a side salad",
            false,
            3.69);

    addItem("Burrito",
            "A large burrito, with whole pinto beans, salsa, guacamole",
            true,
            4.29);
}

CafeMenu::~CafeMenu()
{
    map<string, MenuItem*>::iterator iter;
    for(iter=menuItems.begin(); iter!=menuItems.end(); iter++)
    {
        delete iter->second;
    }
}

void CafeMenu::addItem(const string &name, const string &description,
        bool vegetarian, double price)
{
    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
    menuItems.insert(pair<string, MenuItem*>(menuItem->getName(), menuItem));
}

Iterator* CafeMenu::createIterator()
{
    return new CafeMenuIterator(menuItems);
}

