#ifndef TIRE_H
#define TIRE_H

#include <iostream>
#include <string>

class Tire {
private:
    std::string tireSize;

public:
    Tire(std::string size) {
        tireSize = size;
    }

    std::string getTireSize() const {
        return tireSize;
    }

    void inflateTire(int psi) {
        std::cout << "Inflating tire to " << psi << " psi ...\n";
    }
};

#endif
