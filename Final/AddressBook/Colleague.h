#pragma once
#include "Person.h"
#include "Phone.h"

class Colleague : public Person
{
private:
	// ����� ��������
	Phone phoneNumber;          // ����������
	// ���������
	const std::string position;
	// �����
	std::string address;

public:
	// ����������� ������ Teacher
	Colleague(std::string, std::string, std::string, std::string, Phone&);

	// ������� ���� ����������
	std::string getData() const;

	~Colleague();
};

