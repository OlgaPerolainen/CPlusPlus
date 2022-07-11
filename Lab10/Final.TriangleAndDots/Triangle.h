#pragma once
#include "Dot.h"
class Triangle
{
private:
	// ���������� ���������. �������� �������� ����� ��������, �� ��������� ���� �� ������� �� ������������. ������ ����� �� ������
	Dot& a;
	Dot& b;
	Dot& c;

	// ���������� ����������. �������� ��������. ��������� ���� ����� ������� �� ������������. �������� �������� ����� �� ��������.
	// Dot a;
	// Dot b;
	// Dot c;


public:
	Triangle(Dot&, Dot&, Dot&);                // ����������� � ����� �������

	void showEdgesLength();                 // ����� ���� ������

	double calculatePerimeter();            // ���������� ���������
	double calculateArea();                 // ���������� �������

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
	// ���������� ���������. �������� �������� ��������, ��������� �������� �����
	TrianglePointer(Dot* d1, Dot* d2, Dot* d3);

	// ���������� ����������. ��������� ������ � ����.
	TrianglePointer(Dot& d1, Dot& d2, Dot& d3);
	
	void showEdgesLength();                 // ����� ���� ������

	double calculatePerimeter();            // ���������� ���������
	double calculateArea();                 // ���������� �������

	Dot* get_a();
	Dot* get_b();
	Dot* get_c();


	void move();
	void show_a();
};

