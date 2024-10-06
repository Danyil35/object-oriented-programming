#include "Country.h"

Country::Country(std::string name, std::string capital, int population, City city, President* president) : city(city), president(president) {
        this->name = name;
        this->capital = capital;
        this->population = population;
    }

void Country::setName(std::string name) {
    this->name = name;
}

std::string Country::getName() {
    return name;
}

void Country::setCapital(std::string capital) {
    this->capital = capital;
}

std::string Country::getCapital() {
    return capital;
}

void Country::setPopulation(int population) {
    this->population = population;
}

int Country::getPopulation() {
    return population;
}

City Country::getCity() {
    return city;
}

President* Country::getPresident() {
    return president;
}
