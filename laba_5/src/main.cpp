#include "menu.h"

int main() {
    int choice;
    int currentType = 0;
    Array<int>* arrayInt = nullptr;
    Array<double>* arrayDouble = nullptr;
    Array<string>* arrayString = nullptr;

    while (true) {
        cout << "1 - Create Array\n2 - Search in an array\n3 - Exit" << endl;
        cin >> choice;

        if (choice == 1) {
            createArrayMenu(currentType, arrayInt, arrayDouble, arrayString);
        }
        else if (choice == 2) {
            searchArrayMenu(currentType, arrayInt, arrayDouble, arrayString);
        }
        else if (choice == 3) {
            cleanupArrays(arrayInt, arrayDouble, arrayString);
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}