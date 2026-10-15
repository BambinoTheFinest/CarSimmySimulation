#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>

class Engine {
private:
    double engineVolume;

public:
    Engine(double volume) {
        engineVolume = volume;
    }

    double getEngineVolume() const {
        return engineVolume;
    }

    void startEngine() {
        std::cout << "Starting engine ...\n";
    }

    void accelerate() {
        std::cout << "Accelerating ... vroom, vroom\n";
    }
};

#endif
