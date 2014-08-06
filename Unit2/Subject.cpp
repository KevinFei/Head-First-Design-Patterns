#include "Observer.h"
#include "Subject.h"


void WeatherData::registerObserver(Observer *o)
{
	observers.insert(o);
}

void WeatherData::removeObserver(Observer *o)
{
	set<Observer *>::iterator iter;
	if((iter=observers.find(o)) != observers.end())
	{
		observers.erase(iter);
	}
}

void WeatherData::notifyObservers()
{
	set<Observer *>::iterator iter;
	for(iter=observers.begin(); iter!=observers.end(); iter++)
	{
		(*iter)->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChange()
{
	notifyObservers();
}

void WeatherData::setMeasurements(float temperature, 
		float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChange();
}

