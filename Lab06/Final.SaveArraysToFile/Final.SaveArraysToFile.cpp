﻿// Final.SaveArraysToFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>

void fillArray(int, int*);
void sortArray(int, int*);
void printArray(int, int*);


int main()
{
    system("chcp 1251");

    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;
    int* array = new int[n];

    fillArray(n, array);

    std::ofstream out("arrays", std::ios::out | std::ios::binary);
    if (!out) {
        std::cout << "Файл открыть невозможно\n";
        return 1;
    }

    out << "Исходный массив: ";
    for (int i = 0; i < n; i++)
        out << array[i] << " ";
    out << "\n";

    sortArray(n, array);

    out << "Отсортированный массив: ";
    for (int i = 0; i < n; i++)
        out << array[i] << " ";
    
    out.close();

    printArray(n, array);

    delete[] array;
    return 0;
}


void fillArray(int n, int* array)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Array[" << i << "] = ";
        std::cin >> array[i];
    }
}

void sortArray(int n, int* array)
{
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями

    for (int i = 0; i < n; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением

        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < n; j++)
            min = (array[j] < array[min]) ? j : min;

        // перестановим элемент, поменяв его местами с текущим
        if (i != min)
        {
            buf = array[i];
            array[i] = array[min];
            array[min] = buf;
        }
    }
}

void printArray(int n, int* array)
{
    for (int i = 0; i < n; i++)
        std::cout << array[i] << '\t';
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
