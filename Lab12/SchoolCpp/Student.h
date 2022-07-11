#pragma once
#include "Human.h"
#include <string>
#include <vector>

class Student : public Human
{
private:
	// ������ ��������
	std::vector<int> scores;

public:
	// ����������� ������ Student
	Student(std::string, std::string, std::string, std::vector<int> scores);
	
	// ��������� �������� ����� ��������
	float get_average_score();
};

