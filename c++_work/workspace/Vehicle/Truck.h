// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-16-18 Added fuel level, engine temperature, fixed inheritance

#ifndef TRUCK_H
#define TRUCK_H

// Because this IDE only supports single file compilation
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle{
    public:
        Truck(string initialWindowIdNumber, unsigned int initialNumberOfWheels, unsigned int initialNumberOfAxles, unsigned int initialNumberOfWings);
        void start();
        float getFuelLevel();
        float getEngineTemperature();
        void setFuelLevel(float newFuelLevel);
        void setEngineTemperature(float newEngineTemperature);
    
    private:
        float fuelLevel;
        float engineTemperature;   
};

#endif
