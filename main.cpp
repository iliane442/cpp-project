#include <iostream>
#include <vector>
#include <cmath>
#include "Trans.h"
#include "Arbre.h"
#include "Roue.h"

// Modules possibles
const std::vector<double> modules = {0.13, 0.5, 0.6, 0.8, 1, 1.25, 1.5, 2, 2.5, 3, 4, 5, 6, 8};

// Fonction pour trouver un module valide
double choisir_module() {
    return modules[rand() % modules.size()]; // Choix aléatoire pour simplifier
}

// Fonction principale pour instancier une transmission
Trans instancier_transmission(double v_entree, double v_sortie, int nb_arbres, bool sens) {
    std::vector<Arbre*> arbres;
    double rapport_global = v_entree / v_sortie;
    double rapport_partiel = std::pow(rapport_global, 1.0 / (nb_arbres - 1));

    for (int i = 0; i < nb_arbres; ++i) {
        double module = choisir_module();
        int Z_menante = 18 + rand() % (150 - 18); // Nombre de dents aléatoire dans les limites
        int Z_menee = static_cast<int>(Z_menante * rapport_partiel);

        // Vérification des contraintes
        if (Z_menee < 18 || Z_menee > 150) Z_menee = std::min(std::max(Z_menee, 18), 150);

        double D_menante = Z_menante * module;
        double D_menee = Z_menee * module;

        if (D_menante > 15000 || D_menee > 15000) {
            std::cerr << "Erreur : Diamètre hors limites !" << std::endl;
            continue;
        }

        // Création des roues et de l'arbre
        Roue* menante = new Roue(module, Z_menante);
        Roue* menee = new Roue(module, Z_menee);
        Arbre* arbre = new Arbre(menante, menee, v_entree, sens);
        arbres.push_back(arbre);

        // Mise à jour de la vitesse pour le prochain arbre
        v_entree /= rapport_partiel;
    }

    // Création de l'objet Trans
    return Trans(v_entree, v_sortie, nb_arbres, sens);
}

int main() {
    // Exemple d'utilisation
    double v_entree = 1500.0;
    double v_sortie = 300.0;
    int nb_arbres = 3;
    bool sens = true;

    Trans transmission = instancier_transmission(v_entree, v_sortie, nb_arbres, sens);

    std::cout << "Transmission créée avec succès !" << std::endl;
    std::cout << "Vitesse d'entrée : " << transmission.get_v_entree() << " tr/min" << std::endl;
    std::cout << "Vitesse de sortie : " << transmission.get_v_sortie() << " tr/min" << std::endl;
    std::cout << "Nombre d'arbres : " << transmission.get_nb_arbres() << std::endl;
    std::cout << "Sens : " << (transmission.get_sens() ? "Horaire" : "Antihoraire") << std::endl;

    return 0;
}