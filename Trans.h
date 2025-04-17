//Trans.h

#pragma once    // pour éviter les inclusions multiples
#include "Arbre.h"

class Trans{
    private:
        bool sens;
        double v_entree;
        double v_sortie;
        int nb_arbres;
        Arbre* arbre;

    public:
    //constructeur
        Trans();
        Trans(double v_entree, double v_sortie, int nb_arbres, bool sens);

    //destructeur
        ~Trans();
    
    //getters
        double get_v_entree();
        double get_v_sortie();
        bool get_sens();
        int get_nb_arbres();
        
    //setters
        void set_v_entree(double v_entree);
        void set_v_sortie(double v_sortie);
        void set_sens(bool sens);
        void set_nb_arbres(int nb_arbres); 
    
    //fonctions 
        void ajout_arbre(Arbre* arbre);
        void retrait_arbre(int numero_arbre);
    };

