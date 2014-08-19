#ifndef __TURKEY_H__
#define __TURKEY_H__

class Turkey
{
public:
    virtual ~Turkey(){}
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

class WildTurkey: public Turkey
{
public:
    void gobble();
    void fly();
};

#endif

