#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include <string>
#include <vector>
#include <map>

using namespace std;

class MenuItem;

class Iterator
{
public:
    virtual ~Iterator(){}
    virtual bool hasNext() = 0;
    virtual MenuItem* next() = 0;
};

class DinerMenuIterator: public Iterator
{
private:
    MenuItem **items;
    int position;
    int length;
public:
    DinerMenuIterator(MenuItem *items[], int length);
    MenuItem* next();
    bool hasNext();
};

class PancakeHouseMenuIterator: public Iterator
{
private:
    vector<MenuItem*> items;
    vector<MenuItem*>::iterator iter;
public:
    PancakeHouseMenuIterator(vector<MenuItem*> &items);
    MenuItem* next();
    bool hasNext();
};

class CafeMenuIterator: public Iterator
{
private:
    map<string, MenuItem*> items;
    map<string, MenuItem*>::iterator iter;
public:
    CafeMenuIterator(map<string, MenuItem*> &items);
    MenuItem* next();
    bool hasNext();
};

#endif

