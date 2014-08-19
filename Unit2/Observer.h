#ifndef __OBSERVER_H__
#define __OBSERVER_H__

class Subject;

class DisplayElement
{
public:
    virtual ~DisplayElement(){}
    virtual void display() = 0;
};

class Observer
{
public:
    virtual void update(float temperature, float humidity, float pressure) = 0;
};

class CurrentConditionsDisplay: public Observer, public DisplayElement
{
private:
    float temperature;
    float humidity;
    Subject* weatherData;

public:
    CurrentConditionsDisplay(Subject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};

class StatisticsDisplay: public Observer, public DisplayElement
{
private:
    float maxTemp;
    float minTemp;
    float tempSum;
    int numReadings;
    Subject* weatherData;

public:
    StatisticsDisplay(Subject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};

class ForecastDisplay: public Observer, public DisplayElement
{
private:
    float currentPressure;
    float lastPressure;
    Subject* weatherData;

public:
    ForecastDisplay(Subject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};

#endif

