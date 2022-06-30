// Lab01.Final.GaussAreaFormula.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;
};

int main()
{
    system("chcp 1251");
    const int numnerOfApexes = 5;
    double area;
    double adding = 0;
    double substraction = 0;
    Point point1, point2, point3, point4, point5;
    
    std::cout << "Введите координаты первой вершины: " << std::endl;
    std::cin >> point1.x >> point1.y;

    std::cout << "Введите координаты второй вершины: " << std::endl;
    std::cin >> point2.x >> point2.y;

    std::cout << "Введите координаты третьей вершины: " << std::endl;
    std::cin >> point3.x >> point3.y;

    std::cout << "Введите координаты четвертой вершины: " << std::endl;
    std::cin >> point4.x >> point4.y;

    std::cout << "Введите координаты пятой вершины: " << std::endl;
    std::cin >> point5.x >> point5.y;

    area = abs(point1.x * point2.y +
        point2.x * point3.y +
        point3.x * point4.y +
        point4.x * point5.y +
        point5.x * point1.y - 
        point2.x * point1.y -
        point3.x * point2.y -
        point4.x * point3.y -
        point5.x * point4.y -
        point1.x * point5.y) / 2;

    std::cout << "Площадь пятиугольника равна: " << area;
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
