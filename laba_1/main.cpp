#include "Object.h"

using namespace std;

int Object::numberOfObjects = 0;

int main() {
  int choice;
  Object* currentObject = nullptr;

  while (true) {
    currentObject->printMenu();
    cin >> choice;

    if (choice == 1) {
      currentObject->createObject(currentObject);
    } else if (choice == 2) {
      currentObject->handlePrintSerialNumber(currentObject);
    } else if (choice == 3) {
      currentObject->exit(currentObject);
      return 0;
    }
  }
}
