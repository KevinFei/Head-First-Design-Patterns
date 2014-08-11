#include <iostream>

#include "HomeTheaterFacade.h"

using namespace std;

HomeTheaterFacade::HomeTheaterFacade(Amplifier *amp,
			Tuner *tuner,
			DvdPlayer *dvd,
			CdPlayer *cd,
			Projector *projector,
			TheaterLights *lights,
			Screen *screen,
			PopcornPopper *popper)
{
	this->amp = amp;
	this->tuner = tuner;
	this->dvd = dvd;
	this->cd = cd;
	this->projector = projector;
	this->lights = lights;
	this->screen = screen;
	this->popper = popper;
}

void HomeTheaterFacade::watchMovie(string movie)
{
	cout << "Get ready to watch a movie..." << endl;
	popper->on();
	popper->pop();
	lights->dim(10);
	screen->down();
	projector->on();
	projector->wideScreenMode();
	amp->on();
	amp->setDvd(dvd);
	amp->setSurroundSound();
	amp->setVolume(5);
	dvd->on();
	dvd->play(movie);
}

void HomeTheaterFacade::endMovie()
{
	cout << "Shutting movie theater down..." << endl;
	popper->off();
	lights->on();
	screen->up();
	projector->off();
	amp->off();
	dvd->stop();
	dvd->eject();
	dvd->off();
}

