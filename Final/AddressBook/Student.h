#pragma once
#include "Person.h"
#include "Phone.h"

class Student : public Person
{
private:
	// Номер телефона
	Phone phoneNumber;          // композиция
	// Должность
	const std::string position;

public:
	// Конструктор класса Student
	Student(std::string, std::string, std::string, Phone&);

	// Возврат всей информации
	std::string getData() const;

	~Student();
};

