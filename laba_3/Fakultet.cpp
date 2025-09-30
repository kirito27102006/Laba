#include "Fakultet.h"

Fakultet::Fakultet():nameFakultet("UNDEFIND") {
}
string Fakultet::getNameFakultet() {
    return this->nameFakultet;
}
void Fakultet::setNameFakultet(string nameFakultet) {
    this->nameFakultet = nameFakultet;
}
void Fakultet::info() {
    cout << "Факультет: " << getNameFakultet() << endl;
}