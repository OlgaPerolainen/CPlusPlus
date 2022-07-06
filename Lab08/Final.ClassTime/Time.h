#pragma once
#include <string>

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

private:
	int hours;
	int minutes;
	int seconds;
};

