#include <iostream>
using namespace std;

class AnyVehicle {
public:
    virtual void move() {
        cout << "Any vehicle should move!!" << endl;
    }
};

class Bike : public AnyVehicle {
public:
    void move() override {
        cout << "Bike can move too!!" << endl;
    }
};

int main() {
    AnyVehicle* vehicle = new Bike();  // Polymorphism - Base class pointer to derived class object
    vehicle->move();  // Output will be "Bike can move too!!"
    delete vehicle;  // Don't forget to free the memory allocated for the object

    vehicle = new AnyVehicle();
    vehicle->move();  // Output will be "Any vehicle should move!!"
    delete vehicle;  // Don't forget to free the memory allocated for the object
    return 0;
}
