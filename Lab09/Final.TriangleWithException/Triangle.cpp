#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : a(0), b(0), c(0) {};
Triangle::Triangle(double first, double second, double third) : a(first), b(second), c(third)
{
    checkTriangle();
}

void Triangle::set_edges(double first, double second, double third)
{
    a = first;
    b = second; 
    c = third;
    checkTriangle();
}

double Triangle::calculateArea()
{
    double semiperimeter = (a + b + c) / 2;
    double area = sqrt(semiperimeter * (semiperimeter - a) * (semiperimeter - b) * (semiperimeter - c));
    return area;
}

void Triangle::checkTriangle()
{
    if ((a + b) < c || (c + b) < a || (c + a) < b)
        throw InvalidEdgeException();
}
