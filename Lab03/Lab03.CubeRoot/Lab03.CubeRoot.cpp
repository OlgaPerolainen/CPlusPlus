// Lab03.CubeRoot.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

double calculateCubeRoot(int a);
double calculateCubeRootWithFormula(int a);

int main()
{
    system("chcp 1251");
    double a;
    std::cout << "Введите число: " << std::endl;
    std::cin >> a;
    double res = calculateCubeRoot(a);
    std::cout << "Кубиечский корень равен: " << res << std::endl;
    double res1 = calculateCubeRootWithFormula(a);
    std::cout << "Кубиечский корень равен: " << res1 << std::endl;
}
double calculateCubeRoot(int a)
{
    return pow(a, 1.0 / 3);
}

double calculateCubeRootWithFormula(int a)
{
    if (a == 0) {
        return 0; 
    }            
    double xi = a;
    double xi0 = -1.;
    while (abs(xi - xi0) > 0.0000000000001) {
        xi0 = xi;
        xi = (1. / 3.) * ((a / (xi0 * xi0)) + 2. * xi0);
    }
    return xi;
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
