#pragma once
#include <ostream>

class Distance
{
private:
	int feet;
	double inches;
	const double MTF;

public:

	Distance();
	Distance(int, double);
	Distance(double);

	void getDist();
//	void showDist();


	operator double() const;
	Distance operator+ (const Distance&) const;
	friend Distance operator- (const Distance&, const Distance&);
	friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
};
