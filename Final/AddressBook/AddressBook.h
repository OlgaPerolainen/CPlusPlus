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
	
	// ������ ����������
	void intro();
	
	// ���������� � ����
	bool save();
	
	// ����� � �������
	void showBook();
	~AddressBook();
};

