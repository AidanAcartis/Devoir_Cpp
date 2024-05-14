#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Forme.hpp"

class Triangle : public Forme 
{
private:
    double cote1, cote2, cote3;
public:
    Triangle(double c1, double c2, double c3);
    double aire() const override;
    double perimetre() const override;
    void afficher() const override;
};

#endif // TRIANGLE_HPP


