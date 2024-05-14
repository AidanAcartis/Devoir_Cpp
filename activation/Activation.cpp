#include "Activation.hpp"
#include <fstream>
#include <iostream>

Activation::Activation(const std::string& filename) : fichierActivation(filename), points(10) {
    if (!verifActivation()) {
        lireFichierActivation();
    }
}

bool Activation::verifActivation() {
    std::ifstream file(fichierActivation);
    std::string ligne;
    if (file.is_open()) {
        std::getline(file, ligne);
        file.close();
        return ligne == "ACTIVATION_VALIDE";
    }
    return false;
}

void Activation::decrementerPoints() {
    if (points > 0) {
        points--;
        sauverPoints();
    }
}

int Activation::getPoints() const {
    return points;
}

bool Activation::lireFichierActivation() {
    std::ifstream file("points.txt");
    if (file.is_open()) {
        file >> points;
        file.close();
        return true;
    }
    return false;
}

void Activation::sauverPoints() const {
    std::ofstream file("points.txt");
    if (file.is_open()) {
        file << points;
        file.close();
    }
}

