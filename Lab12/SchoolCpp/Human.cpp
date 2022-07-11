#include "Human.h"

// ����������� ������ human
Human::Human(std::string last_name, std::string name, std::string second_name)
{
	this->last_name = last_name;
	this->name = name;
	this->second_name = second_name;
}

// ��������� ��� ��������
std::string Human::get_full_name()
{
	std::ostringstream full_name;
	full_name << this->last_name << " "
		<< this->name << " "
		<< this->second_name;
	return full_name.str();
}