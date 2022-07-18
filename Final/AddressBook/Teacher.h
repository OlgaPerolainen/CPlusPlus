#pragma once
#include "Person.h"
#include "Phone.h"

class Teacher : public Person
{
private:
	// Номер телефона
	Phone phoneNumber;          // композиция
	// Должность
	const std::string position;
	// Обращение (Mr, Ms, Mrs или Уважаемый/Уважаемая)
	std::string title;

public:
	// Конструктор класса Teacher
	Teacher(std::string, std::string, std::string, std::string, Phone&);

	// Возврат всей информации
	std::string getData() const;

	~Teacher();
};

