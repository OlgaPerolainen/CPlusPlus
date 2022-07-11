#include "IdCard.h"

IdCard::IdCard() : number(0), category("Не установлена")
{ }

IdCard::IdCard(int n) : number(n), category("Не установлена")
{ }

IdCard::IdCard(int n, std::string cat) : number(n), category(cat)
{ }

void IdCard::set_number(int newNumber)
{
	number = newNumber;
}

int IdCard::get_number()
{
	return number;
}

void IdCard::set_category(std::string cat)
{
	category = cat;
}

std::string IdCard::get_category()
{
	return category;
}
