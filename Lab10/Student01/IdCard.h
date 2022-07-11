#pragma once
#include <string>

class IdCard
{
private:
	int number;
	std::string category;
public:
	IdCard();
	IdCard(int);
	IdCard(int, std::string);

	void set_number(int newNumber);
	int get_number();
	void set_category(std::string cat);
	std::string get_category();
};

