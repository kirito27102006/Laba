#pragma once
#include "Student.h"


class MyException  : public std::exception  {
private:
    std::string message;
public:
    explicit MyException(const std::string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

void printInfo(const Fakultet* fakultet);
void addStudent(Fakultet& fakultet, Student& student);
bool isRussianCP1251(const std::string& str);