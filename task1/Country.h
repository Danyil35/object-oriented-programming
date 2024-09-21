#define COUNTRY_H
#include <string>

using namespace std;

class Country {
public:
    void setName(string name);
    string getName();

    void setCapital(string capital);
    string getCapital();

    void setPopulation(int population);
    int getPopulation();
private:
    string name;
    string capital;
    int population;
};