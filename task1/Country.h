#ifndef COUNTRY_H
#define COUNTRY_H
#include <string>


class Country {
public:
    void setName(std::string name);
    std::string getName();

    void setCapital(std::string capital);
    std::string getCapital();

    void setPopulation(int population);
    int getPopulation();
private:
    std::string name;
    std::string capital;
    int population;
};

#endif