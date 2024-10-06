#include "DevelopedCountry.h"

DevelopedCountry::DevelopedCountry(std::string name, std::string capital, int population, City city, President* president, double gdp) : Country(name, capital, population, city, president){
    this->gdp = gdp;
}

double DevelopedCountry::getGDP() {
    return gdp;
}
