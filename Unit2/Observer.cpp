#include <iostream>

#include "Subject.h"
#include "Observer.h"

using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, 
        float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display()
{
    cout << "Current conditions: "
        << temperature
        << "F degrees and "
        << humidity
        << "\% humidity"
        << endl;
}

StatisticsDisplay::StatisticsDisplay(Subject* weatherData)
{
    maxTemp = 0.0f;
    minTemp = 200;
    tempSum= 0.0f;
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure)
{
    tempSum += temperature;
    numReadings++;

    if (temperature > maxTemp)
    {
        maxTemp = temperature;
    }

    if (temperature < minTemp)
    {
        minTemp = temperature;
    }

    display();
}

void StatisticsDisplay::display()
{
    cout << "Avg/Max/Min temperature = "
        << tempSum / numReadings 
        << "/" << maxTemp 
        << "/" << minTemp
        << endl;
}

ForecastDisplay::ForecastDisplay(Subject* weatherData)
{
    currentPressure = 29.92f;
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure)
{
    lastPressure = currentPressure;
    currentPressure = pressure;

    display();
}

void ForecastDisplay::display()
{
    cout << "Forecast: ";
    if(currentPressure > lastPressure)
    {
        cout << "Improving weather on the way!" << endl;
    }
    else if(currentPressure == lastPressure)
    {
        cout << "More of the same" << endl;
    }
    else
    {
        cout << "Watch out for cooler, rainy weather" << endl;
    }
}

