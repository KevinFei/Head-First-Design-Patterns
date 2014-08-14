#include <typeinfo>

#include "Iterator.h"
#include "Menu.h"

CompositeIterator::CompositeIterator(Iterator* iterator)
{
    m_stack.push(iterator);
}

MenuComponent* CompositeIterator::next()
{
    if(hasNext())
    {
        Iterator* iterator = m_stack.top();
        MenuComponent *component = iterator->next();
        if(dynamic_cast<Menu*>(component) != NULL)
        {
            m_stack.push(component->createIterator());
        }
        return component;
    }
    else
    {
        return NULL;
    }
}

bool CompositeIterator::hasNext()
{
    if(m_stack.empty())
    {
        return false;
    }
    else
    {
        Iterator *iterator = m_stack.top();
        if(!iterator->hasNext())
        {
            m_stack.pop();
            return hasNext();
        }
        else
        {
            return true;
        }
    }
}

void CompositeIterator::remove()
{
    throw UnsupportedOperationException();
}

MenuComponent* NullIterator::next()
{
    return NULL;
}

bool NullIterator::hasNext()
{
    return false;
}

void NullIterator::remove()
{
    throw UnsupportedOperationException();
}

MenuIterator::MenuIterator(vector<MenuComponent*> &items)
{
    this->items = items;
    iter = this->items.begin();
}

MenuComponent* MenuIterator::next()
{
    MenuComponent *menuItem = *iter;
    iter++;
    return menuItem;
}

bool MenuIterator::hasNext()
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

void MenuIterator::remove()
{
    throw UnsupportedOperationException();
}

