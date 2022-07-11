#pragma once
#include "Human.h"
#include <string>
#include <vector>

class Student : public Human
{
private:
	// Оценки студента
	std::vector<int> scores;

public:
	// Конструктор класса Student
	Student(std::string, std::string, std::string, std::vector<int> scores);
	
	// Получение среднего балла студента
	float get_average_score();
};

