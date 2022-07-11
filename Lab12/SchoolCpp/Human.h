#pragma once
#include <string>
#include <sstream>

class Human
{
private:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
public:
	// Конструктор класса human
	Human(std::string, std::string, std::string);

	// Получение ФИО человека
	std::string get_full_name();
};

