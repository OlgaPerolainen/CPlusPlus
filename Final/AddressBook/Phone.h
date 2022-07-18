#pragma once
#include <string>
#include <iostream>
#include <ostream>
class Phone
{
private:
	std::string phoneNumber;

public:
	Phone();
	Phone(std::string);

	// ������� ������ ��������
	std::string getPhoneNumber();

	// ��������� ������ ��������
	void validate(const std::string& s);

	friend std::ostream& operator<< (std::ostream& out, const Phone& phone);

	class InvalidPhoneNumber
	{
	public:
		InvalidPhoneNumber() : message("������. ����� �������� �����.") {}
		void printMessage() const
		{
			std::cout << message << std::endl;
		}

	private:
		const std::string message;
	};
};

