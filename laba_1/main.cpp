#include "Header.h"

using namespace std;

int Class::numberOfObjects = 0;

int main() {
  int choice;
  Class* currentObject = nullptr;

  while (true) {
    cout << "1 - Create object\n2 - Print serial number\n3 - Exit" << endl;
    cin >> choice;

    if (choice == 1) {
      delete currentObject;
      currentObject = new Class();
    } else if (choice == 2) {
      if (currentObject != nullptr) {
        currentObject->printSerialNumber();
      } else {
        cout << "No objects created yet!" << endl;
      }
    } else if (choice == 3) {
      if (currentObject != nullptr) {
        delete currentObject;
      }
      return 0;
    }
  }
}
