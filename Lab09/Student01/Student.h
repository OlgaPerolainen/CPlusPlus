#pragma once
#include <string>

class Student
{
public:

	Student(std::string, std::string);

	class ExScore
	{
	public:
		std::string origin; //��� ����� �������
		int iValue; //��� �������� ���������� ��������
		ExScore(std::string orig , int sc)
		{
			origin = orig; //������ � ������ ��������� ������
			iValue = sc; //����������� ������������ �������� 
		}
	};

	void save();                  // ������ ������ � �������� � ����

	void set_name(std::string);  // ��������� ����� ��������
	std::string get_name();      // ��������� ����� ��������
	
	void set_last_name(std::string); // ��������� ������� ��������
	std::string get_last_name();	 // ��������� ������� ��������

	void set_scores(int[]);          // ��������� ������������� ������

	void set_average_score(double);	// ��������� �������� �����
	double get_average_score(); 	// ��������� �������� �����

	~Student();                     // ���������� ������ Student

private:
	int scores[5]; // ������������� ������
	double average_score; // ������� ����
	std::string name; // ���
	std::string last_name; // �������
};

