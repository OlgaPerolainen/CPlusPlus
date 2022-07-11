#pragma once
#include <iostream>
#include <string>
#include <windows.h>

class Item
{
private:
	std::string title;
	double price;
public:
	virtual void get_data();
	virtual void put_data();

};

