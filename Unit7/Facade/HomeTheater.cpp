#include <iostream>

#include "HomeTheater.h"

using namespace std;

void Amplifier::on()
{
    cout << "Amplifier on" << endl;
}

void Amplifier::setDvd(DvdPlayer *dvd)
{
    cout << "Amplifier setDvd" << endl;
}

void Amplifier::setSurroundSound()
{
    cout << "Amplifier setSurroundSound" << endl;
}

void Amplifier::setVolume(int volume)
{
    cout << "Amplifier setting volume to" << volume << endl;
}

void Amplifier::off()
{
    cout << "Amplifier off" << endl;
}

void DvdPlayer::on()
{
    cout << "DvdPlayer on" << endl;
}

void DvdPlayer::play(const string &movie)
{
    this->movie = movie;
    cout << "DvdPlayer playing \"" << movie << '"' << endl;
}

void DvdPlayer::stop()
{
    cout << "DvdPlayer stopped \"" << movie << '"' << endl;
}

void DvdPlayer::eject()
{
    cout << "DvdPlayer eject" << endl; 
}

void DvdPlayer::off()
{
    cout << "DvdPlayer off" << endl; 
}

void Projector::on()
{
    cout << "Projector on" << endl;
}

void Projector::wideScreenMode()
{
    cout << "Projector in widescreen mode" << endl;
}

void Projector::off()
{
    cout << "Projector off" << endl;
}

void TheaterLights::dim(int brightness)
{
    cout << "Lights dimming to " << brightness << '%' << endl;
}

void TheaterLights::on()
{
    cout << "Lights on" << endl;
}

void Screen::down()
{
    cout << "Screen going down" << endl;
}

void Screen::up()
{
    cout << "Screen going up" << endl;
}

void PopcornPopper::on()
{
    cout << "PopcornPopper on" << endl;
}

void PopcornPopper::pop()
{
    cout << "PopcornPopper popping popcorn!" << endl;
}

void PopcornPopper::off()
{
    cout << "PopcornPopper off" << endl;
}

