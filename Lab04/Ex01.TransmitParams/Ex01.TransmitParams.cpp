﻿// Ex01.TransmitParams.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void fum_value(double k, double x, double y);
void fum_ptr(double k, double* x, double* y);
void fum_ref(double k, double& x, double& y);
void print(double x, double y);

int main()
{
    double k = 2.5;
    double xv = 10;
    double yv = 10;
    print(xv, yv);

    std::cout << "--------------------------" << std::endl;
    fum_value(k, xv, yv);
    print(xv, yv);
    std::cout << "--------------------------" << std::endl;

    std::cout << "--------------------------" << std::endl;
    fum_ptr(k, &xv, &yv);
    print(xv, yv);
    std::cout << "--------------------------" << std::endl;

    std::cout << "--------------------------" << std::endl;
    fum_ref(k, xv, yv);
    print(xv, yv);
    std::cout << "--------------------------" << std::endl;
}

void fum_value(double k, double x, double y)
{
    x += k;
    y += k;
}

void fum_ptr(double k, double *x, double *y)
{
    *x += k;
    *y += k;
}

void fum_ref(double k, double &x, double &y)
{
    x += k;
    y += k;
}

void print(double x, double y)
{
    std::cout << "x = " << x << ": y = " << y << std::endl;
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
