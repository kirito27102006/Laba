#include <iostream>

class Object {
 public:
  int serialNumber;
  static int numberOfObjects;

  Object();
  void printSerialNumber() const;
  void printMenu();
  void createObject(Object*& currentObject);
  void handlePrintSerialNumber(Object* currentObject);
  void exit(Object*& currentObject);
};
