#include "Audiobook.h"

void Audiobook::get_data()
{
	Item::get_data();
	std::cout << "Введите время звучания: ";
	std::cin >> time;
}

void Audiobook::put_data()
{
	Item::put_data();
	std::cout << "\nВремя звучания: " << time;
}
