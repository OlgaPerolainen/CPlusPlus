#include "Item.h"

void Item::get_data()
{
	std::cout << "\nВведите заголовок : ";
	std::cin >> title;
	std::cout << "Введите цену : ";
	std::cin >> price;

}

void Item::put_data()
{
	std::cout << "\nЗаголовок: " << title;
	std::cout << "\nЦена: " << price;

}
