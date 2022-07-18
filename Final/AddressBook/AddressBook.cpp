#include "AddressBook.h"

bool AddressBook::save()
{
    std::ofstream out("Addressbook.txt", std::ios::out | std::ios::app);
    if (!out) {
        std::cout << "Файл открыть невозможно\n";
        return false;
    }

    for (int j = 0; j < n; j++)
    {
        out << book[j]->getData() << std::endl;
    }

    out.close();
    return true;
}

void AddressBook::intro()
{
    int choice;
    char again;
    try
    {
        do
        {
            std::string name;
            std::string lastName;
            std::string fathName;
            std::string phonestr;
            std::cout << "Введите имя: ";
            std::cin >> name;
            std::cout << "Введите фамилию: ";
            std::cin >> lastName;
            std::cout << "Введите отчество: ";
            std::cin >> fathName;
            std::cout << "Введите телефон: ";
            std::cin >> phonestr;

            Phone phone(phonestr);

            std::cout << "\nКого нужно добавить в адресную книгу?\n1. Коллега\n2. Студент\n3. Преподаватель\n(1/2/3): ";
            std::cin >> choice;
            if (choice == 1)
            {
                std::string address;
                std::cout << "Введите адрес: ";
                std::cin.ignore();
                getline(std::cin, address);
                book[n++] = new Colleague(lastName, name, fathName, address, phone);
            }
            else if (choice == 2)
                book[n++] = new Student(lastName, name, fathName, phone);
            else
            {
                std::string title;
                std::cout << "Обращение: ";
                std::cin >> title;
                book[n++] = new Teacher(lastName, name, fathName, title, phone);
            }
            std::cout << "Продолжить (у / n)?";
            std::cin >> again;
        } while (again == 'y');   
    }
    catch (Phone::InvalidPhoneNumber error)
    {
        error.printMessage();
    }
}

void AddressBook::showBook()
{
    for (int j = 0; j < n; j++)
    {
        std::cout << book[j]->getData() << std::endl;
    }
}

AddressBook::~AddressBook()
{
    for (int j = 0; j < n; j++)
    {
        delete book[j];
    }
}
