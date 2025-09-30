#include "Fakultet.h"

Fakultet::Fakultet() {
    this->nameFakultet = "UNDEFIND";
}
std::string Fakultet::getNameFakultet() {
    return this->nameFakultet;
}
void Fakultet::setNameFakultet(std::string const& nameOfFakultet) {
    this->nameFakultet = nameOfFakultet;
}
void Fakultet::info() {
    std::cout << "Факультет: " << getNameFakultet() << std::endl;
}