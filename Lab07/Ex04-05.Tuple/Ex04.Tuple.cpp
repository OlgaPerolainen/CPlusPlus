// Ex04.Tuple.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using Tuple = std::tuple<std::string, int, double>;

void PrintTupleOfThree(Tuple);
void PrintTupleOfTwo(std::tuple<std::string, double>);
Tuple funtup(std::string, int, double);
Tuple changeTuple(Tuple);
std::tuple<std::string, double> makeAnew(Tuple);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::vector<std::string> v1{ "one", "two", "three", "four", "five", "six" };
	std::vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	std::vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

	Tuple t0 = std::make_tuple(v1[0], v2[0], v3[0]);

	auto t1 = funtup(v1[1], v2[1], v3[1]);

	Tuple t2 = std::make_tuple(v1[2], v2[2], v3[2]);
	changeTuple(t2);
	auto t3 = makeAnew(t2);

	PrintTupleOfThree(t0);
	PrintTupleOfThree(t1);
	PrintTupleOfThree(t2);
	PrintTupleOfTwo(t3);
		
	return 0;
}

void PrintTupleOfThree(Tuple t)
{
	std::cout << "(" << std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << std::endl;
}
void PrintTupleOfTwo(std::tuple<std::string, double> t)
{
	std::cout << "(" << std::get<0>(t) << " "
		<< std::get<1>(t) << "!)"
		<< std::endl;
}

Tuple funtup(std::string s, int a, double d)
{
	s.append("!");
	return std::make_tuple(s, a, d * 10);
}

Tuple changeTuple(Tuple t)
{
	std::string s = std::get<0>(t).append("!");
	int a = std::get<1>(t) + 5;
	double d = std::get<2>(t) * 4;
	return std::make_tuple(s, a, d);
}

std::tuple<std::string, double> makeAnew(Tuple t)
{
	std::string s = std::get<0>(t).append(":");
	double d = std::get<2>(t) * 3.;
	return std::make_tuple(s, d);
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
