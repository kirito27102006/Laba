#include <Windows.h>  
#include <iostream>
#include "menu.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choice;
    Fakultet fakultet;
    Student student;

    while (true) {
        std::cout << "1 - �������� ��������\n2 - ������� ���������� � ��������\n3 - �����"
            << std::endl;
        std::cin >> choice;

        if (choice == 1) {
            addStudent(fakultet, student);
        }
        else if (choice == 2) {
            printInfo(&fakultet);
            printInfo(&student);
        }
        else if (choice == 3) {
            return 0;
        }
        else {
            std::cout << "������������ ����!" << std::endl;
        }
    }
}