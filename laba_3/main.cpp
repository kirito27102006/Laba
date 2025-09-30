#include "menu.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    Fakultet fakultet;
    Student student;
    while (true) {
        cout << "1 - Добавить студента\n2 - Вывести информацию о студенте\n3 - Выйти" << endl;
        cin >> choice;
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
            cout << "Некорректный ввод!" << endl;
        }
    }
}