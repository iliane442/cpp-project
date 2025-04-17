//Trans.cpp

#include "Trans.h"

Trans::Trans(double v_e, double v_s, int n_arbres, bool S){
    v_entree = v_e;
    v_sortie = v_s;
    nb_arbres = n_arbres;
    sens = S;
}

double Trans::get_v_entree(){
    return v_entree;
}
double Trans::get_v_sortie(){
    return v_sortie;
}
bool Trans::get_sens(){
    return sens;
}
int Trans::get_nb_arbres(){
    return nb_arbres;
}



void Trans::set_v_entree(double v_e){
    v_entree = v_e;
}
void Trans::set_v_sortie(double v_s){
    v_sortie = v_s;
}
void Trans::set_sens(bool S){
    sens = S;
}
void Trans::set_nb_arbres(int nb){
    nb_arbres = nb;
}