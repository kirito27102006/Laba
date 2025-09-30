#include "menu.h"

void printInfo(Fakultet* fakultet) {
    fakultet->info();
}

void addStudent(Fakultet& fakultet, Student& student) {
    int year;
    double point;
    string nameFakultet;
    string name;
    cout << "Введите факультет: ";
    getline(cin, nameFakultet);
    fakultet.setNameFakultet(nameFakultet);
    cout << "ФИО студента: ";
    getline(cin, name);
    student.setName(name);
    cout << "Введите год рождения студента: ";
    cin >> year;
    student.setYearOfBirth(year);
    cout << "Введите средний балл за последнюю сессию: ";
    cin >> point;
    student.setPoint(point);
}