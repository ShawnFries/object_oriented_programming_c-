// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-9-18 Shawn Fries Added constructor
// 4-11-18 Shawn Fries added start and displayWindowSticker methods
// 4-16-18 Added getters and setters, extended start method

#include "Car.h"
#include <iostream>

// Getter methods

// Return current number of passengers in car
// Inputs: None
// Outputs: numberOfPassengers, an unsigned int
unsigned int Car::getNumberOfPassengers()
{
    return numberOfPassengers;
}

// Return current steering wheel angle in degrees
// Inputs: None
// Outputs: steeringWheelAngle, a float
float Car::getSteeringWheelAngle()
{
    return steeringWheelAngle;
}

// Setter methods

// Set current number of passengers
// Inputs: newNumberOfPassengers, an unsigned int
// Outputs: None (void)
void Car::setNumberOfPassengers(unsigned int newNumberOfPassengers)
{
    numberOfPassengers = newNumberOfPassengers;
}

// Set current steering wheel angle in degrees
// Inputs: newSteeringWheelAngle, a float
// Outputs: None (void)
void Car::setSteeringWheelAngle(float newSteeringWheelAngle)
{
    steeringWheelAngle = newSteeringWheelAngle;
}

// Constructor implementation
// Inputs: unsigned int initialNumberOfWheels, represents number of wheels car contacts the ground with (default 4)
//         unsigned int initialNumberOfAxles, represents number of axles (connecting pairs of wheels) car has (default 2)
//         unsigned int initialNumberOfWings, represents number of wings car has (default 0, 0 except if counting spoiler/using a strange car/plane hybrid)
//         string initialWindowIdNumber, represents unique identification number posted on car
// Outputs: none
Car::Car (string initialWindowIdNumber, unsigned int initialNumberOfWheels = 4, unsigned int initialNumberOfAxles = 2, unsigned int initialNumberOfWings = 0) :
    Vehicle(initialWindowIdNumber, initialNumberOfWheels, initialNumberOfAxles, initialNumberOfWings)
{
    cout << "Creating car" << endl;
    numberOfWheels = initialNumberOfWheels;
    numberOfAxles = initialNumberOfAxles;
    numberOfWings = initialNumberOfWings;
    vehicleIdNumber = initialWindowIdNumber;
}
