#pragma once
#include "Person.h"
#include "Student.h"
#include "Colleague.h"
#include "Teacher.h"
#include <clocale>
#include <string>
#include <fstream>
#include <iostream>

class AddressBook
{
	Person* book[100];
	int n = 0;
public:
	
	// Запрос информации
	void intro();
	
	// Сохранение в файл
	bool save();
	
	// Вывод в консоль
	void showBook();
	~AddressBook();
};

