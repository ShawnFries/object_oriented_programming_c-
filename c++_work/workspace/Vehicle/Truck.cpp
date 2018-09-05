// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-9-18 Shawn Fries Added constructor
// 4-11-18 Shawn Fries added start and displayWindowSticker methods
// 4-16-18 Added getters and setters, extended start method

#include "Truck.h"
#include <iostream>

// Getter methods

float getFuelLevel();
float getEngineTemperature();
void setFuelLevel(float newFuelLevel);
void setEngineTemperature(float newEngineTemperature);

// Getter methods

float Truck::getFuelLevel()
{
    return fuelLevel;
}
float Truck::getEngineTemperature()
{
    return engineTemperature;
}

// Setter methods

void Truck::setFuelLevel(float newFuelLevel)
{
    fuelLevel = newFuelLevel;
}
void Truck::setEngineTemperature(float newEngineTemperature)
{
    engineTemperature = newEngineTemperature;
}

// Display steps to start truck (add on to inherited Vehicle method)
// Inputs: None
// Outputs: None (void); prints values to the console
void Truck::start()
{
   cout << "Walk around truck, checking for obstacles around tires" << endl;
   Vehicle::start();
}

// Constructor implementation
// Inputs: unsigned int initialNumberOfWheels, represents number of wheels truck contacts the ground with (default 10)
//         unsigned int initialNumberOfAxles, represents number of axles (connecting pairs of wheels) truck has (default 3)
//         unsigned int initialNumberOfWings, represents number of wings truck has (default 0, 0 except if counting spoiler/using a strange truck/plane hybrid)
//         string initialWindowIdNumber, represents unique identification number posted on car
// Outputs: none
Truck::Truck (string initialWindowIdNumber, unsigned int initialNumberOfWheels = 10, unsigned int initialNumberOfAxles = 3, unsigned int initialNumberOfWings = 0) :
    Vehicle(initialWindowIdNumber, initialNumberOfWheels, initialNumberOfAxles, initialNumberOfWings)
{
    cout << "Creating truck" << endl;
    numberOfWheels = initialNumberOfWheels;
    numberOfAxles = initialNumberOfAxles;
    numberOfWings = initialNumberOfWings;
    vehicleIdNumber = initialWindowIdNumber;
}
