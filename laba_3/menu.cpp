#include "menu.h"

void printInfo(Fakultet* fakultet) {
    fakultet->info();
}

void addStudent(Fakultet& fakultet, Student& student) {
    int year;
    double point;
    string nameFakultet;
    string name;
    cout << "������� ���������: ";
    getline(cin, nameFakultet);
    fakultet.setNameFakultet(nameFakultet);
    cout << "��� ��������: ";
    getline(cin, name);
    student.setName(name);
    cout << "������� ��� �������� ��������: ";
    cin >> year;
    student.setYearOfBirth(year);
    cout << "������� ������� ���� �� ��������� ������: ";
    cin >> point;
    student.setPoint(point);
}