#pragma once
#include <string>
#include <iostream>
class Triangle
{
public:
	Triangle();                                  // ����������� �� ���������
	Triangle(double, double, double);            // ����������� � ����� ��������� ������������

	void set_edges(double, double, double);      // ��������� �������� ������

	double calculateArea();                      // ���������� �������

	void checkTriangle();                        // �������� ������������ ��������� �������� ������

	class InvalidEdgeException                   
	{
	public:
		InvalidEdgeException() : message("������������ � ������ ��������� �� ����������") {}
		void printMessage() const
		{
			std::cout << message << std::endl;
		}
	private:
		const std::string message;               
	};

private:
	double a;
	double b;
	double c;
};

