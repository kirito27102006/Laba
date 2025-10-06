#include "Student.h"

Student::Student() {
	this->name = "UNDEFIND";
	this->yearOfBirth = 0;
	this->point = 0;
}
std::string Student::getName() const { 
	return this->name;
}
void Student::setName(std::string fio) { 
	this->name = fio; 
}
int Student::getYearOfBirth() const { 
	return this->yearOfBirth;
}
void Student::setYearOfBirth(int yearBirth) { 
	this->yearOfBirth = yearBirth; 
}
double Student::getPoint() const { 
	return this->point; 
}
void Student::setPoint(double pointOfSemestr) { 
	this->point = pointOfSemestr; 
}
void Student::info() {
	std::cout << "ФИО: " << getName() << std::endl;
	std::cout << "Год рождения: " << getYearOfBirth() << std::endl;
	std::cout << "Средний балл: " << getPoint() << std::endl;
}