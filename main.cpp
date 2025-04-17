#include <iostream>
#include "Trans.h"

int main() {
    // Création d'un objet Trans
    Trans transmission(1500.0, 3000.0, 3, true); // Vitesse d'entrée = 1500, sortie = 3000, 3 arbres, sens = horaire

    // Test des getters
    std::cout << "Transmission:" << std::endl;
    std::cout << "Vitesse d'entrée: " << transmission.get_v_entree() << " tr/min" << std::endl;
    std::cout << "Vitesse de sortie: " << transmission.get_v_sortie() << " tr/min" << std::endl;
    std::cout << "Nombre d'arbres: " << transmission.get_nb_arbres() << std::endl;
    std::cout << "Sens: " << (transmission.get_sens() ? "Horaire" : "Antihoraire") << std::endl;

    // Test des setters
    transmission.set_v_entree(2000.0);
    transmission.set_v_sortie(4000.0);
    transmission.set_nb_arbres(4);
    transmission.set_sens(false); // Sens antihoraire

    std::cout << "\nTransmission modifiée:" << std::endl;
    std::cout << "Vitesse d'entrée: " << transmission.get_v_entree() << " tr/min" << std::endl;
    std::cout << "Vitesse de sortie: " << transmission.get_v_sortie() << " tr/min" << std::endl;
    std::cout << "Nombre d'arbres: " << transmission.get_nb_arbres() << std::endl;
    std::cout << "Sens: " << (transmission.get_sens() ? "Horaire" : "Antihoraire") << std::endl;

    return 0;
}