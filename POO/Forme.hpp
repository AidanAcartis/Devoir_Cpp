#ifndef FORME_HPP
#define FORME_HPP

#include <iostream>

class Forme {
public:
    virtual ~Forme() = default;
    virtual double aire() const = 0;
    virtual double perimetre() const = 0;
    virtual void afficher() const = 0;
};

#endif // FORME_HPP

