#include "Student.h"
#include <fstream>

Student::Student(std::string name, std::string last_name)
{
	Student::set_name(name);
	Student::set_last_name(last_name);
}

void Student::save()
{
	std::ofstream fout("students.txt", std::ios::app);
	fout << Student::get_name() << " " 
		<< Student::get_last_name() << " ";

	for (int i = 0; i < 5; ++i)
	{
		fout << Student::scores[i] << " ";
	}

	fout << std::endl;
	fout.close();
}

void Student::set_name(std::string studentName) // ��������� ����� ��������
{
	name = studentName;
}
// ��������� ����� ��������
std::string Student::get_name()
{
	return name;
}
// ��������� ������� ��������
void Student::set_last_name(std::string student_last_name)
{
	last_name = student_last_name;
}
// ��������� ������� ��������
std::string Student::get_last_name()
{
	return last_name;
}
// ��������� ������������� ������
void Student::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i) {
		scores[i] = student_scores[i];
	}
}
// ��������� �������� �����
void Student::set_average_score(double ball)
{
	average_score = ball;
}
// ��������� �������� �����
double Student::get_average_score()
{
	return average_score;
}

Student::~Student()
{
	Student::save();
}