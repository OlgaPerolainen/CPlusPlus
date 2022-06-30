﻿// Lab02.Ex3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int a, b, c;
    int  k = 0, n = 10;

    for (int i = 1; i <= n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        std::cout << a << " * " << b << " = ";
        std::cin >> c;

        if (a * b != c)
        {
            k++;
            std::cout << "Error!" << std::endl;
            std::cout << a << " * " << b << " = " << a * b << std::endl;
        }
    }
    std::cout << "Count error: " << k << std::endl;
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
