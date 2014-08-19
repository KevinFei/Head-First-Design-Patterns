#include <iostream>
#include <string>

#include "Observer.h"
#include "Subject.h"

using namespace std;

int main()
{
    WeatherData *weatherData = new WeatherData();
    CurrentConditionsDisplay* currentDisplay = 
        new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay* statisticsDisplay = new StatisticsDisplay(weatherData);
    ForecastDisplay* forecastDisplay = new ForecastDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4f);
    cout << endl;
    weatherData->setMeasurements(82, 70, 29.2f);
    cout << endl;

    weatherData->removeObserver(currentDisplay);
    weatherData->removeObserver(currentDisplay);
    weatherData->removeObserver(currentDisplay);
    weatherData->removeObserver(currentDisplay);
    weatherData->setMeasurements(78, 90, 29.2f);
    cout << endl;

    delete weatherData;
    delete currentDisplay;
    delete statisticsDisplay;
    delete forecastDisplay;

    return 0;
}

