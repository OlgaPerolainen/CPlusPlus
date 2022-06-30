// Lab03.TriangleArea.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

double calculateArea(double edge);
double calculateArea(double firstEdge, double secondEdge, double thirdEdge);

int main()
{
    setlocale(LC_ALL, "rus");
    int answer;
    std::cout << "1. Равносторонний\n2. Разносторонний\nВыберите тип треугольника (1 или 2): ";
    std::cin >> answer;

    if (answer != 1 && answer != 2)
    {
        std::cout << "Неизветсная операция";
    }
    else 
    {
        double area;
        if (answer == 1)
        {
            double edge;
            std::cout << "Введите длину одной стороны: ";
            std::cin >> edge;
            area = calculateArea(edge);
        }
        else if (answer == 2)
        {
            double firstEdge;
            double secondEdge;
            double thirdEdge;
            std::cout << "Введите длину первой стороны : ";
            std::cin >> firstEdge;
            std::cout << "Введите длину второй стороны : ";
            std::cin >> secondEdge;
            std::cout << "Введите длину третьей стороны : ";
            std::cin >> thirdEdge;
            area = calculateArea(firstEdge, secondEdge, thirdEdge);
        }
        std::cout.precision(2);
        std::cout.setf(std::ios::fixed);
        std::cout << "Площадь треугольника равна: " << area << std::endl;
    }
}

// Функция, вычисляющая площадь равностороннего треугольника по формуле Герона
double calculateArea(double edge) {
    const int numberOfEdges = 3;
    const int dividerForSemiperimeter = 2;

    double semiperimeter = numberOfEdges * edge / dividerForSemiperimeter;
    double area = sqrt(semiperimeter * pow((semiperimeter - edge), numberOfEdges));
    return area;
}

// Функция, вычисляющая площадь разностороннего треугольника по формуле Герона
double calculateArea(double firstEdge, double secondEdge, double thirdEdge) {
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
