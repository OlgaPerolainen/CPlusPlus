#pragma once
#include "Item.h"
class Paperbook : public Item
{
private:
    int pages;
public:
    void get_data();
    void put_data();
};

