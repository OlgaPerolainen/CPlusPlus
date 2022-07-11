#include "Dot.h"
#include <math.h>
Dot::Dot() : x(0), y(0)
{ }
Dot::Dot(double x, double y)
{
	this->x = x;
	this->y = y;
}
double Dot::distanceTo(Dot point)
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}

void Dot::operator++()
{
	++x;
	++y;
}

double Dot::get_x()
{
	return x;
}

double Dot::get_y()
{
	return y;
}

