#include <vector>

#include "Iterator.h"
#include "MenuItem.h"
#include "Waitress.h"

using namespace std;

int main()
{
    Menu *pancakeHouseMenu = new PancakeHouseMenu();
    Menu *dinerMenu = new DinerMenu();
    Menu *cafeMenu = new CafeMenu();
    vector<Menu*> menu;

    menu.push_back(pancakeHouseMenu);
    menu.push_back(dinerMenu);
    menu.push_back(cafeMenu);

    Waitress *waitress = new Waitress(menu);

    waitress->printMenu();

    delete pancakeHouseMenu;
    delete dinerMenu;
    delete cafeMenu;
    delete waitress;

    return 0;
}

