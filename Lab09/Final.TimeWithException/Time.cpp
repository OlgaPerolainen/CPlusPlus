#include "Time.h"
#include <iostream>
#include <iomanip>

Time::Time() : hours(0), minutes(0), seconds(0)
{}

Time::Time(int hrs, int mnts, int scnds)
{
	validate(hrs, mnts, scnds);
	int temp_seconds = calcSeconds(hrs, mnts, scnds);
	hours = temp_seconds / 3600;
	temp_seconds -= get_hours() * 3600;
	minutes = temp_seconds / 60;
	seconds = temp_seconds - get_minutes() * 60;
}

int Time::calcSeconds(int hrs, int mnts, int scnds)
{
	return hrs * 3600 + mnts * 60 + scnds;
}

void Time::set_hours(int hrs)
{
	validate(hrs);
	hours = hrs;

}

int Time::get_hours()
{
	return hours;
}

void Time::set_minutes(int mnts)
{
	validate(mnts);
	minutes = mnts;
}

int Time::get_minutes()
{
	return minutes;
}

void Time::set_seconds(int scnds)
{
	validate(scnds);
	seconds = scnds;
}

int Time::get_seconds()
{
	return seconds;
}

void Time::show_time() const
{
	std::cout << std::setfill('0') << std::setw(2) << hours << ":"
		<< std::setfill('0') << std::setw(2) << minutes << ":"
		<< std::setfill('0') << std::setw(2) << seconds << std::endl;
}

void Time::validate(int number)
{
	if (number < 0)
	{
		throw InvalidAction();
	}
}

void Time::validate(int hrs, int mnts, int scnds)
{
	if (hrs < 0 || mnts < 0 || scnds < 0)
	{
		throw InvalidAction();
	}
}

