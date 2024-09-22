#include "Country.h"


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

