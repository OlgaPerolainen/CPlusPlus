// Lab03.Ex04.Task01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int addNumbers(int n);
int addNumbers(int n, int last);
int gcd(int m, int n);

int main()
{
    int number;
    int lastNum;
    system("chcp 1251");
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << "Введите нижнюю границу: ";
    std::cin >> lastNum;
    int res1 = addNumbers(number);
    int res2 = addNumbers(number, lastNum);
    std::cout << "Сумма чисел от 1 до " << number << " равна: " << res1 << std::endl;
    std::cout << "Сумма чисел от " << lastNum << " до " << number << " равна: " << res2 << std::endl;

    std::cout << "Алгоритм Евклида. Определение наибольшего общего делителя" << std::endl;
    int first;
    int second;
    std::cout << "Введите первое число: ";
    std::cin >> first;
    std::cout << "Введите второе число: ";
    std::cin >> second;
    int gcdNum = gcd(first, second);
    std::cout << "Наибольший общий делитель: " << gcdNum << std::endl;
}

int addNumbers(int n)
{
    if (n == 1) return 1;
    else return (n + addNumbers(n - 1));
}
int addNumbers(int n, int last)
{
    if (n == last) return last;
    else return (n + addNumbers((n - 1), last));
}

int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
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
