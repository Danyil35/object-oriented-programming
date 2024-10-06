#ifndef DEVELOPEDCOUNTRY_H
#define DEVELOPEDCOUNTRY_H
#include "Country.h"

class DevelopedCountry : public Country {
public:
    DevelopedCountry(std::string name, std::string capital, int population, City city, President* president, double gdp);

    double getGDP();

private:
    double gdp;
};

#endif
