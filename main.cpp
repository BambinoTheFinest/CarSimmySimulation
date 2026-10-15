#include <iostream>
#include "Car.h"

int main() {
    Car myCar(3.0, "P215/65R15");

    std::cout << "Engine volume (in liters) is: "
              << myCar.getEngineVolume() << "\n";

    std::cout << "All 4 tire specifications are: "
              << myCar.getTireSize() << "\n\n";

    myCar.beginDrive();

    return 0;
}
