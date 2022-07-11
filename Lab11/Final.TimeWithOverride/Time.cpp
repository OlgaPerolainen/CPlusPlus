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

int Time::calcSeconds()
{
	return hours * 3600 + minutes * 60 + seconds;
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

Time operator+(const Time& t1, const Time& t2)
{
	Time newTime;

	newTime.set_seconds(t1.seconds + t2.seconds);

	if (newTime.get_seconds() >= 60)
	{
		newTime.set_minutes(newTime.get_seconds() / 60);
		newTime.set_seconds(newTime.get_seconds() % 60);
	}
	newTime.set_minutes(newTime.get_minutes() + t1.minutes + t2.minutes);

	int newTimeMnts = newTime.get_minutes();
	if (newTimeMnts >= 60)
	{
		newTime.set_hours(newTimeMnts / 60);
		newTime.set_minutes(newTimeMnts % 60);
	}
	newTime.set_hours(newTime.get_hours() + t1.hours + t2.hours);
	return newTime;
}

Time operator+(const Time& t1, double number)
{
	int newSecnds = static_cast<int>(number * 60);

	Time newTime;

	newTime.set_seconds(t1.seconds);

	newTime.set_minutes(t1.minutes + newSecnds);

	int newTimeMnts = newTime.get_minutes();
	if (newTimeMnts >= 60)
	{
		newTime.set_hours(newTimeMnts / 60);
		newTime.set_minutes(newTimeMnts % 60);
	}
	newTime.set_hours(newTime.get_hours() + t1.hours);
	return newTime;
}

Time operator+(double number, const Time& t1)
{
	return t1 + number;
}

Time operator-(Time& t1, Time& t2)
{
	Time newTime;
	if (t1 >= t2)
	{
		newTime.seconds = t1.calcSeconds() - t2.calcSeconds();
	}
	else
		newTime.seconds = t2.calcSeconds() - t1.calcSeconds();

	newTime.hours = newTime.seconds / 3600;
	newTime.seconds -= newTime.hours * 3600;
	newTime.minutes = newTime.seconds / 60;
	newTime.seconds -= newTime.minutes * 60;

	return newTime;
}

bool operator>(Time& t1, Time& t2)
{
	return t1.calcSeconds() > t2.calcSeconds();
}

bool operator>=(Time& t1, Time& t2)
{
	return t1.calcSeconds() >= t2.calcSeconds();
}

bool operator<(Time& t1, Time& t2)
{
	return t1.calcSeconds() < t2.calcSeconds();
}

bool operator<=(Time& t1, Time& t2)
{
	return t1.calcSeconds() <= t2.calcSeconds();
}

bool operator==(Time& t1, Time& t2)
{
	return t1.calcSeconds() == t2.calcSeconds();
}

bool operator!=(Time& t1, Time& t2)
{
	return t1.calcSeconds() != t2.calcSeconds();
}
