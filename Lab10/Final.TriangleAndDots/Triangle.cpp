#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle() : a(0, 0), b(0, 0), c(0, 0)
{ }

Triangle::Triangle(Dot first, Dot second, Dot third) : a(first), b(second), c(third)
{ }

void Triangle::showEdgesLength()
{
	double ab = a.distanceTo(b);
	double bc = b.distanceTo(c);
	double ca = c.distanceTo(a);

	std::cout << "Длина первой стороны: " << ab << "\n"
		<< "Длина второй стороны: " << bc << "\n"
		<< "Длина третьей стороны: " << ca << std::endl;
}

double Triangle::calculatePerimeter()
{
	return a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a);
}

double Triangle::calculateArea()
{
	double semiperimeter = calculatePerimeter() / 2;
	double area = sqrt(semiperimeter * (semiperimeter - a.distanceTo(b)) * (semiperimeter - b.distanceTo(c)) * (semiperimeter - c.distanceTo(a)));
	return area;
}

Dot Triangle::get_a()
{
	return a;
}

Dot Triangle::get_b()
{
	return b;
}

Dot Triangle::get_c()
{
	return c;
}

void Triangle::move()
{
	++a;
	++b;
	++c;
}

void Triangle::show_a()
{
	std::cout << a.get_x() << ":" << a.get_y() << std::endl;
}
