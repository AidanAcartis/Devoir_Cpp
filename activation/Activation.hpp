#ifndef ACTIVATION_HPP
#define ACTIVATION_HPP

#include <string>

class Activation 
{
public:
    Activation(const std::string& filename);
    bool verifActivation();
    void decrementerPoints();
    int getPoints() const;
private:
    std::string fichierActivation;
    int points;
    bool lireFichierActivation();
    void sauverPoints() const;
};

#endif // ACTIVATION_HPP

