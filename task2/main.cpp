#include <iostream>
#include <string>

using namespace std;

struct Country {
    string name;
    string capital;
    int population;
};

void setName(Country& country, const string& countryName) {
    country.name = countryName;
}

string getName(const Country& country) {
    return country.name;
}

void setCapital(Country& country, const string& countryCapital) {
    country.capital = countryCapital;
}

string getCapital(const Country& country) {
    return country.capital;
}

void setPopulation(Country& country, int countryPopulation) {
    country.population = countryPopulation;
}

int getPopulation(const Country& country) {
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
