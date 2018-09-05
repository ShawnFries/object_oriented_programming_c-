// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-9-18 Shawn Fries Added constructor
// 4-11-18 Shawn Fries added start and displayWindowSticker methods
// 4-16-18 Shawn Fries finished project with getter methods for protected properties

#include "Vehicle.h"
#include <iostream>

// (Functionally) getter methods

// Display steps to start vehicle
// Inputs: None
// Outputs: None (void); prints values to the console
void Vehicle::start()
{
   cout << "Insert key into ignition" << endl;
   cout << "Turn key until engine starts" << endl;
}

// Display id number on window of vehicle
// Inputs: None
// Outputs: None (void); prints values to the console
void Vehicle::displayWindowSticker()
{
   cout << "The ID number on the window reads " << vehicleIdNumber << endl;
}

// Display number of wheels vehicle has (not counting spares)
// Inputs: None
// Outputs: None (void); prints values to the console
void Vehicle::getNumberOfWheels()
{
   cout << "The number of wheels is " << numberOfWheels << endl;
}

// Display number of axles vehicle has
// Inputs: None
// Outputs: None (void); prints values to the console
void Vehicle::getNumberOfAxles()
{
   cout << "The number of axles is " << numberOfAxles << endl;
}

// Display number of wings vehicle has
// Inputs: None
// Outputs: None (void); prints values to the console
void Vehicle::getNumberOfWings()
{
   cout << "The number of wings is " << numberOfWings << endl;
}

// Constructor implementation
// Inputs: unsigned int initialNumberOfWheels, represents number of wheels vehicle contacts the ground with (when on the ground)
//         unsigned int initialNumberOfAxles, represents number of axles (connecting pairs of wheels) vehicle has
//         unsigned int initialNumberOfWings, represents number of wings vehicle has (when applicable)
//         string initialWindowIdNumber, represents unique identification number posted on vehicle (we assume even planes/any imaginable vehicle we add has this property)
// Outputs: none
Vehicle::Vehicle (string initialWindowIdNumber, unsigned int initialNumberOfWheels, unsigned int initialNumberOfAxles, unsigned int initialNumberOfWings)
{
    numberOfWheels = initialNumberOfWheels;
    numberOfAxles = initialNumberOfAxles;
    numberOfWings = initialNumberOfWings;
    vehicleIdNumber = initialWindowIdNumber;
}
