//Arbre.cpp

#include "Roue.h"
#include "Arbre.h"

Arbre::Arbre(Roue* roue_menante, Roue* roue_menee, double v, bool S) {
    menante = roue_menante;
    menee = roue_menee;
    vitesse = v;
    sens = S;
}

Arbre::~Arbre(void) {
}

double Arbre::get_vitesse() {
    return vitesse;
}
double Arbre::get_sens() {
    return sens;
}
Roue* Arbre::get_menante() {
    return menante;
}
Roue* Arbre::get_menee() {
    return menee;
}
void Arbre::set_vitesse(double v) {
    vitesse = v;
}
void Arbre::set_sens(bool s) {
    sens = s;
}
void Arbre::set_menante(Roue* menante) {
    this->menante = menante;
}
void Arbre::set_menee(Roue* menee) {
    this->menee = menee;
}