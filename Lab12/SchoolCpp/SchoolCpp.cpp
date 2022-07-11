// SchoolCpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Student.h"
#include "Teacher.h"


int main()
{
    setlocale(LC_ALL, "rus");

    std::vector<int> scores;
    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);


    Student *student = new Student("Васильев", "Василий", "Васильевич", scores);
    std::cout <<  student->get_full_name() << std::endl;
    float average = student->get_average_score();
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);
    std::cout << "Средний балл: " << average << std::endl;

    unsigned int teacher_work_time = 40;
    Teacher* teacher = new Teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
    std::cout << teacher->get_full_name() << std::endl;
    std::cout << "Количество часов: " << teacher->get_work_time() << std::endl;
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
