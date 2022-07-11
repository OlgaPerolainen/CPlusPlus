#pragma once
class Dot
{
private:
	double x;
	double y;
public:
	Dot();
	Dot(double x, double y);
	double distanceTo(Dot point);

	void operator++();

	double get_x();
	double get_y();
};

