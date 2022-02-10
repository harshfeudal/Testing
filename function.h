#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <cmath>

namespace harshfeudal
{
    std::string larger(cout << "It has 2 results!" << std::endl);
    std::string smaller(cout << "It has no results!" << std::endl);
    std::string zero(cout << "It has 1 result!" << std::endl);
}

namespace output
{
    //Grammar lol
    std::string singleResult(cout << "The result is: " );
    std::string doubleResults(cout << "The results are: " );
    std::string connect(cout << " and " );
}

#endif // FUNCTION_H