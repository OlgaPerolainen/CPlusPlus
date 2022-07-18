#include "Phone.h"
#include <ostream>

Phone::Phone() : phoneNumber("Unknown")
{ }

Phone::Phone(std::string phone)
{
	validate(phone);
	phoneNumber = phone;
}

std::string Phone::getPhoneNumber()
{
	return phoneNumber;
}

void Phone::validate(const std::string& s)
{	
	if (s != "Unknown")
	{
		bool flag = false;
		for (const char c : s)
		{
			if (!isdigit(c) && !ispunct(c))
			{
				flag = true;
				break;
			}
		}
		if (flag)
			throw InvalidPhoneNumber();
	}
}

std::ostream& operator<<(std::ostream& out, const Phone& phone)
{
	out << phone.phoneNumber;
	return out;
}
