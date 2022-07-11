#pragma once
#include <string>
#include "IdCard.h"

class Student
{
public:
	IdCard* iCard;
	void set_idCard(IdCard* c);
	IdCard get_idCard();

	Student(std::string, std::string);
	Student(std::string, std::string, IdCard* id);


	class ExScore
	{
	public:
		std::string origin; //для имени функции
		int iValue; //для хранения ошибочного значения
		ExScore(std::string orig , int sc)
		{
			origin = orig; //строка с именем виновника ошибки
			iValue = sc; //сохраненное неправильное значение 
		}
	};

	void save();                  // Запись данных о студенте в файл

	void set_name(std::string);  // Установка имени студента
	std::string get_name();      // Получение имени студента
	
	void set_last_name(std::string); // Установка фамилии студента
	std::string get_last_name();	 // Получение фамилии студента

	void set_scores(int[]);          // Установка промежуточных оценок

	void set_average_score(double);	// Установка среднего балла
	double get_average_score(); 	// Получение среднего балла

	~Student();                     // Деструктор класса Student

private:
	int scores[5]; // Промежуточные оценки
	double average_score; // Средний балл
	std::string name; // Имя
	std::string last_name; // Фамилия
};

