#ifndef __CEILINGFAN_H__
#define __CEILINGFAN_H__

#include <string>

using namespace std;

class CeilingFan
{
public:
    const static int HIGH = 3;
    const static int MEDIUM = 2;
    const static int LOW = 1;
    const static int OFF = 0;
    string location;
    int speed;

    CeilingFan(const string &location);
    void high();
    void medium();
    void low();
    void off();
    int getSpeed();
};

#endif

