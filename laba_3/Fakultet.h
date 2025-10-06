#include <iostream>
#include <string>

class Fakultet {
private:
	std::string nameFakultet = "UNDEFIND";

public:
	Fakultet();
	std::string getNameFakultet() const;
	void setNameFakultet(std::string nameOfFakultet);
	void info();
};
