#Include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
    std::cout << "Llamando al constructor" << std::endl;
}

Point::~Point()
{
    std::cout << "Llamando al destructor" << std::endl;
}

