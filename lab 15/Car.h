#pragma once
// Car.h
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car();
    Car(string manu, int year, int doors);

    void setNumDoors(int doors);
    int getNumDoors() const;

    void displayInfo() const override;
};

#endif


