#pragma once
#include "Human.h"
class Teacher :
    public Human
{
private:
    // Учебные часы
    unsigned int work_time;
public:
    Teacher(std::string, std::string, std::string, unsigned int);
    
    // Получение количества учебных часов
    unsigned int get_work_time();  
};

