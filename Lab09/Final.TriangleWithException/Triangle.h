#pragma once
#include <string>
#include <iostream>
class Triangle
{
public:
	Triangle();                                  // конструктор по умолчанию
	Triangle(double, double, double);            // конструктор с тремя сторонами треугольника

	void set_edges(double, double, double);      // установка значений сторон

	double calculateArea();                      // вычисление площади

	void checkTriangle();                        // проверка корректности введенных значений сторон

	class InvalidEdgeException                   
	{
	public:
		InvalidEdgeException() : message("Треугольника с такими сторонами не существует") {}
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

