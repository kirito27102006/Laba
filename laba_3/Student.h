#include "Fakultet.h"

class Student : public Fakultet {
private:
    string name;
    int yearOfBirth;
    double point;
public:
    Student();
    string getName();
    void setName(string name);
    int getYearOfBirth();
    void setYearOfBirth(int yearOfBirth);
    double getPoint();
    void setPoint(double point);
    virtual void info() override;
}; 
