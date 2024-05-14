#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

int main() {
    Forme* formes[] = 
    {
        new Cercle(5.0),
        new Rectangle(4.0, 6.0),
        new Triangle(3.0, 4.0, 5.0)
    };

    for (Forme* forme : formes) {
        forme->afficher();
        delete forme;
    }

    return 0;
}

