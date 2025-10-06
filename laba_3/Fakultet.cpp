#include "Fakultet.h"

Fakultet::Fakultet() = default;
std::string Fakultet::getNameFakultet() const { 
	return this->nameFakultet; 
}
void Fakultet::setNameFakultet(std::string const& nameOfFakultet) {
	this->nameFakultet = nameOfFakultet;
}
void Fakultet::info() const {
	std::cout << "Факультет: " << getNameFakultet() << std::endl;
}
