#include <iostream>

class Class {
 public:
  int serialNumber;
  static int numberOfObjects;

  Class();

  void printSerialNumber() const;
};
