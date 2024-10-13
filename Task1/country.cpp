#include "country.h"

void Country::setName(std::string name){
    this->name = name;
}
void Country::setCapital(std::string capital){
    this->capital = capital;
}
void Country::setPopulation(int population){
    this->population = population;
}
std::string Country::getName(){
    return name;
}
std::string Country::getCapital(){
    return capital;
}
int Country::getPopulation(){
    return population;
}