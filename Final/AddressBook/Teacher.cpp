#include "Teacher.h"

Teacher::Teacher(std::string lastName, std::string name, std::string fathName, std::string title, Phone& phone) : Person(lastName, name, fathName), position("�������������")
{
	this->title = title;
	this->phoneNumber = phone.getPhoneNumber();
}


std::string Teacher::getData() const
{
	std::ostringstream fullName;
	fullName << this->position << ": " << this->title << " ";
	fullName << Person::getData();
	fullName << "\n����� ��������: " << this->phoneNumber;
	return fullName.str();
}

Teacher::~Teacher()
{ }
