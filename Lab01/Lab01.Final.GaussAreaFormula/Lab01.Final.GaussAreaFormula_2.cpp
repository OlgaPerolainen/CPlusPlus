// Lab01.Final.GaussAreaFormula.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    system("chcp 1251");
    int numberOfApexes;
    double adding = 0;
    double substracting = 0;
	

    std::vector<double> x;
    std::vector<double> y;
    double xNumber;
    double yNumber;

    std::cout << "Введите количество вершин: " << std::endl;
    std::cin >> numberOfApexes;

	// Записываем координаты по оси x в один список, а координаты по оси y - в другой
    for (int i = 1; i < numberOfApexes + 1; i++) {
        std::cout << "Введите координаты вершины " << i << ": " << std::endl;
        std::cin >> xNumber >> yNumber;
        x.push_back(xNumber);
        y.push_back(yNumber);
    }
    
	// Умножаем значения координат
    for (int i = 0; i < x.size(); i++) {
        if (i == x.size() - 1)
        {
            adding += x.at(i) * y.at(0);
            substracting += y.at(i) * x.at(0);
        }
        else
        {
            adding += x.at(i) * y.at(i + 1);
            substracting += y.at(i) * x.at(i + 1);
        }
    }

    std::cout << "Площадь равна: " << abs(adding - substracting) / 2;
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
