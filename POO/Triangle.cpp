#include "Triangle.hpp"
#include <cmath>

Triangle::Triangle(double c1, double c2, double c3) : cote1(c1), cote2(c2), cote3(c3) {}

double Triangle::aire() const 
{
    double s = perimetre() / 2;
    return std::sqrt(s * (s - cote1) * (s - cote2) * (s - cote3));
}

double Triangle::perimetre() const 
{
    return cote1 + cote2 + cote3;
}

void Triangle::afficher() const 
{
    std::cout << "Triangle: côtés = (" << cote1 << ", " << cote2 << ", " << cote3 << "), aire = " << aire() << ", perimetre = " << perimetre() << std::endl;
}

