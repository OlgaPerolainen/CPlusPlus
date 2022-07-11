// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Student.h"

int main()
{
    setlocale(LC_ALL, "rus");
    std::string name;
    std::string last_name;
    int scores[5];

    // Ввод имени
    std::cout << "Name: ";
    std::getline(std::cin, name);
    // Ввод фамилии
    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    IdCard* idc = new IdCard(123, "Базовый");

    Student* student01 = new Student(name, last_name);

    // Сумма всех оценок
    int sum = 0;
    // Ввод промежуточных оценок
    for (int i = 0; i < 5; ++i) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];
        // суммирование
        sum += scores[i];
    }

    // Сохранение имени и фамилии в объект класса Student
    student01->set_name(name);
    student01->set_last_name(last_name);
    try
    {
        // Сохранение промежуточных оценок в объект класса Student
        student01->set_scores(scores);
        double average_score = sum / 5.0;
        // Сохранение среднего балла в объект класса Student
        student01->set_average_score(average_score);
        std::cout << "Average score for " << student01->get_name() << " "
            << student01->get_last_name() << " is "
            << student01->get_average_score() << std::endl;
    }
    catch (Student::ExScore& ex)
    {
        std::cout << "\nОшибка инициализации " << ex.origin;
        std::cout << "\nОшибка инициализации " << ex.origin;
    }

    Student* student02 = new Student(name, last_name, idc);
    std::cout << "IdCard: " << student02->get_idCard().get_number() << std::endl;
    std::cout << "Category: " << student02->get_idCard().get_category() << std::endl;
    delete student01;
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
