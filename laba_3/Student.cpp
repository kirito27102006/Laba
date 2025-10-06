#include "Student.h"

Student::Student() = default;
std::string Student::getName() const { 
	return this->name;
}
void Student::setName(std::string const& fio) { 
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
void Student::info() const{
	std::cout << "ФИО: " << getName() << std::endl;
	std::cout << "Год рождения: " << getYearOfBirth() << std::endl;
	std::cout << "Средний балл: " << getPoint() << std::endl;
}