// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Time.h"

Time addTime(Time&, Time&);

int main()
{
    Time myTime(3, 8, 40);
    Time mytime1(1, 48, 250);
    Time myTime2 = addTime(myTime, mytime1);

	myTime.show_time();
	mytime1.show_time();
    myTime2.show_time();
}

Time addTime(Time& t1, Time& t2)
{
	Time newTime;

	newTime.set_seconds(t1.get_seconds() + t2.get_seconds());
	int newTimeScnds = newTime.get_seconds();

	if (newTimeScnds >= 60)
	{
		newTime.set_minutes(newTime.get_seconds() / 60);
		newTime.set_seconds(newTimeScnds % 60);
	}
	newTime.set_minutes(newTime.get_minutes() + t1.get_minutes() + t2.get_minutes());
	int newTimeMnts = newTime.get_minutes();
	if (newTimeMnts >= 60)
	{
		newTime.set_hours(newTimeMnts / 60);
		newTime.set_minutes(newTimeMnts % 60);
	}
	newTime.set_hours(newTime.get_hours() + t1.get_hours() + t2.get_hours());
	return newTime;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
