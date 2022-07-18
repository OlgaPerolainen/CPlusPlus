#pragma once
#include "Person.h"
#include "Phone.h"

class Student : public Person
{
private:
	// ����� ��������
	Phone phoneNumber;          // ����������
	// ���������
	const std::string position;

public:
	// ����������� ������ Student
	Student(std::string, std::string, std::string, Phone&);

	// ������� ���� ����������
	std::string getData() const;

	~Student();
};

