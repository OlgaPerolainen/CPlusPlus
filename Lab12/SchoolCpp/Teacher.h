#pragma once
#include "Human.h"
class Teacher :
    public Human
{
private:
    // ������� ����
    unsigned int work_time;
public:
    Teacher(std::string, std::string, std::string, unsigned int);
    
    // ��������� ���������� ������� �����
    unsigned int get_work_time();  
};

