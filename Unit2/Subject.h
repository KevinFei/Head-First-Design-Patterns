#ifndef __SUBJECT_H__
#define __SUBJECT_H__

#include <set>

using namespace std;

class Observer;

class Subject
{
public:
    virtual ~Subject(){}
	virtual void registerObserver(Observer *o) = 0;
	virtual void removeObserver(Observer *o) = 0;
	virtual void notifyObservers() = 0;
};

class WeatherData: public Subject
{
private:
	set<Observer *> observers;
	float temperature;
	float humidity;
	float pressure;

public:
	void registerObserver(Observer *o);
	void removeObserver(Observer *o);
	void notifyObservers();
	void measurementsChange();
	void setMeasurements(float temperature, float humidity, float pressure);
};

#endif

