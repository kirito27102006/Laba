#include <iostream>
#include <string>

using namespace std;

class Fakultet {
private:
    string nameFakultet;
public:
    Fakultet();
    string getNameFakultet();
    void setNameFakultet(string nameFakultet);
    virtual void info();
};


