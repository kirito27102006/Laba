#include "Fakultet.h"

class Student : public Fakultet {
private:
    std::string name;
    int yearOfBirth;
    double point;
public:
    Student();
    std::string getName() const;
    void setName(std::string const& name);
    int getYearOfBirth() const;
    void setYearOfBirth(int yearOfBirth);
    double getPoint() const;
    void setPoint(double point);
    virtual void info() override;
}; 
