// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-6-18 Shawn Fries added new methods

#ifndef PLANE_H
#define PLANE_H

// Because this IDE only supports single file compilation
#include "Vehicle.h"

using namespace std;

class Plane : public Vehicle{
    public:
        Plane(string initialWindowIdNumber, unsigned int initialNumberOfWheels, unsigned int initialNumberOfAxles, unsigned int initialNumberOfWings);
        void start();
        unsigned int getFlapsLevel();
        float getRudderAngle();
        void setFlapsLevel(unsigned int newFlapsLevel);
        void setRudderAngle(float newRudderAngle);
    
    private:
        unsigned int flapsLevel;
        float rudderAngle;
};

#endif
