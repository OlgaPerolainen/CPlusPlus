#pragma once
#include "Person.h"
#include "Phone.h"

class Colleague : public Person
{
private:
	// Номер телефона
	Phone phoneNumber;          // композиция
	// Должность
	const std::string position;
	// Адрес
	std::string address;

public:
	// Конструктор класса Teacher
	Colleague(std::string, std::string, std::string, std::string, Phone&);

	// Возврат всей информации
	std::string getData() const;

	~Colleague();
};

