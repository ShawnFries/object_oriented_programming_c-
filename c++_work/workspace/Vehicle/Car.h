// Edit History
// 4-4-18 Shawn Fries Initial Version
// 4-16-18 Added number of passengers, steering wheel angle, fixed inheritance

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
    public:
        Car(string initialWindowIdNumber, unsigned int initialNumberOfWheels, unsigned int initialNumberOfAxles, unsigned int initialNumberOfWings);
        unsigned int getNumberOfPassengers();
        float getSteeringWheelAngle();
        void setNumberOfPassengers(unsigned int newNumberOfPassengers);
        void setSteeringWheelAngle(float newSteeringWheelAngle);
    
    private:
        unsigned int numberOfPassengers;
        float steeringWheelAngle;    
};

#endif
