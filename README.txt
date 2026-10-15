CAR COMPOSITION ASSIGNMENT — CLION PROJECT
==========================================

This project contains the following classes:
  Car, Engine, Tire, Door, Window

The Car object contains one Engine, four Tires and two Doors.
Each Door contains a Window. This is called composition.

HOW TO OPEN IN CLION (Mac):
1. Unzip CarSimmySimulation.zip.
2. In CLion, choose File > Open.
3. Select the extracted CarSimmySimulation FOLDER
   (the folder that contains CMakeLists.txt).
4. If prompted, choose to open it as a new project / in a new window.
5. Wait for CMake to finish loading.
6. In the top-right run configuration dropdown, choose "CarSimmySimulation".
7. Click the green Run triangle.

IMPORTANT: Open the new folder as its OWN project. Do not drop these
files into your old project while troubleshooting; that can leave
old CMake settings or duplicate source files behind.

The program prints the car's engine volume and tire size, opens the
front door, starts the engine, rolls down the passenger window,
inflates one tire to 32 psi, and accelerates.

Every printed line uses \n instead of std::endl.

FOR SUBMISSION:
The instructor's screenshot asks for all .cpp and .h files. The
source files are directly in this folder. Confirm your instructor's
submission format before uploading.
