#include "Cercle.hpp"
#include <cmath>

Cercle::Cercle(double r) : rayon(r) {}

double Cercle::aire() const 
{
    return M_PI * rayon * rayon;
}

double Cercle::perimetre() const 
{
    return 2 * M_PI * rayon;
}

void Cercle::afficher() const 
{
    std::cout << "Cercle: rayon = " << rayon << ", aire = " << aire() << ", perimetre = " << perimetre() << std::endl;
}

