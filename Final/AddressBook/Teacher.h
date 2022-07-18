#pragma once
#include "Person.h"
#include "Phone.h"

class Teacher : public Person
{
private:
	// ����� ��������
	Phone phoneNumber;          // ����������
	// ���������
	const std::string position;
	// ��������� (Mr, Ms, Mrs ��� ���������/���������)
	std::string title;

public:
	// ����������� ������ Teacher
	Teacher(std::string, std::string, std::string, std::string, Phone&);

	// ������� ���� ����������
	std::string getData() const;

	~Teacher();
};

