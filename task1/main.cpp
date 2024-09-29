#include <iostream>
#include <string>

using namespace std;


class Engine {
public:
    Engine(string type, double volume){
        this->type = type;
        this->volume = volume;
    }

    string getEngineType() {
        return type;
    }

    double getEngineVolume() {
       return volume;
    }

private:
    string type;
    double volume;
};

class Interior {
public:
    Interior(int seats, string type){
        this->seats = seats; 
        this->type = type;
    }

    int getInteriorSeats() {
        return seats;
    }

    string getInteriorType() {
        return type;
    }

private:
    int seats;
    string type;
};

class Car {
public:
    Car(string brand, string model, Engine engine, Interior interior) : engine(engine), interior(interior){
        this->brand = brand;
        this->model = model;
    }

    void carInfo() {
        cout << "Car: " << brand << " " << model << endl;
        
        cout << "Engine type: " << engine.getEngineType() << endl;
        cout << "Engine volume: " << engine.getEngineVolume() << endl;
        
        cout << "Interior seats: " << interior.getInteriorSeats() << endl;
        cout << "Interior type: " << interior.getInteriorType() << endl;
    }

private:
    string brand;
    string model;
    Engine engine;
    Interior interior;
};

class SportsCar : public Car {
public:
    SportsCar(string brand, string model, Engine engine, Interior interior, double maxSpeed) : Car(brand, model, engine, interior){
        this->maxSpeed = maxSpeed;
    }

    void carInfo() {
        Car::carInfo();
        cout << "Maximum speed: " << maxSpeed << endl;
    }

private:
    double maxSpeed;
};


int main() {
    Engine engineCar("Diesel", 2.0);
    Interior interiorCar(5, "Leather");

    Car car("Volkswagen", "golf", engineCar, interiorCar);
    car.carInfo();

    cout << endl;

    Engine engineSportsCar("Diesel", 5.0);
    Interior interiorSportsCar(4, "Leather");

    SportsCar sportsCar("Ford", "Mustang", engineSportsCar, interiorSportsCar, 250.4);    
    sportsCar.carInfo();

    return 0;
}
