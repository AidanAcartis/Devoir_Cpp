#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "Forme.hpp"

class Cercle : public Forme 
{
private:
    double rayon;
public:
    Cercle(double r);
    double aire() const override;
    double perimetre() const override;
    void afficher() const override;
};

#endif // CERCLE_HPP

