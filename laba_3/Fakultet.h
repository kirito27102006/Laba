#pragma once
#include <iostream>
#include <string>

class Fakultet {
private:
    std::string nameFakultet = "UNDEFINED";

public:
    Fakultet();
    std::string getNameFakultet() const;
    void setNameFakultet(std::string_view nameOfFakultet);
    virtual void info() const;
};