#include <iostream>
#include <cmath>

#include "function.h"

float a, b, c;
double delta;

void setup()
{
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
}

namespace result {
    double first = (-b + sqrt(delta))/2*a;
    double second = (-b - sqrt(delta))/2*a;
    double same = (-b)/2*a;
};

int main()
{
    std::cout << "Expression format: ax^2 + bx + c = 0" << std::endl;
    std::cout << "Type in order: a, b and c" << std::endl;
    setup();

    std::cout << "\n" << std::endl;

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        std::cout << harshfeudal::larger << std::endl;
        std::cout << output::doubleResults << result::first << output::connect << result::second << std::endl;
    } else if (delta = 0) {
        std::cout << harshfeudal::zero << std::endl;
        std::cout << output::singleResult << result::same << std::endl;
    } else {
        std::cout << harshfeudal::smaller << std::endl;
    }
}