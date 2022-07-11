// Final.TimeWithOverride.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Time.h"

int main()
{
	setlocale(LC_ALL, "rus");
	try
	{
		Time myTime(3, 8, 40);
		std::cout << "Первое время равно: ";
		myTime.show_time();
		Time mytime1(1, 48, 250);
		std::cout << "Второе время равно: ";
		mytime1.show_time();
		Time myTime2 = myTime + mytime1;
		std::cout << "Если их сложить, будет: ";
		myTime2.show_time();

		Time myTime3 = myTime - mytime1;
		std::cout << "Их равзность равна (вычитаем большее время из меньшего): ";
		myTime3.show_time();
		Time myTime4 = mytime1 - myTime;
		std::cout << "Их равзность равна (пытаемся вычесть меньшее время из большего): ";
		myTime4.show_time();

		std::cout << "Первое время больше второго? ";
		if (myTime > mytime1) std::cout << "Да\n";
		else std::cout << "Нет\n";
		std::cout << "Первое время больше второго или равно ему? ";
		if (myTime >= mytime1) std::cout << "Да\n";
		else std::cout << "Нет\n";

		std::cout << "Первое время меньше второго? ";
		if (myTime < mytime1) std::cout << "Да\n";
		else std::cout << "Нет\n";
		std::cout << "Первое время меньше второго или равно ему? ";
		if (myTime <= mytime1) std::cout << "Да\n";
		else std::cout << "Нет\n";

		std::cout << "Первое и второе время равны? ";
		if (myTime == mytime1) std::cout << "Да\n";
		else std::cout << "Нет\n";

		std::cout << "Первое и второе время не равны? ";
		if (myTime != mytime1) std::cout << "Да\n";
		else std::cout << "Нет\n";


		Time myTime5 = myTime3 + 1.5;
		std::cout << "Прибавим к их сумме полтора часа: ";
		myTime5.show_time();

		std::cout << "Прибавим к их сумме 1.6 часа: ";
		Time myTime6 = 1.6 + myTime3;
		myTime6.show_time();

	}
	catch (Time::InvalidAction& error)
	{
		error.printMessage();
		return 1;
	}
	return 0;
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
