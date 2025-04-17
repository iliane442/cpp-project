//Arbre.h
#pragma once // pour éviter les inclusions multiples
#include "Roue.h"

class Arbre{
    private :
        Roue* menante;
        Roue* menee;
        double vitesse;
        bool sens;
        Arbre* suivant;
        
    public :
    //constructeur
        Arbre();
        Arbre(Roue* menante, Roue* menee, double vitesse, bool sens);
    
    //destructeur
        ~Arbre(void);
    

    //fonctions
        //getters
        double get_vitesse();
        double get_sens();
        Roue* get_menante();
        Roue* get_menee();


        //setters
        void set_vitesse(double vitesse);
        void set_sens(bool sens);
        void set_menante(Roue* menante);
        void set_menee(Roue* menee);


    };
