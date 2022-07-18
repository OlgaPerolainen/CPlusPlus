#include "AddressBook.h"

bool AddressBook::save()
{
    std::ofstream out("Addressbook.txt", std::ios::out | std::ios::app);
    if (!out) {
        std::cout << "���� ������� ����������\n";
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
            std::cout << "������� ���: ";
            std::cin >> name;
            std::cout << "������� �������: ";
            std::cin >> lastName;
            std::cout << "������� ��������: ";
            std::cin >> fathName;
            std::cout << "������� �������: ";
            std::cin >> phonestr;

            Phone phone(phonestr);

            std::cout << "\n���� ����� �������� � �������� �����?\n1. �������\n2. �������\n3. �������������\n(1/2/3): ";
            std::cin >> choice;
            if (choice == 1)
            {
                std::string address;
                std::cout << "������� �����: ";
                std::cin.ignore();
                getline(std::cin, address);
                book[n++] = new Colleague(lastName, name, fathName, address, phone);
            }
            else if (choice == 2)
                book[n++] = new Student(lastName, name, fathName, phone);
            else
            {
                std::string title;
                std::cout << "���������: ";
                std::cin >> title;
                book[n++] = new Teacher(lastName, name, fathName, title, phone);
            }
            std::cout << "���������� (� / n)?";
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
