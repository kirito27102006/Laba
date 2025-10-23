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
    std::cout << "¬ведите факультет: ";
    std::cin.ignore();
    getline(std::cin, nameFakultet);
    try
    {
        if (!isRussianCP1251(nameFakultet)) {
            throw "¬вод осуществлЄн не на русском €зыке!!!";
        }
        fakultet.setNameFakultet(nameFakultet);
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
    }
    std::cout << "‘»ќ студента: ";
    getline(std::cin, name);
    try
    {
        if (!isRussianCP1251(name)) {
            throw "¬вод осуществлЄн не на русском €зыке!!!";
        }
        student.setName(name);
    }
    catch (const char* e)
    {
        std::cout << e << std::endl;
    }
    std::cout << "¬ведите год рождени€ студента: ";
    std::cin >> year;
    student.setYearOfBirth(year);
    std::cout << "¬ведите средний балл за последнюю сессию: ";
    std::cin >> point;
    student.setPoint(point);
}

bool isRussianCP1251(const std::string& str) {
    for (unsigned char c : str) {
        if ((c >= 192 && c <= 255) && c != 215 && c != 247) {
            return true;
        }
    }
    return false;
}