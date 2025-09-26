#include<iostream>
using namespace std;

class Vehicle {
public:
    float speed;
    Vehicle(float s) {
        speed = s;
    }
};

class Car : public Vehicle {
public:
    int seats;
    Car(float s, int seatcount) : Vehicle(s) {
        seats = seatcount;
    }
};

class ElectricCar : public Car {
public:
    string battery;
    ElectricCar(float s, int seatcount, string b) : Car(s, seatcount) {
        battery = b;
    }
};

class Airplane {
public:
    float maxspeed;
    Airplane(float ms) {
        maxspeed = ms;
    }
};

class FlyingCar : public Car, public Airplane {
public:
    FlyingCar(float s, int seatcount, float ms) :
        Car(s, seatcount), Airplane(ms) {}
};

int main() {
    Vehicle v(45);
    Car c(440, 45);
    ElectricCar e(78, 4, "Lithium-Ion"); 
    Airplane air(2000);
    FlyingCar f(452, 120, 2000.00);
    return 0;
}
