#include "Fakultet.h"

Fakultet::Fakultet() {
}
std::string Fakultet::getNameFakultet() const { 
	return this->nameFakultet; 
}
void Fakultet::setNameFakultet(std::string nameOfFakultet) {
	this->nameFakultet = nameOfFakultet;
}
void Fakultet::info() {
	std::cout << "Факультет: " << getNameFakultet() << std::endl;
}
