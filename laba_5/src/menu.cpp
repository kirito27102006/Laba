#include "menu.h"

void createArrayMenu(int& currentType, Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<std::string>*& arrayString) {
    int typeChoice;
    int size;

    std::cout << "Select data type:\n1 - int\n2 - double\n3 - string" << std::endl;
    std::cin >> typeChoice;
    std::cout << "Enter the array size:" << std::endl;
    std::cin >> size;
    cleanupArrays(arrayInt, arrayDouble, arrayString);

    if (typeChoice == 1) {
        arrayInt = new Array<int>(size);
        currentType = 1;
        std::cout << "Created int array. Enter integer values:" << std::endl;
        arrayInt->createArray();
    }
    else if (typeChoice == 2) {
        arrayDouble = new Array<double>(size);
        currentType = 2;
        std::cout << "Created double array. Enter double values:" << std::endl;
        arrayDouble->createArray();
    }
    else if (typeChoice == 3) {
        arrayString = new Array<std::string>(size);
        currentType = 3;
        std::cout << "Created string array. Enter string values:" << std::endl;
        std::cin.ignore();
        arrayString->createArray();
    }
    else {
        std::cout << "Invalid type selection!" << std::endl;
        currentType = 0;
    }
}

void searchArrayMenu(int currentType, Array<int>* arrayInt, Array<double>* arrayDouble, Array<std::string>* arrayString) {
    if (currentType == 0) {
        std::cout << "Please create an array first!" << std::endl;
        return;
    }

    int index = -1;

    if (currentType == 1 && arrayInt != nullptr) {
        index = arrayInt->searchInArray();
    }
    else if (currentType == 2 && arrayDouble != nullptr) {
        index = arrayDouble->searchInArray();
    }
    else if (currentType == 3 && arrayString != nullptr) {
        std::cin.ignore();
        index = arrayString->searchInArray();
    }

    if (index != -1) {
        std::cout << "Match index: " << index << std::endl;
    }
    else {
        std::cout << "Element not found" << std::endl;
    }
}

void cleanupArrays(Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<std::string>*& arrayString) {
    delete arrayInt;
    delete arrayDouble;
    delete arrayString;
    arrayInt = nullptr;
    arrayDouble = nullptr;
    arrayString = nullptr;
}