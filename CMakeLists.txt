cmake_minimum_required(VERSION 3.20)

project(CarSimmySimulation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CarSimmySimulation
    main.cpp
    Cars.cpp
    Car.h
    Engine.h
    Tire.h
    Door.h
    Window.h
)
