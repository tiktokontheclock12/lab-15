#include "Truck.h"
// Truck.cpp
#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle(), towingCapacity(0) {}

Truck::Truck(string manu, int year, int towCap) : Vehicle(manu, year), towingCapacity(towCap) {}

void Truck::setTowingCapacity(int towCap) {
    towingCapacity = towCap;
}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}
