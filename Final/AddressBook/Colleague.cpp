#include "Colleague.h"

Colleague::Colleague(std::string lastName, std::string name, std::string fathName, std::string address, Phone& phone) : Person(lastName, name, fathName), position("Коллега")
{
	this->phoneNumber = phone.getPhoneNumber();
	this->address = address;
}


std::string Colleague::getData() const
{
	std::ostringstream fullName;
	fullName << this->position << ": ";
	fullName << Person::getData();
	fullName << "\nНомер телефона: " << this->phoneNumber
		<< "\nАдрес: " << this->address;
	return fullName.str();
}

Colleague::~Colleague()
{ }