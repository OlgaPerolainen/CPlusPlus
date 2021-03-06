// Lab02.Darts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

struct Point
{
    // Структура точки, состоящая из значений абсциссы, ординаты и расстояния до центра
    double x;
    double y;
    double distanceToCenter;
};

int main()
{
    system("chcp 1251");
    // Максимальное количество очков
    const int maxScores = 50;

    // Массив, содержащий значения очков
    int points[] = { 10, 5, 1 };

    // Массив, содержащий значения радиусов
    int radius[] = { 1, 2, 3 };

    // Счетчик количества попыток
    int tries = 0;

    // Счетчик очков
    int scores = 0;

    // Определение центра мишени генератором случайных чисел
    Point center;
    srand(time(0));
    std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
    center.x = (double)rand() / (double)RAND_MAX * 3;
    center.y = (double)rand() / (double)RAND_MAX * 3;

    std::cout << "Нужно набрать " << maxScores << " очков." << std::endl;

    // Цикл игры
    do
    {
        tries++;                                          // увеличиваем счетчик попыток
        int index = 0;                                    // индекс массива для перебора значений радиуса
        Point point;                                      // создаем новую точку, в которую будет попадать игрок
        
        std::cout << "Введите координаты точки: ";
        std::cin >> point.x >> point.y;                   // ввод координат точки
        point.distanceToCenter = pow(point.x - center.x, 2) + pow(point.y - center.y, 2);   // вычисление расстояния до центра


        // Вычисление области, в которую попал игрок, и количества очков
        for (int rad : radius)
        {
            // Сравнение квадрата расстояния от указанной точки до центра окружности
            // и квадрата радиуса окружности
            // с целью вычисления, в какую область попал игрок
            if (point.distanceToCenter <= pow(rad, 2))
            {
                scores += points[index];                       // начисление соответствующих очков
                break;
            }
            else {
                index++;
            }
        }
    } while (scores < maxScores);

    std::cout << "Количество попыток: " << tries << std::endl;
    std::cout << "Центр мишени находился на точке: " << "{" << center.x << ";" << center.y << "}" << std::endl;

    if(tries <= 8) std::cout << "Вы снайпер!" << std::endl;
    else if(tries <= 15) std::cout << "Вы хороший стрелок!" << std::endl;
    else std::cout << "Вы новичок!" << std::endl;
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
