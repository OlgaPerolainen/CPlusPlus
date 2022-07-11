#pragma once
#include "Dot.h"
class Triangle
{
private:
	Dot a;
	Dot b;
	Dot c;

public:
	Triangle();                             // конструктор по умолчанию
	Triangle(Dot, Dot, Dot);                // конструктор с тремя точками

	void showEdgesLength();                 // вывод длин сторон

	double calculatePerimeter();            // вычисление периметра
	double calculateArea();                 // вычисление площади

	Dot get_a();
	Dot get_b();
	Dot get_c();


	void move();
	void show_a();
};

