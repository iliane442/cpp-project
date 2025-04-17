//Roue.cpp

#include "Roue.h"

Roue::Roue(double module, int nbDents){
    M = module;
    Z = nbDents;
    D = M*Z; // Calcul du diamètre
}

Roue::Roue(int diametre, double module){
    D = diametre; 
    M = module ;    
    Z = D/M; // Calcul du nombre de dents
}
Roue::~Roue() {
    // Rien à nettoyer pour l'instant, mais il est défini pour éviter les erreurs de linkage
}

double Roue::getZ(){
    return Z;
}

void Roue::setZ(int z){
    Z = z;
}   

double Roue::getD(){
    return D;
}   

void Roue::setD(double d){
    D = d;
}

double Roue::getM(){
    return M;
}

void Roue::setM(double m){
    M = m;
}