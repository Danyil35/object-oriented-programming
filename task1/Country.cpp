#include "Country.h"
#include <iostream>


Country::Country() {
    name = "Not initialized"; 
    capital = "Not initialized";
    population = 0; 
    std::cout << "Default constructor called." << std::endl;
}

Country::Country(std::string name, std::string capital, int population) {
    this->name = name; 
    this->capital = capital; 
    this->population = population;
    std::cout << "Parameterized constructor called." << std::endl;
}

Country::Country(const Country& other) {
    name = other.name; 
    capital = other.capital;
    population = other.population; 
    std::cout << "Copy constructor called." << std::endl;
}

Country::~Country() {
    std::cout << "Destructor called." << std::endl;
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

