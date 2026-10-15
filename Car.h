#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Tire.h"
#include "Door.h"

class Car {
private:
    Engine engineObject;
    Tire tireObjects[4];
    Door driverDoor;
    Door passengerDoor;

public:
    Car();
    Car(double volume, std::string tireSize);

    double getEngineVolume() const;
    std::string getTireSize() const;

    void beginDrive();
};

#endif
