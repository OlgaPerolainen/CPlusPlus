#pragma once
#include <string>
#include <sstream>

class Human
{
private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
public:
	// ����������� ������ human
	Human(std::string, std::string, std::string);

	// ��������� ��� ��������
	std::string get_full_name();
};

