﻿// Final.TriangleWithException.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Triangle.h"

int main()
{
    setlocale(LC_ALL, "rus");
    double firstEdge;
    double secondEdge;
    double thirdEdge;
    double area;
    std::cout << "Введите длину первой стороны: ";
    std::cin >> firstEdge;
    std::cout << "Введите длину второй стороны: ";
    std::cin >> secondEdge;
    std::cout << "Введите длину третьей стороны: ";
    std::cin >> thirdEdge;
    try 
    {
        Triangle triangle(firstEdge, secondEdge, thirdEdge);
        area = triangle.calculateArea();
        std::cout << "Площадь равна: " << area <<std::endl;

        triangle.set_edges(5, 4, 13);
        area = triangle.calculateArea();
        std::cout << "Площадь равна: " << area << std::endl;
    }
    catch (Triangle::InvalidEdgeException& error)
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
