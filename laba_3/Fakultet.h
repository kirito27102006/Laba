#include <iostream>
#include <string>

class Fakultet {
private:
    std::string nameFakultet;
public:
    Fakultet();
    std::string getNameFakultet();
    void setNameFakultet(std::string const& nameOfFakultet);
    virtual void info();
};


