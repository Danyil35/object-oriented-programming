#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Train {
protected:
    int trainNumber;
    string departurePoint;
    string arrivalPoint;
    string departureTime;
    string arrivalTime;

public:
    Train(int trainNumber, string departurePoint, string arrivalPoint, string departureTime, string arrivalTime){
        this->trainNumber = trainNumber;
        this->departurePoint = departurePoint;
        this->arrivalPoint = arrivalPoint;
        this->departureTime = departureTime;
        this->arrivalTime = arrivalTime;
    }

    void setTrainNumber(int number) {
        trainNumber = number;
    }

    void setDeparturePoint(string dep) {
        departurePoint = dep;
    }

    void setArrivalPoint(string arr) {
        arrivalPoint = arr;
    }

    void setDepartureTime(string depTime) {
        departureTime = depTime;
    }

    void setArrivalTime(string arrTime) {
        arrivalTime = arrTime;
    }
    
    int getTrainNumber() {
        return trainNumber;
    }

    string getDeparturePoint() {
        return departurePoint;
    }

    string getArrivalPoint() {
        return arrivalPoint;
    }

    string getDepartureTime() {
        return departureTime;
    }

    string getArrivalTime() {
        return arrivalTime;
    }

    void validateTime() {
        if (arrivalTime <= departureTime) {
            throw invalid_argument("Error: The arrival time cannot be earlier than or equal to the departure time.");
        }
    }

    virtual void displayInfo() {cout << "No info" << endl;};
};

class PassengerTrain : public Train {
private:
    int sittingPlaces;
    int sleepingPlaces;

public:
    PassengerTrain(int trainNumber, string departurePoint, string arrivalPoint, string departureTime, string arrivalTime, int sittingPlaces, int sleepingPlaces) : Train(trainNumber, departurePoint, arrivalPoint, departureTime, arrivalTime){
        this->sittingPlaces = sittingPlaces;
        this->sleepingPlaces = sleepingPlaces;
    }

    void setSittingPlaces(int sitPlaces) {
        sittingPlaces = sitPlaces;
    }

    void setSleepingPlaces(int sleepPlaces) {
        sleepingPlaces = sleepPlaces;
    }

    int getSittingPlaces() {
        return sittingPlaces;
    }

    int getSleepingPlaces() {
        return sleepingPlaces;
    }

    void displayInfo() override {
        cout << "Passenger train No. " << trainNumber << endl;
        cout << "Departure point: " << departurePoint << endl;
        cout << "Arrival point: " << arrivalPoint << endl;
        cout << "Departure time: " << departureTime << endl;
        cout << "Arrival time: " << arrivalTime << endl;
        cout << "Number of seating places: " << sittingPlaces << endl;
        cout << "Number of sleeping places: " << sleepingPlaces << endl;
    }
};

class FreightTrain : public Train {
private:
    double maxCargoWeight;
    int numberOfWagons;

public:
    FreightTrain(int trainNumber, string departurePoint, string arrivalPoint, string departureTime, string arrivalTime, double maxCargoWeight, int numberOfWagons) : Train(trainNumber, departurePoint, arrivalPoint, departureTime, arrivalTime){
        this->maxCargoWeight = maxCargoWeight;
        this->numberOfWagons = numberOfWagons;
    }

    void setMaxCargoWeight(double cargoWeight) {
        maxCargoWeight = cargoWeight;
    }

    void setNumberOfWagons(int wagons) {
        numberOfWagons = wagons;
    }

    double getMaxCargoWeight() {
        return maxCargoWeight;
    }

    int getNumberOfWagons() {
        return numberOfWagons;
    }

    void displayInfo() override {
        cout << "Freight train No. " << trainNumber << endl;
        cout << "Departure point: " << departurePoint << endl;
        cout << "Arrival point: " << arrivalPoint << endl;
        cout << "Departure time: " << departureTime << endl;
        cout << "Arrival time: " << arrivalTime << endl;
        cout << "Maximum cargo weight: " << maxCargoWeight << " tons" << endl;
        cout << "Number of wagons: " << numberOfWagons << endl;
    }
};

int main() {
    try {
        PassengerTrain passengerTrain(123, "Kyiv", "Lviv", "12:00", "15:00", 100, 50);
        passengerTrain.validateTime();
        passengerTrain.displayInfo();

        cout << endl;

        FreightTrain freightTrain(456, "Odesa", "Kharkiv", "19:00", "18:00", 500.0, 20);
        freightTrain.validateTime();
        freightTrain.displayInfo();

    }
    catch (exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
