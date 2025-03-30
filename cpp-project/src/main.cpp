#include <iostream>
#include "Roue.h"

int main() {
    // Create instances of Roue
    Roue roue1(10.0, 5); // Example using the second constructor
    Roue roue2(20, 2.5); // Example using the first constructor

    // Display the properties of the first Roue
    std::cout << "Roue 1 - Z: " << roue1.getZ() << ", D: " << roue1.getD() << ", M: " << roue1.getM() << std::endl;

    // Display the properties of the second Roue
    std::cout << "Roue 2 - Z: " << roue2.getZ() << ", D: " << roue2.getD() << ", M: " << roue2.getM() << std::endl;

    // Modify properties of the first Roue
    roue1.setZ(6);
    roue1.setD(15.0);
    roue1.setM(3.0);

    // Display the updated properties of the first Roue
    std::cout << "Updated Roue 1 - Z: " << roue1.getZ() << ", D: " << roue1.getD() << ", M: " << roue1.getM() << std::endl;

    return 0;
} 