#include "PersonBean.h"

PersonBeanImpl::PersonBeanImpl()
{
    rating = 0;
    ratingCount = 0;
}

string PersonBeanImpl::getName()
{
    return name;
}

string PersonBeanImpl::getGender()
{
    return gender;
}

string PersonBeanImpl::getInterests()
{
    return interests;
}

int PersonBeanImpl::getHotOrNotRating()
{
    if(ratingCount == 0)
        return 0;
    return rating/ratingCount;
}

void PersonBeanImpl::setName(const string &name)
{
    this->name = name;
}

void PersonBeanImpl::setGender(const string &gender)
{
    this->gender = gender;
}

void PersonBeanImpl::setInterests(const string &interests)
{
    this->interests = interests;
}

void PersonBeanImpl::setHotOrNotRating(int rating)
{
    this->rating += rating;
    ratingCount++;
}

