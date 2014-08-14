#ifndef __WAITRESS_H__
#define __WAITRESS_H__

class MenuComponent;

class Waitress
{
    MenuComponent *allMenus;

public:
    Waitress(MenuComponent *allMenus);
    void printMenu();
    void printVegetarianMenu();
};

#endif

