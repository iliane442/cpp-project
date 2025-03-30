//Roue.cpp

#include "Roue.h"

Roue::Roue(double module, int nbDents){
    M = module;
    Z = nbDents;
}

Roue::Roue(int diametre, double module){
    D = diametre; 
    M = module ;    
}
Roue::Roue(void){
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