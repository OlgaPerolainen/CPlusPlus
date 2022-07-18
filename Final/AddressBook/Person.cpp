#include "Person.h"

Person::Person(std::string lstNm, std::string nme, std::string scndName) : lastName(lstNm), name(nme), fathName(scndName)
{ }

std::string Person::getLastName()
{
	return this->lastName;
}

std::string Person::getName()
{
	return this->name;
}

std::string Person::getFathName()
{
	return this->fathName;
}

std::string Person::getData() const
{
	std::ostringstream fullName;
	fullName << this->lastName << " "
		<< this->name << " "
		<< this->fathName;
	return fullName.str();
}

Person::~Person()
{ }
