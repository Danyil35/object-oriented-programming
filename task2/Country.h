#ifndef COUNTRY_H
#define COUNTRY_H
#include <string>
#include "City.h"
#include "President.h"

class Country {
public:
    Country(std::string name, std::string capital, int population, City city, President* president);

    void setName(std::string name);
    std::string getName();

    void setCapital(std::string capital);
    std::string getCapital();

    void setPopulation(int population);
    int getPopulation();

    City getCity();
    President* getPresident();

private:
    std::string name;
    std::string capital;
    int population;
    City city;
    President* president;
};

#endif
