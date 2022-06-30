// Ex01.Arrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    const int n = 10;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "Array[" << i <<"] = ";
        std::cin >> array[i];
    }

    int s = 0;
    int sMinus = 0;
    int sPlus = 0;
    int sOddInd = 0;
    int sEvenInd = 0;
    int maxNum = array[0];
    int minNum = array[0];

    for (int i = 0; i < n; i++)
    {
        s += array[i];

        if (array[i] < 0) sMinus += array[i];
        else sPlus += array[i];

        if (i % 2 == 0) sEvenInd += array[i];
        else sOddInd += array[i];

        if (array[i] > maxNum) maxNum = array[i];
        if (array[i] < minNum) minNum = array[i];
    }


    int indexMax;
    int indexMin;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == maxNum)
        {
            indexMax = i;
        }

        if (array[i] == minNum)
        {
            indexMin = i;
        }
    }

    int multiply = 1;
    if (indexMax > indexMin)
    {
        for (int i = indexMin; i <= indexMax; i++)
        {
            multiply *= array[i];
        }
    }
    else
    {
        for (int i = indexMax; i <= indexMin; i++)
        {
            multiply *= array[i];
        }
    }
    

    std::cout << "Сумма всех элементов массива: " << s << std::endl;
    std::cout << "Сумма отрицательных элементов массива: " << sMinus << std::endl;
    std::cout << "Сумма положительных элементов массива: " << sPlus << std::endl;
    std::cout << "Сумма элементов массива с нечетными индексами: " << sOddInd << std::endl;
    std::cout << "Сумма элементов массива с четными индексами: " << sEvenInd << std::endl;
    std::cout << "Индекс элемента массива с наибольшим значением: " << indexMax << std::endl;
    std::cout << "Индекс элемента массива с наименьшим значением: " << indexMin << std::endl;
    std::cout << "Произведение элементов массива, расположенных между максимальным и минимальным элементами: " << multiply << std::endl;


    double average = (double)s / n;
    std::cout << "Среднее значение элементов массива: " << average << std::endl;
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
