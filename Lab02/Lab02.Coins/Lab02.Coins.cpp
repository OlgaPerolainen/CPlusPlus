// Lab02.Coins.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    system("chcp 1251");
    int numberOfCoins;
    int i = 0;
    const int numberOfNominals = 4;

    int rubles[numberOfNominals] = { 10, 5, 2, 1 };
    int counters[numberOfNominals] = { 0, 0, 0, 0 };

    std::cout << "Введите сумму: ";
    std::cin >> numberOfCoins;

    while (numberOfCoins > 0) {
        if (numberOfCoins >= rubles[i])
        {
            counters[i] = numberOfCoins / rubles[i];
            numberOfCoins -= counters[i] * rubles[i];
            i++;
        }
        else i++;
    };

    for (int j = 0; j < numberOfNominals; j++) {
        if (counters[j] > 0) {
            std::cout << "Количество монет номиналом " << rubles[j] << "р.: " << counters[j] << std::endl;
        }
    }
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
