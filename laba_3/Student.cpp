#include "Student.h"

Student::Student() :name("UNDEFIND"), yearOfBirth(0), point(0) {
}
string Student::getName() {
    return this->name;
}
void Student::setName(string name) {
    this->name = name;
}
int Student::getYearOfBirth() {
    return this->yearOfBirth;
}
void Student::setYearOfBirth(int yearOfBirth) {
    this->yearOfBirth = yearOfBirth;
}
double Student::getPoint() {
    return this->point;
}
void Student::setPoint(double point) {
    this->point = point;
}
void Student::info() {
    cout << "ФИО: " << getName() << endl;
    cout << "Год рождения: " << getYearOfBirth() << endl;
    cout << "Средний балл: " << getPoint() << endl;
}