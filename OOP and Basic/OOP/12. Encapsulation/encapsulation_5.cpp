#include <iostream>
#include <string>

class Car
{
private:
    std::string make;  // private attribute
    std::string model; // private attribute
    int year;          // private attribute
    int speed;         // private attribute
    int fuelLevel;     // private attribute

public:
    // Constructor
    Car(std::string make, std::string model, int year)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->speed = 0;
        this->fuelLevel = 100;
    }

    // Public method to get the make of the car
    std::string getMake()
    {
        return make;
    }

    // Public method to get the model of the car
    std::string getModel()
    {
        return model;
    }

    // Public method to get the year of the car
    int getYear()
    {
        return year;
    }

    // Public method to get the current speed of the car
    int getSpeed()
    {
        return speed;
    }

    // Public method to get the current fuel level of the car
    int getFuelLevel()
    {
        return fuelLevel;
    }

    // Public method to accelerate the car
    void accelerate(int amount)
    {
        if (fuelLevel > 0)
        {
            speed += amount;
            fuelLevel -= amount / 2;
        }
        else
        {
            std::cout << "Out of fuel!" << std::endl;
        }
    }

    // Public method to brake the car
    void brake()
    {
        speed = std::max(0, speed - 10);
    }
};

int main()
{
    // Create a car object
    Car myCar("Toyota", "Camry", 2020);

    // Accessing public methods to interact with the car
    std::cout << "Make: " << myCar.getMake() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    // Accelerating the car
    myCar.accelerate(30);
    std::cout << "Current speed: " << myCar.getSpeed() << std::endl;

    // Braking the car
    myCar.brake();
    std::cout << "Current speed after braking: " << myCar.getSpeed() << std::endl;

    return 0;
}
/*
1. Data Protection: The internal state of the `Car` class(make, model, year, speed, and fuel level) is kept private within the class,
using the `private` access modifier.Access to these attributes is restricted to the class's public methods (`getMake`, `getModel`,
`getYear`, `getSpeed`, `getFuelLevel`, `accelerate`, `brake`), ensuring controlled and secure data manipulation.

2. Information Hiding: External code can only interact with the `Car` object through its public interface(methods like `getMake`,
`getModel`, `accelerate`, `brake`, etc.),
without knowing the internal implementation details(like how speed or fuel level is managed).This provides abstraction and simplifies
the usage of the `Car` class while allowing its internal implementation to be modified without affecting the external code.
*/
