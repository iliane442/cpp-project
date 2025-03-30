# cpp-project

## Description
This project implements a simple C++ application that defines and utilizes a class called `Roue`. The `Roue` class represents a wheel with properties such as the number of teeth, diameter, and module.

## Files
- **src/Roue.h**: Header file defining the `Roue` class with its member variables and methods.
- **src/Roue.cpp**: Source file implementing the methods of the `Roue` class.
- **src/main.cpp**: Entry point of the application, demonstrating the functionality of the `Roue` class.
- **CMakeLists.txt**: Configuration file for CMake to manage the build process.

## Building the Project
To build the project, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   make
   ```

## Running the Application
After building the project, you can run the application by executing the generated binary in the build directory. The specific command may vary based on your system and configuration.

## Usage
The application demonstrates the creation and manipulation of `Roue` objects. You can modify the `main.cpp` file to test different functionalities of the `Roue` class.