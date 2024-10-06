#ifndef CITY_H
#define CITY_H
#include <string>

class City {
public:
    City(std::string name, int population);

    std::string getName();
    int getPopulation();

private:
    std::string name;
    int population;
};

#endif
