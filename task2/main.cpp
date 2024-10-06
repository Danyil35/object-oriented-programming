#include <iostream>
#include "Country.h"
#include "City.h"
#include "President.h"
#include "DevelopedCountry.h"

using namespace std;

int main() {
    City kyiv("Kyiv", 2967000);
    President president_of_ukraine("Volodymyr Zelensky", 45);

    Country ukraine("Ukraine", "Kyiv", 41258478, kyiv, &president_of_ukraine);

    cout << "Country: " << ukraine.getName() << endl;
    cout << "Capital: " << ukraine.getCapital() << endl;
    cout << "Population: " << ukraine.getPopulation() << endl;
    cout << "City: " << ukraine.getCity().getName() << endl;
    cout << "City Population: " << ukraine.getCity().getPopulation() << endl;
    cout << "President: " << ukraine.getPresident()->getName() << endl;
    cout << "President Age: " << ukraine.getPresident()->getAge() << endl << endl;

    City berlin("Berlin", 3769000);
    President president_of_germany("Frank-Walter Steinmeier", 68);
    DevelopedCountry germany("Germany", "Berlin", 83149300, berlin, &president_of_germany, 3846.4);
    cout << "Developed Country: " << germany.getName() << endl;
    cout << "Capital: " << germany.getCapital() << endl;
    cout << "Population: " << germany.getPopulation() << endl;
    cout << "City: " << germany.getCity().getName() << endl;
    cout << "City Population: " << germany.getCity().getPopulation() << endl;
    cout << "President: " << germany.getPresident()->getName() << endl;
    cout << "President Age: " << germany.getPresident()->getAge() << endl;
    cout << "GDP: " << germany.getGDP() << " billion USD" << endl;

    return 0;
}
