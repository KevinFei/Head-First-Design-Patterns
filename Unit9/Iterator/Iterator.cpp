#include <iostream>

#include "Iterator.h"

using namespace std;

DinerMenuIterator::DinerMenuIterator(MenuItem *items[], int length)
{
    this->items = items;
    this->length = length;
    position = 0;
}

MenuItem* DinerMenuIterator::next()
{
    MenuItem *menuItem = items[position];
    position++;
    return menuItem;
}

bool DinerMenuIterator::hasNext()
{
    if(position >= length || items[position] == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

PancakeHouseMenuIterator::PancakeHouseMenuIterator(vector<MenuItem*> &items)
{
    this->items = items;
    iter = this->items.begin();
}

MenuItem* PancakeHouseMenuIterator::next()
{
    MenuItem *menuItem = *iter;
    iter++;
    return menuItem;
}

bool PancakeHouseMenuIterator::hasNext()
{
    if(iter != items.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

CafeMenuIterator::CafeMenuIterator(map<string, MenuItem*> &items)
{
    this->items = items;
    iter = this->items.begin();
}

MenuItem* CafeMenuIterator::next()
{
    MenuItem *menuItem = iter->second;
    iter++;
    return menuItem;
}

bool CafeMenuIterator::hasNext()
{
    if(iter != items.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}

