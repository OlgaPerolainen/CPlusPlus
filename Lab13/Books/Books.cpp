// Books.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Item.h"
#include "Paperbook.h"
#include "Audiobook.h"
int main()
{
    SetConsoleOutputCP(1251);
    
    Item* pubarr[100];

    int n = 0;
    char choice;
    do
    {
        std::cout << "\nВводить данные для книги или звукового файла(b / a) ? ";
        std::cin >> choice;
        if (choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new Audiobook;
        pubarr[n++]->get_data();
        std::cout << "Продолжать((у / n) ? ";
        std::cin >> choice;
    } while (choice == 'y');

    for (int j = 0; j < n; j++)
    {
        pubarr[j]->put_data();
    }
    std::cout << std::endl;


    Paperbook paperbook;
    paperbook.get_data();
    paperbook.put_data();
    std::cout << std::endl;

    Audiobook audiobook;
    audiobook.get_data();
    audiobook.put_data();
    std::cout << std::endl;

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
