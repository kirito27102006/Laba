#include "menu.h"

int main() {
    int choice;
    int currentType = 0;
    Array<int>* arrayInt = nullptr;
    Array<double>* arrayDouble = nullptr;
    Array<std::string>* arrayString = nullptr;

    while (true) {
        std::cout << "1 - Create Array\n2 - Search in an array\n3 - Exit" << std::endl;
        std::cin >> choice;

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
            std::cout << "Invalid choice!" << std::endl;
        }
    }
    return 0;
}