#pragma once
#include "Fakultet.h"

class Student : public Fakultet {
private:
    std::string name = "UNDEFINED";
    int yearOfBirth = 0;
    double point = 0;

public:
    Student();
    std::string getName() const;
    void setName(const std::string& name);
    int getYearOfBirth() const;
    void setYearOfBirth(int yearOfBirth);
    double getPoint() const;
    void setPoint(double point);
    void info() const override;  
};