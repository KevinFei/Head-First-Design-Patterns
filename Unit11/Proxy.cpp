#include "Proxy.h"

OwnerProxy::OwnerProxy(PersonBean *personBean)
{
    this->personBean = personBean;
}

string OwnerProxy::getName()
{
    return personBean->getName();
}

string OwnerProxy::getGender()
{
    return personBean->getGender();
}

string OwnerProxy::getInterests()
{
    return personBean->getInterests();
}

int OwnerProxy::getHotOrNotRating()
{
    return personBean->getHotOrNotRating();
}

void OwnerProxy::setName(const string &name)
{
    personBean->setName(name);
}

void OwnerProxy::setGender(const string &gender)
{
    personBean->setGender(gender);
}

void OwnerProxy::setInterests(const string &interests)
{
    personBean->setInterests(interests);
}

void OwnerProxy::setHotOrNotRating(int rating)
{
    throw IllegalAccessException();
}

NonOwnerProxy::NonOwnerProxy(PersonBean *personBean)
{
    this->personBean = personBean;
}

string NonOwnerProxy::getName()
{
    return personBean->getName();
}

string NonOwnerProxy::getGender()
{
    return personBean->getGender();
}

string NonOwnerProxy::getInterests()
{
    return personBean->getInterests();
}

int NonOwnerProxy::getHotOrNotRating()
{
    return personBean->getHotOrNotRating();
}

void NonOwnerProxy::setName(const string &name)
{
    throw IllegalAccessException();
}

void NonOwnerProxy::setGender(const string &gender)
{
    throw IllegalAccessException();
}

void NonOwnerProxy::setInterests(const string &interests)
{
    throw IllegalAccessException();
}

void NonOwnerProxy::setHotOrNotRating(int rating)
{
    personBean->setHotOrNotRating(rating);
}

