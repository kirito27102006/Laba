#include "menu.h"
#include <iostream>
#include <string>

void printInfo(const Fakultet* fakultet) {
    fakultet->info();
}

void addStudent(Fakultet& fakultet, Student& student) {
    int year;
    double point;
    std::string nameFakultet;
    std::string name;
    std::cout << "Введите факультет: ";
    std::cin.ignore();
    getline(std::cin, nameFakultet);
    fakultet.setNameFakultet(nameFakultet);
    std::cout << "ФИО студента: ";
    getline(std::cin, name);
    student.setName(name);
    std::cout << "Введите год рождения студента: ";
    std::cin >> year;
    student.setYearOfBirth(year);
    std::cout << "Введите средний балл за последнюю сессию: ";
    std::cin >> point;
    student.setPoint(point);
}