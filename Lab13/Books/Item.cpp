#include "Item.h"

void Item::get_data()
{
	std::cout << "\n������� ��������� : ";
	std::cin >> title;
	std::cout << "������� ���� : ";
	std::cin >> price;

}

void Item::put_data()
{
	std::cout << "\n���������: " << title;
	std::cout << "\n����: " << price;

}
