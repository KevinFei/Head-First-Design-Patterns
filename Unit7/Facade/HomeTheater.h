#ifndef __HOMETHEATER_H__
#define __HOMETHEATER_H__

#include <string>

using namespace std;

class Tuner
{
};

class DvdPlayer
{
    string movie;

public:
    void on();
    void play(const string &movie);
    void stop();
    void eject();
    void off();
};

class Amplifier
{
public:
    void on();
    void setDvd(DvdPlayer *dvd);
    void setSurroundSound();
    void setVolume(int volume);
    void off();
};

class CdPlayer
{
};

class Projector
{
public:
    void on();
    void wideScreenMode();
    void off();
};

class TheaterLights
{
public:
    void dim(int brightness);
    void on();
};

class Screen
{
public:
    void down();
    void up();
};

class PopcornPopper
{
public:
    void on();
    void pop();
    void off();
};

#endif

