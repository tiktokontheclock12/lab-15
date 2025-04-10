/****************
* Brady Steinke
* lab 15
*/


#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    string manu;
    int year, doors, towCap;

    // Vehicle
    cout << "Vehicle:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manu);
    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    Vehicle vehicle(manu, year);
    cout << endl;
    vehicle.displayInfo();
    cout << endl;

    // Car
    cout << "Car:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manu);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the number of doors: ";
    cin >> doors;
    cin.ignore();

    Car car(manu, year, doors);
    cout << endl;
    car.displayInfo();
    cout << endl;

    // Truck
    cout << "Truck:\n";
    cout << "Enter the manufacturer: ";
    getline(cin, manu);
    cout << "Enter the year built: ";
    cin >> year;
    cout << "Enter the towing capacity: ";
    cin >> towCap;

    Truck truck(manu, year, towCap);
    cout << endl;
    truck.displayInfo();
    cout << endl;

    return 0;
}
