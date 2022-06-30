﻿// Ex01.Distance.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
struct Distance
{
    int feet;
    double inches;
    void ShowDist();
};

Distance AddDist(const Distance&, const Distance&);
Distance InputDist();

int main()
{
    setlocale(LC_ALL, "rus");

    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 };
    Distance d3 = AddDist(d1, d2);

    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();

    int n;
    std::cout << "Введите размер массива расстояний ";
    std::cin >> n;
    Distance* masDist = new Distance[n];

    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist();
    }

    for (int i = 0; i < n; i++)
    {
        masDist[i].ShowDist();
    }

    Distance total;
    total.feet = 0;
    total.inches = 0.0;
    for (int i = 0; i < n; i++)
    {
        total = AddDist(total, masDist[i]);
    }

    total.ShowDist();
    delete[] masDist;
}

Distance AddDist(const Distance &d1, const Distance &d2)
{
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    if (d.inches >= 12.0)
    {
        d.inches -= 12.0;
        d.feet++;
    }
    return d;
}

Distance InputDist()
{
    Distance d;
    std::cout << "\nВведите число футов: ";
    std::cin >> d.feet;
    std::cout << "Введите число дюймов: ";
    std::cin >> d.inches;
    return d;
}
void Distance::ShowDist()
{
    std::cout << feet << "\'-" << inches << "\"\n";
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
