// Final.StudentGrades.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>
#include <map>

struct StudentGrade 
{
    std::string name;
    char grade;
};

int main()
{
    setlocale(LC_ALL, "rus");

    std::map<std::string, char> grades = { {"John" , 'A'}, {"Bob", 'B'},
        {"Alex", 'A'}, {"Marry", 'B'}, {"George", 'C'}};

    char choice;
    do {
        StudentGrade stgr1;
        std::cout << "Enter name: ";
        std::cin >> stgr1.name;
        stgr1.grade = grades[stgr1.name];

        std::cout << stgr1.name << ": " << stgr1.grade << std::endl;

        std::cout << "Continue? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y');
    
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
