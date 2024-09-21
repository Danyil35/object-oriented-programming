#include <iostream>
#include "Country.h"

int main(){
    Country UKR;
    UKR.setName("Ukraine");
    UKR.setCapital("Kyiv");
    UKR.setPopulation(41258478);
    cout << "Country: " << UKR.getName() << endl;
    cout << "Capital: " << UKR.getCapital() << endl;
    cout << "Population: " << UKR.getPopulation() << endl;
    return 0;
}