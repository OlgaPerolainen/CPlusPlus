// Final.Time.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct Time
{
    int hours;
    int minutes;
    int seconds;

    bool validateTime();
    int calcSeconds();

    Time addTime(const Time&);
    Time distractTime(Time&);
};

void setTime(Time&);
int getBiggerTime(const Time&, const Time&);

int main()
{
    setlocale(LC_ALL, "rus");

    // Первое время
    Time myTime;                                     // объявление переменной
    setTime(myTime);                                 // установка времени
    if (myTime.validateTime())                       // проверка на допустимость введенных значений
    {
        std::cout << "Количество секунд: " << myTime.calcSeconds() << std::endl;   // подсчет и вывод секунд
    }
    else std::cout << "Время введено неверно";

    // Второе время
    Time myTime2;                                   // объявление переменной
    setTime(myTime2);                               // установка времени
    if (myTime2.validateTime())                     // проверка на допустимость введенных значений
    {
        std::cout << "Количество секунд: " << myTime2.calcSeconds() << std::endl;  // подсчет и вывод секунд
    }
    else std::cout << "Время введено неверно";

    // Обращение к функции для сложения интервалов времени
    Time newTime = myTime.addTime(myTime2);
    std::cout << "Сумма интервалов времени: " << newTime.hours
        << ":" << newTime.minutes
        << ":" << newTime.seconds << std::endl;

    // Обращение к функции для вычисления большего времени
    int biggerTime = getBiggerTime(myTime, myTime2);

    // Обращение к функции для вычисления разницы интервалов времени
    if (biggerTime == 0)
        newTime = myTime.distractTime(myTime2);
    else 
        newTime = myTime2.distractTime(myTime);

    std::cout << "Разница: " << newTime.hours
        << ":" << newTime.minutes
        << ":" << newTime.seconds << std::endl;
}


void setTime(Time &t)
{
    std::cout << "Введите часы: ";
    std::cin >> t.hours;
    std::cout << "Введите минуты: ";
    std::cin >> t.minutes;
    std::cout << "Введите секунды: ";
    std::cin >> t.seconds;
}

int getBiggerTime(const Time& t, const Time& t1)
{
    if (t.hours > t1.hours)
        return 0;
    else if (t.hours < t1.hours)
        return 1;
    else
    {
        if (t.minutes > t1.minutes)
            return 0;
        else if (t.minutes < t1.minutes)
            return 1;
        else
        {
            if (t.seconds > t1.seconds)
                return 0;
            else return 1;
        }
    }
}

bool Time::validateTime()
{
    return hours < 24 && hours >= 0 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60;
}

int Time::calcSeconds()
{
    return hours * 3600 + minutes * 60 + seconds;
}

Time Time::addTime(const Time &t)
{
    Time newTime{0, 0, 0};

    newTime.seconds = seconds + t.seconds;
    if (newTime.seconds >= 60)
    {
        newTime.minutes = newTime.seconds / 60;
        newTime.seconds %= 60;
    }
    newTime.minutes += minutes + t.minutes;
    if (newTime.minutes >= 60)
    {
        newTime.hours = newTime.minutes / 60;
        newTime.minutes %= 60;
    }
    newTime.hours += hours + t.hours;
    return newTime;
}

Time Time::distractTime(Time &t)
{
    Time newTime{ 0, 0, 0 };

    newTime.seconds = calcSeconds() - t.calcSeconds();
    newTime.hours = newTime.seconds / 3600;
    newTime.seconds -= newTime.hours * 3600;
    newTime.minutes = newTime.seconds / 60;
    newTime.seconds -= newTime.minutes * 60;

    return newTime;
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
