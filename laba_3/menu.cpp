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
    std::cout << "������� ���������: ";
    std::cin.ignore();
    getline(std::cin, nameFakultet);
    fakultet.setNameFakultet(nameFakultet);
    std::cout << "��� ��������: ";
    getline(std::cin, name);
    student.setName(name);
    std::cout << "������� ��� �������� ��������: ";
    std::cin >> year;
    student.setYearOfBirth(year);
    std::cout << "������� ������� ���� �� ��������� ������: ";
    std::cin >> point;
    student.setPoint(point);
}