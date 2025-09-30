#include "menu.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    Fakultet fakultet;
    Student student;
    while (true) {
        std::cout << "1 - Добавить студента\n2 - Вывести информацию о студенте\n3 - Выйти" << std::endl;
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
            std::cout << "Некорректный ввод!" << std::endl;
        }
    }
}