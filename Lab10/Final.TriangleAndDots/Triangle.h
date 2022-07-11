#pragma once
#include "Dot.h"
class Triangle
{
private:
	Dot a;
	Dot b;
	Dot c;

public:
	Triangle();                             // ����������� �� ���������
	Triangle(Dot, Dot, Dot);                // ����������� � ����� �������

	void showEdgesLength();                 // ����� ���� ������

	double calculatePerimeter();            // ���������� ���������
	double calculateArea();                 // ���������� �������

	Dot get_a();
	Dot get_b();
	Dot get_c();


	void move();
	void show_a();
};

