// This program illustrates the use of derived classes (inheritance) by creating and storing in a vector truck, plane, and car objects
// Each with some of their own unique properties/methods and all derived from the base class Vehicle
//
// Author: Shawn Fries
// CS231
// Due 04-09-18
// No input/output files

// Edit History
// 04-08-18 Shawn Fries Initial Version
// 04-12-18 Shawn Fries initial attempt at instantiating objects of derived classes
// 04-16-18 Shawn Fries instantiating (correctly) objects of each class including newly added methods

// Note: Doing it this way (this include statement) because I'm choosing to write this in c9.io which doesn't natively support compilation of entire folders/projects
// Instead only single file compilation is supported which requires chaining all these files together with #include statements
// Instead of just including the header file in both this and NumberCruncher.cpp (implementation file)
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Plane.cpp"
#include "Truck.cpp"
#include <vector>

int main()
{
    vector<Vehicle> collectionOfVehicles;
    Vehicle v1("101", 4, 2, 0);
    v1.start();
    v1.displayWindowSticker();
    v1.getNumberOfWheels();
    v1.getNumberOfAxles();
    v1.getNumberOfWings();
    collectionOfVehicles.push_back(v1);
    cout << endl;
    
    Car c1("200");
    c1.start();
    c1.displayWindowSticker();
    c1.getNumberOfWheels();
    c1.getNumberOfAxles();
    c1.getNumberOfWings();
    c1.setSteeringWheelAngle(80);
    c1.setNumberOfPassengers(4);
    cout << "Steering wheel angle is " << c1.getSteeringWheelAngle() << " degrees" << endl;
    cout << "Number of passengers is " << c1.getNumberOfPassengers() << endl;
    collectionOfVehicles.push_back(c1);
    cout << endl;
    
    Plane p1("300");
    p1.start();
    p1.displayWindowSticker();
    p1.getNumberOfWheels();
    p1.getNumberOfAxles();
    p1.getNumberOfWings();
    p1.setFlapsLevel(3);
    p1.setRudderAngle(45);
    cout << "Flaps level is " << p1.getFlapsLevel() << endl;
    cout << "Rudder angle is " << p1.getRudderAngle() << " degrees" << endl;
    collectionOfVehicles.push_back(p1);
    cout << endl;
    
    Truck t1("400");
    t1.start();
    t1.displayWindowSticker();
    t1.getNumberOfWheels();
    t1.getNumberOfAxles();
    t1.getNumberOfWings();
    t1.setEngineTemperature(180);
    t1.setFuelLevel(0.3);
    cout << "Engine temperature is " << t1.getEngineTemperature() << " degrees Fahrenheit" << endl;
    cout << "Fuel level is " << t1.getFuelLevel() << endl;
    collectionOfVehicles.push_back(t1);
    cout << endl;
    
    // 3-wheeled "car"
    Car c2("500", 3);
    c2.start();
    c2.displayWindowSticker();
    collectionOfVehicles.push_back(c2);
    cout << endl;
    
    // Biplane (i.e. 2 pairs of wings or 4 total)
    Plane p2("600", 4, 2, 4);
    p2.start();
    p2.displayWindowSticker();
    collectionOfVehicles.push_back(p2);
    cout << endl;
    
    // Massive truck
    Truck t2("700", 12, 6);
    t2.start();
    t2.displayWindowSticker();
    collectionOfVehicles.push_back(t2);
    cout << endl;
   
    return 0;
}
