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

void Student::set_name(std::string studentName) // Установка имени студента
{
	name = studentName;
}
// Получение имени студента
std::string Student::get_name()
{
	return name;
}
// Установка фамилии студента
void Student::set_last_name(std::string student_last_name)
{
	last_name = student_last_name;
}
// Получение фамилии студента
std::string Student::get_last_name()
{
	return last_name;
}
// Установка промежуточных оценок
void Student::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i) {
		scores[i] = student_scores[i];
	}
}
// Установка среднего балла
void Student::set_average_score(double ball)
{
	average_score = ball;
}
// Получение среднего балла
double Student::get_average_score()
{
	return average_score;
}

Student::~Student()
{
	Student::save();
}