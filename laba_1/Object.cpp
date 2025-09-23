#include "Object.h"

using namespace std;

Object::Object() {
  numberOfObjects++;
  serialNumber = numberOfObjects;
}

void Object::printSerialNumber() const {
  cout << "Serial number is " << serialNumber << endl;
}

void Object::printMenu() {
  cout << "1 - Create object\n2 - Print serial number\n3 - Exit" << endl;
}

void Object::createObject(Object*& currentObject) {
  delete currentObject;
  currentObject = new Object();
}

void Object::handlePrintSerialNumber(Object* currentObject) {
  if (currentObject != nullptr) {
    currentObject->printSerialNumber();
  } else {
    cout << "No objects created yet!" << endl;
  }
}

void Object::exit(Object*& currentObject) {
  if (currentObject != nullptr) {
    delete currentObject;
    currentObject = nullptr;
  }
}
