// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-9-18 Shawn Fries Added constructor
// 4-11-18 Shawn Fries added start and displayWindowSticker methods
// 4-16-18 Added getters and setters, extended start method

#include "Plane.h"
#include <iostream>

// Getter methods

// Return current flap level of plane
// Inputs: None
// Outputs: flapsLevel, an unsigned int representing the setting from 0 to as many flaps settings as the plane has
unsigned int Plane::getFlapsLevel()
{
    return flapsLevel;
}

// Return current rudder angle of plane
// Inputs: None
// Outputs: rudderAngle, a float representing the angle of the rudder (part of the tail that steers) in degrees
float Plane::getRudderAngle()
{
    return rudderAngle;
}

// Setter methods

// Set current flap setting
// Inputs: newFlapsLevel, an unsigned int
// Outputs: None (void)
void Plane::setFlapsLevel(unsigned int newFlapsLevel)
{
    flapsLevel = newFlapsLevel;
}

// Set current rudder angle in degrees
// Inputs: newRudderAngle, a float
// Outputs: None (void)
void Plane::setRudderAngle(float newRudderAngle)
{
    rudderAngle = newRudderAngle;
}

// Display steps to start plane (add on to inherited Vehicle method)
// Inputs: None
// Outputs: None (void); prints values to the console
void Plane::start()
{
   cout << "Perform preflight check (follow checklist)" << endl;
   Vehicle::start();
}

// Constructor implementation
// Inputs: unsigned int initialNumberOfWheels, represents number of wheels plane contacts the ground with (default 6)
//         unsigned int initialNumberOfAxles, represents number of axles (connecting pairs of wheels) plane has (default 2)
//         unsigned int initialNumberOfWings, represents number of wings plane has (default 2, meaning one pair)
//         string initialWindowIdNumber, represents unique identification number posted on car
// Outputs: none
Plane::Plane (string initialWindowIdNumber, unsigned int initialNumberOfWheels = 6, unsigned int initialNumberOfAxles = 2, unsigned int initialNumberOfWings = 2) :
    Vehicle(initialWindowIdNumber, initialNumberOfWheels, initialNumberOfAxles, initialNumberOfWings)
{
    cout << "Creating plane" << endl;
    numberOfWheels = initialNumberOfWheels;
    numberOfAxles = initialNumberOfAxles;
    numberOfWings = initialNumberOfWings;
    vehicleIdNumber = initialWindowIdNumber;
}
