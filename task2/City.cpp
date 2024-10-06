#include "City.h"

City::City(std::string name, int population) {
    this->name = name;
    this->population = population;
}

std::string City::getName() {
    return name;
}

int City::getPopulation() {
    return population;
}
