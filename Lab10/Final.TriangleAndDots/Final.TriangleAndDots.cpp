// Final.TriangleAndDots.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Dot.h"
#include "Triangle.h"

int main()
{
    setlocale(LC_ALL, "rus");
    Dot first(1, 1);
    Dot second(5, 4);
    Dot third(3, -1);

    Triangle triangle(first, second, third);
    triangle.showEdgesLength();
    double area1 = triangle.calculateArea();
    std::cout << "Площадь равна: " << area1 << std::endl;
    triangle.move();

    triangle.show_a();
    std::cout << first.get_x() << ":" << first.get_y() << std::endl;

    Dot forth(1, 1);
    Dot fifth(5, 4);
    Dot sixth(3, -1);

    TrianglePointer tr1(forth, fifth, sixth);            // композиция
    tr1.showEdgesLength();
    double area2 = tr1.calculateArea();
    std::cout << "Площадь равна: " << area2 << std::endl;
    tr1.move();
    std::cout << forth.get_x() << ":" << forth.get_y() << std::endl;
    tr1.show_a();

    Dot seven(1, 1);
    Dot eight(5, 4);
    Dot nine(3, -1);
    TrianglePointer tr2(&seven, &eight, &nine);         // агрегация
    tr2.showEdgesLength();
    double area3 = tr2.calculateArea();
    std::cout << "Площадь равна: " << area3 << std::endl;
    tr2.move();
    std::cout << seven.get_x() << ":" << seven.get_y() << std::endl;
    tr2.show_a();

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
