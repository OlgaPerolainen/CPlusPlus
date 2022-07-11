// SortArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
template<class T>
T getAverage(T arr[], int size);
template<class T>
void show(T arr[], int size);

int main()
{
    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "152934456";
    long arrl[] = { 9L, 2137136721L, 3L, 356723L };
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    int k4 = sizeof(arrl) / sizeof(arrl[0]);
    auto average = getAverage(arr, k1);
    auto average1 = getAverage(arrd, k2);
    auto average2 = getAverage(arrc, k3);
    auto average3 = getAverage(arrl, k4);
    
    show(arr, k1);
    std::cout << "Average: " << average << std::endl;
    show(arrd, k2);
    std::cout << "Average: " << average1 << std::endl;
    show(arrc, k3);
    std::cout << "Average: " << average2 << std::endl;
    show(arrl, k4);
    std::cout << "Average: " << average3 << std::endl;
}

template<class T>
T getAverage(T arr[], int size) {
    T total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return (total / size);
}

template<class T>
void show(T arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ";";
    std::cout << std::endl;
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
