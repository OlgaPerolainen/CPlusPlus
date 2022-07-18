#pragma once
#include <string>
#include <sstream>

class Person
{
public:
	Person(std::string, std::string, std::string);

	std::string getLastName();
	std::string getName();
	std::string getFathName();
	virtual std::string getData() const;
	virtual ~Person() = 0;

private:
	std::string lastName;
	std::string name;
	std::string fathName;
};

