#include "Student.h"


Student::Student(std::string lastName, std::string name, std::string fathName, Phone& phone) : Person(lastName, name, fathName), position("�������")
{
	this->phoneNumber = phone.getPhoneNumber();
}

std::string Student::getData() const
{
	std::ostringstream fullName;
	fullName << this->position << ": ";
	fullName << Person::getData();
	fullName << "\n����� ��������: " << this->phoneNumber;
	return fullName.str();
}

Student::~Student()
{ }
