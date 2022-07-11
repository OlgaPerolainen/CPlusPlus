#pragma once
#include "Item.h"
class Audiobook : public Item
{
private:
	double time;
public:
	void get_data();
	void put_data();
};

