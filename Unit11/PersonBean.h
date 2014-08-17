#ifndef __PERSONBEAN_H__
#define __PERSONBEAN_H__

#include <string>

using namespace std;

class PersonBean
{
public:
    virtual ~PersonBean(){}
    virtual string getName() = 0;
    virtual string getGender() = 0;
    virtual string getInterests() = 0;
    virtual int getHotOrNotRating() = 0;

    virtual void setName(const string &name) = 0;
    virtual void setGender(const string &gender) = 0;
    virtual void setInterests(const string &interests) = 0;
    virtual void setHotOrNotRating(int rating) = 0;
};

class PersonBeanImpl: public PersonBean
{
    string name;
    string gender;
    string interests;
    int rating;
    int ratingCount;

public:
    PersonBeanImpl();
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

