#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Forme.hpp"

class Rectangle : public Forme 
{
private:
    double largeur;
    double hauteur;
public:
    Rectangle(double l, double h);
    double aire() const override;
    double perimetre() const override;
    void afficher() const override;
};

#endif // RECTANGLE_HPP

