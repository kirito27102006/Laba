#include "Header.h"

using namespace std;

Class::Class() {
  numberOfObjects++;
  serialNumber = numberOfObjects;
}

void Class ::printSerialNumber() const {
  cout << "Serial number is " << serialNumber << endl;
}
