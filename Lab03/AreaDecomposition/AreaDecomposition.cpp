// AreaDecomposition.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>

double claculateEdge(double x1, double y1, double x2, double y2);
double calculateArea(double firstEdge, double secondEdge, double thirdEdge);

int main()
{
    system("chcp 1251");
    int numberOfApexes;

    std::vector<double> x;             // например, пятиуг Ось X: {-1, -2, 1, 3, 1}; шестиуг Ось X: {-1, -2, -1, 1, 3, 1}
    std::vector<double> y;             // например, пятиуг Ось Y: {-1, 2, 4, 0, -1}; шестиуг Ось Y: {-1, 2, 3, 4, 0, -1}
    std::vector<double> edges;
    std::vector<double> areas;

    double xNumber;
    double yNumber;

    double totalArea = 0;

    // Запрос количества вершин
    std::cout << "Введите количество вершин: " << std::endl;
    std::cin >> numberOfApexes;
    std::cout << "Вводите координаты вершин по кругу" << std::endl;

    // Запись координат по оси x в один список, а координат по оси y - в другой
    for (int i = 1; i < numberOfApexes + 1; i++) {
        std::cout << "Введите координаты вершины " << i << ": " << std::endl;
        std::cin >> xNumber >> yNumber;
        x.push_back(xNumber);
        y.push_back(yNumber);
    }

    // Вычисление длин сторон треугольников
    for (int i = 1; i < x.size(); i++)
    {
        if (i == x.size() - 1)
        {
            // Обращение к функции для вычисления длины
            double edge = claculateEdge(x[0], y[0], x[i], y[i]);
            edges.push_back(edge);
        }
        else
        {
            double edge = claculateEdge(x[0], y[0], x[i], y[i]);
            double edge1 = claculateEdge(x[i], y[i], x[i + 1], y[i + 1]);
            edges.push_back(edge);
            edges.push_back(edge1);
        }
    }

    // Считывание значений сторон треугольников из списка,
    // обращение к функции расчета площади,
    // запись площади в вектор
    for (int i = 0; i < edges.size() - 1; i++) {
        double firstEdge = edges[i];
        double secondEdge = edges[++i];
        double thirdEdge = edges[i + 1];

        double area = calculateArea(firstEdge, secondEdge, thirdEdge);
        areas.push_back(area);
    }

    // Суммирование площадей всех треугольников
    for (double area : areas)
    {
        totalArea += area;
    }

    // Вывод площади
    std::cout << "Площадь равна: " << totalArea;
}


// Функция, вычисляющая длину стороны треугольника
double claculateEdge(double x1, double y1, double x2, double y2) {

    double length = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return length;
}

// Функция, вычисляющая площадь треугольника по формуле Герона
double calculateArea(double firstEdge, double secondEdge, double thirdEdge){  
    double semiperimeter = (firstEdge + secondEdge + thirdEdge) / 2;
    double area = sqrt(semiperimeter * (semiperimeter - firstEdge) * (semiperimeter - secondEdge) * (semiperimeter - thirdEdge));
    return area;
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
