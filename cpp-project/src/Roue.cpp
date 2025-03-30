// filepath: /cpp-project/cpp-project/src/Roue.cpp
#include "Roue.h"

Roue::Roue(double module, int nbDents) : M(module), Z(nbDents), D(module * nbDents) {}

Roue::Roue(int diametre, double module) : D(diametre), M(module), Z(static_cast<int>(diametre / module)) {}

double Roue::getZ() {
    return Z;
}

double Roue::getD() {
    return D;
}

double Roue::getM() {
    return M;
}

void Roue::setD(double diametre) {
    D = diametre;
    Z = static_cast<int>(diametre / M);
}

void Roue::setZ(int nbDents) {
    Z = nbDents;
    D = M * nbDents;
}

void Roue::setM(double module) {
    M = module;
    D = M * Z;
}