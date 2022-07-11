#include "Paperbook.h"

void Paperbook::get_data()
{
	Item::get_data();
	std::cout << "Введите число страниц:";
	std::cin >> pages;
}

void Paperbook::put_data()
{
	Item::put_data();
	std::cout << "\nСтраниц: " << pages;
}
