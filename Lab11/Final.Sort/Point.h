#pragma once
#include <ostream>
class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(double, double);

	double calculateDistance(Point&);

	friend std::ostream& operator<< (std::ostream& out, const Point& point);
	friend bool operator< (Point&, Point&);
};

