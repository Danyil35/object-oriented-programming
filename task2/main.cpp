#include <iostream>
#include <string>

using namespace std;

struct Country {
    string name;
    string capital;
    int population;
};

void setName(Country& country, string countryName) {
    country.name = countryName;
}

string getName(Country& country) {
    return country.name;
}

void setCapital(Country& country, string countryCapital) {
    country.capital = countryCapital;
}

string getCapital(Country& country) {
    return country.capital;
}

void setPopulation(Country& country, int countryPopulation) {
    country.population = countryPopulation;
}

int getPopulation(Country& country) {
    return country.population;
}

int main() {
    Country UKR;

    setName(UKR, "Ukraine");
    setCapital(UKR, "Kyiv");
    setPopulation(UKR, 41258478);
    
    cout << "Country: " << getName(UKR) << endl;
    cout << "Capital: " << getCapital(UKR) << endl;
    cout << "Population: " << getPopulation(UKR) << endl;

    return 0;
}
