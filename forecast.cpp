#include <iostream>
#include <string>

// Прогноз на день: температура и описание
struct Forecast
{
    int temperature;
    std::string description;
};

void printForecast(const Forecast& f)
{
    std::cout << f.description << ", " << f.temperature << " C" << std::endl;
}
