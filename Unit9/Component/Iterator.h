#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include <vector>
#include <stack>

using namespace std;

class MenuComponent;

class Iterator
{
public:
    virtual ~Iterator(){}
    virtual bool hasNext() = 0;
    virtual MenuComponent* next() = 0;
    virtual void remove() = 0;
};

class CompositeIterator: public Iterator
{
private:
    stack<Iterator*> m_stack;
public:
    CompositeIterator(Iterator* iterator);
    MenuComponent* next();
    bool hasNext();
    void remove();
};

class NullIterator: public Iterator
{
public:
    MenuComponent* next();
    bool hasNext();
    void remove();
};

class MenuIterator: public Iterator
{
private:
    vector<MenuComponent*> items;
    vector<MenuComponent*>::iterator iter;
public:
    MenuIterator(vector<MenuComponent*> &items);
    MenuComponent* next();
    bool hasNext();
    void remove();
};

#endif

