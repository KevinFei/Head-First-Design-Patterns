#ifndef __PROXY_H__
#define __PROXY_H__

#include <exception>

#include "PersonBean.h"

class IllegalAccessException: public exception
{
    const char* what() const throw()
    {
        return "Illegal Access";
    }
};

class OwnerProxy: public PersonBean
{
    PersonBean *personBean;

public:
    OwnerProxy(PersonBean *personBean);
    string getName();
    string getGender();
    string getInterests();
    int getHotOrNotRating();

    void setName(const string &name);
    void setGender(const string &gender);
    void setInterests(const string &interests);
    void setHotOrNotRating(int rating);
};

class NonOwnerProxy: public PersonBean
{
    PersonBean *personBean;

public:
    NonOwnerProxy(PersonBean *personBean);
    string getName();
    string getGender();
    string getInterests();
    int getHotOrNotRating();

    void setName(const string &name);
    void setGender(const string &gender);
    void setInterests(const string &interests);
    void setHotOrNotRating(int rating);
};

#endif

