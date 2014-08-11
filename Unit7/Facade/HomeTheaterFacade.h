#ifndef __HOMETHEATERFACADE_H__
#define __HOMETHEATERFACADE_H__

#include <string>

#include "HomeTheater.h"

using namespace std;

class Amplifier;
class Tuner;
class DvdPlayer;
class CdPlayer;
class Projector;
class TheaterLights;
class Screen;
class PopcornPopper;

class HomeTheaterFacade
{
	Amplifier *amp;
	Tuner *tuner;
	DvdPlayer *dvd;
	CdPlayer *cd;
	Projector *projector;
	TheaterLights *lights;
	Screen *screen;
	PopcornPopper *popper;

public:
	HomeTheaterFacade(Amplifier *amp,
			Tuner *tuner,
			DvdPlayer *dvd,
			CdPlayer *cd,
			Projector *projector,
			TheaterLights *lights,
			Screen *screen,
			PopcornPopper *popper);

	void watchMovie(string movie);
	void endMovie();
};

#endif

