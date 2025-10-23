#include "Fakultet.h"

Fakultet::Fakultet() = default;

std::string Fakultet::getNameFakultet() const {
    return this->nameFakultet;
}

void Fakultet::setNameFakultet(std::string_view nameOfFakultet) {
    this->nameFakultet = nameOfFakultet;
}

void Fakultet::info() const {
    std::cout << "Факультет: " << getNameFakultet() << std::endl;
}