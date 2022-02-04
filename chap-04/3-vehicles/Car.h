#pragma once

#include "Vehicle.h"

#include <iostream>

class Car : public Vehicle
{
public:
    Car(const Driver& driver, unsigned int speed)
        : Vehicle { driver }
        , _speed { speed }
    {}

    unsigned int drive() const override
    {
        if (_driver.has_car_licence())
        {
            std::cout << "Vrooooom!" << std::endl;
            return _speed;
        }
        else
        {
            std::cerr << "No car licence detected..." << std::endl;
            return 0u;
        }
    }

protected:
    unsigned int _speed = 0;
};

class FlyingCar : public Car
{
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed }
    {}

    unsigned int drive() const override
    {
        if (_driver.has_flying_licence())
        {
            std::cout << "Wepee!" << std::endl;
            return _speed * 10u;
        }
        else
        {
            Car::drive();
        }
    }
};