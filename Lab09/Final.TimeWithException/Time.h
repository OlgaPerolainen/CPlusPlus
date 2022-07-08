#pragma once
#include <string>
#include <iostream>

class Time
{
public:
	Time();
	Time(int, int, int);
	int calcSeconds(int, int, int);
	void set_hours(int);
	int get_hours();
	void set_minutes(int);
	int get_minutes();
	void set_seconds(int);
	int get_seconds();
	void show_time() const;
	void validate(int);
	void validate(int, int, int);

	class InvalidAction
	{
	public:
		InvalidAction() : message("Ошибка. Данная операция невозможна.") {}
		void printMessage() const
		{
			std::cout << message << std::endl;
		}

	private:
		const std::string message;
	};

private:
	int hours;
	int minutes;
	int seconds;
};

