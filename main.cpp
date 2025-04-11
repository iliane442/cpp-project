//main.cpp
#include "Trans.h"

void main(){
    //construction
	double vitesse = 340, m_menante = 20, m_menee = 15;
	int nb_dents_menante = 20, nb_dents_menee = 15;
	bool sens = 1;
    Roue roue_menante = Roue(m_menante,nb_dents_menante);
	Roue roue_menee = Roue (m_menee,nb_dents_menee);
    Arbre arbre_1 = Arbre(&roue_menante,&roue_menee,vitesse,sens); 
}
