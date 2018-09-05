// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-12-18 Shawn Fries changed private properties to protected
// 4-16-18 added getter methods for wheels, axles, wings, comment on wings for non-planes

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
public:
    Vehicle(string initialWindowIdNumber, unsigned int initialNumberOfWheels, unsigned int initialNumberOfAxles, unsigned int initialNumberOfWings);
    void start();
    void displayWindowSticker();
    void getNumberOfWheels();
    void getNumberOfAxles();
    void getNumberOfWings();

protected:
    unsigned int numberOfWheels;
    unsigned int numberOfAxles;
    
    // Here we're allowing the wings to be nonzero for even some cars/trucks, e.g. a spoiler or hybrid plane/car)
    unsigned int numberOfWings;
    
    string vehicleIdNumber;
};

#endif
