
#include "Car.h"
#include <iostream>
#include <cstdlib>

Car::Car() : Car(3.0, "P215/65R15") {
}

Car::Car(double volume, std::string tireSize)
    : engineObject(volume),
      tireObjects{
          Tire(tireSize),
          Tire(tireSize),
          Tire(tireSize),
          Tire(tireSize)
      }
{
}

double Car::getEngineVolume() const {
    return engineObject.getEngineVolume();
}

std::string Car::getTireSize() const {
    return tireObjects[0].getTireSize();
}

void Car::beginDrive() {

    char answer;

    std::cout << "Welcome to CarSimmySimulation!\n";
    std::cout << "Mustang Edition!\n\n";

    driverDoor.openDoor();

    engineObject.startEngine();

    std::cout << "THE BIG BOYYYY HAS WOKE!\n";

    passengerDoor.windowObject.rollDown();

    tireObjects[0].inflateTire(32);

    engineObject.accelerate();

    std::cout << "\nTime to blow this popsicle stand!\n\n";

    std::cout << "Want to hear the this dude scream as if you were riding off in the sunset while the camera pans slowly out as your driving? (y/n): ";
    std::cin >> answer;

    if (answer == 'y' || answer == 'Y') {
        std::cout << "YEEEEAAAAHHHH!\n";

        system("open \"https://www.youtube.com/watch?v=NXCaHq-F0m4&t=466s\"");
    }
    else {
        std::cout << "Tough crowd... maybe next time!\n";
    }
}
