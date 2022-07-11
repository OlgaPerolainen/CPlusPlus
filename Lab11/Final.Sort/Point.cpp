#include "Point.h"

Point::Point() : x(0.0), y(0.0)
{
}

Point::Point(double first, double second) : x(first), y(second)
{
}

double Point::calculateDistance(Point& point)
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
	out << "{" << point.x << ":" << point.y << "}" << std::endl;
	return out;
}

bool operator<(Point& a, Point& b)
{
	Point center;
	return a.calculateDistance(center) < b.calculateDistance(center);
}
