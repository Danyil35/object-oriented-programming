#include <iostream>
#include "Country.h"

using namespace std;


int main(){
    Country defaultConstructor;
    cout << "Default Country: " << defaultConstructor.getName() << endl;
    cout << "Default Capital: " << defaultConstructor.getCapital() << endl;
    cout << "Default Population: " << defaultConstructor.getPopulation() << endl << endl;

    Country UKR("Ukraine", "Kyiv", 41258478);
    cout << "Parameterized Country: " << UKR.getName() << endl;
    cout << "Parameterized Capital: " << UKR.getCapital() << endl;
    cout << "Parameterized Population: " << UKR.getPopulation() << endl << endl;

    Country copiedUKR(UKR);
    cout << "Copied Country: " << copiedUKR.getName() << endl;
    cout << "Copied Capital: " << copiedUKR.getCapital() << endl;
    cout << "Copied Population: " << copiedUKR.getPopulation() << endl << endl;
    return 0;
}