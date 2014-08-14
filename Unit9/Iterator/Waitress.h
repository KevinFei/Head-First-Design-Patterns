#ifndef __WAITRESS_H__
#define __WAITRESS_H__

#include <vector>

using namespace std;

class Menu;
class PancakeHouseMenu;
class DinerMenu;
class Iterator;

class Waitress
{
private:
    vector<Menu*> menus;

    void printMenu(Iterator *iterator);

public:
    Waitress(vector<Menu*> &menus);
    void printMenu();
};

#endif

