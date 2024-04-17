#include <iostream>
#include <cmath>
#include <typeinfo> 
#include "Line.h"
#include "Ellipse.h"
#include "Hyperbola.h"
#include "Curves.h"

int main() {

    Curves* curves[3];

    Line line(4.0, 3.0, 1.0);
    Ellipse ellipse(6.0, 7.0, 1.0);
    Hyperbola hyperbola(4.0, 8.0, 1.0);

    curves[0] = &line;
    curves[1] = &ellipse;
    curves[2] = &hyperbola;

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Curve " << i + 1 << ":" << std::endl;
        std::cout << "Type: ";

        if (typeid(*curves[i]) == typeid(Line))
        {
            std::cout << "circle" << std::endl;
        }
        else if (typeid(*curves[i]) == typeid(Ellipse))
        {
            std::cout << "ellipse" << std::endl;
        }
        else if (typeid(*curves[i]) == typeid(Hyperbola))
        {
            std::cout << "square" << std::endl;
        }

        std::cout << "count y: " << curves[i]->count() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}