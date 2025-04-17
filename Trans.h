//Trans.h

#define Trans_h
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
        Arbre get_arbre();

    //setters
        void set_v_entree(double v_entree);
        void set_v_sortie(double v_sortie);
        void set_sens(bool sens);
        void set_nb_arbres(int nb_arbres); 
    
    };

