#include "Rectangle.hpp"

Rectangle::Rectangle(double l, double h) : largeur(l), hauteur(h) {}

double Rectangle::aire() const {
    return largeur * hauteur;
}

double Rectangle::perimetre() const {
    return 2 * (largeur + hauteur);
}

void Rectangle::afficher() const {
    std::cout << "Rectangle: largeur = " << largeur << ", hauteur = " << hauteur << ", aire = " << aire() << ", perimetre = " << perimetre() << std::endl;
}

