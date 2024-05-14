#include <iostream>
#include "Activation.hpp"

int main() {
    Activation activation("activation.txt");

    if (activation.verifActivation()) {
        std::cout << "Programme activé avec succès. Utilisation illimitée." << std::endl;
    } else {
        if (activation.getPoints() > 0) {
            std::cout << "Programme en mode limité. Points restants: " << activation.getPoints() << std::endl;
            activation.decrementerPoints();
        } else {
            std::cout << "Nombre de points épuisé. Veuillez activer le programme." << std::endl;
            return 1;
        }
    }

    
    std::cout << "Le programme est en cours d'exécution..." << std::endl;

    return 0;
}

