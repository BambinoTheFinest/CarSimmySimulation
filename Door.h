#ifndef DOOR_H
#define DOOR_H

#include <iostream>
#include "Window.h"

class Door {
public:
    Window windowObject;

    void openDoor() {
        std::cout << "Opening door ...\n";
    }
};

#endif
