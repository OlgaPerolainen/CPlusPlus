#pragma once
#include "Dot.h"
class Triangle
{
private:
	// Реализация агрегации. Значения исходных точек меняются, но жизненный цикл не зависит от треугольника. Тесная связь по ссылке
	Dot& a;
	Dot& b;
	Dot& c;

	// Реализация композиции. Копируем значения. Жизненный цикл копий зависит от треугольника. Значения исходных точек не меняются.
	// Dot a;
	// Dot b;
	// Dot c;


public:
	Triangle(Dot&, Dot&, Dot&);                // конструктор с тремя точками

	void showEdgesLength();                 // вывод длин сторон

	double calculatePerimeter();            // вычисление периметра
	double calculateArea();                 // вычисление площади

	Dot get_a();
	Dot get_b();
	Dot get_c();


	void move();
	void show_a();
};

class TrianglePointer
{ 
private:
	Dot* a;
	Dot* b;
	Dot* c;

public:
	// Реализация агрегации. Исходные значения меняются, поскольку передаем адрес
	TrianglePointer(Dot* d1, Dot* d2, Dot* d3);

	// Реализация композиции. Выделение памяти в куче.
	TrianglePointer(Dot& d1, Dot& d2, Dot& d3);
	
	void showEdgesLength();                 // вывод длин сторон

	double calculatePerimeter();            // вычисление периметра
	double calculateArea();                 // вычисление площади

	Dot* get_a();
	Dot* get_b();
	Dot* get_c();


	void move();
	void show_a();
};

