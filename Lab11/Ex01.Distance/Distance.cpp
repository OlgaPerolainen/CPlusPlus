#include "Distance.h"
#include <iostream>
#include <ostream>

Distance::Distance() : feet(0), inches(0.0), MTF(3.280833F)
{
}

Distance::Distance(int ft, double inch) : feet(ft), inches(inch), MTF(3.280833F)
{
}

Distance::Distance(double meters) : MTF(3.280833F)
{
	double fltfeet = MTF * meters; // перевод в футы
	feet = int(fltfeet); // число полных футов
	inches = 12 * (fltfeet - feet); // остаток - это дюймы
}


void Distance::getDist()
{
	std::cout << "\n¬ведите число футов : ";
	std::cin >> feet;
	std::cout << "\n¬ведите число дюймов : ";
	std::cin >> inches;
}

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
	out << dist.feet << "\'-" << dist.inches << "\"\n";
	return out;
}

//void Distance::showDist()
//{
//	std::cout << feet << "\' - " << inches << "\"\n";
//}

Distance::operator double() const
{	
	double fracfeet = inches / 12;
	fracfeet += static_cast<double>(feet);
	return fracfeet / MTF;
}

Distance Distance::operator+(const Distance& d2) const
{
	int f = feet + d2.feet;
	double i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

Distance operator-(const Distance& d1, const Distance& d2)
{
	int f;
	double i;

	if (d1.feet > d2.feet || (d1.feet == d2.feet && d1.inches >= d2.inches))
	{
		i = (d1.inches + d1.feet * 12.) - (d2.inches + d2.feet * 12.);
	}
	else
	{
		i = (d2.inches + d2.feet * 12.) - (d1.inches + d1.feet * 12.);
	}

	f = (int)(i / 12);
	i -= f * 12.;
	return Distance(f, i);
}
