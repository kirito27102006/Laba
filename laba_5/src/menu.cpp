#include "menu.h"

void createArrayMenu(int& currentType, Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<string>*& arrayString) {
    int typeChoice;
    int size;

    cout << "Select data type:\n1 - int\n2 - double\n3 - string" << endl;
    cin >> typeChoice;
    cout << "Enter the array size:" << endl;
    cin >> size;
    cleanupArrays(arrayInt, arrayDouble, arrayString);

    if (typeChoice == 1) {
        arrayInt = new Array<int>(size);
        currentType = 1;
        cout << "Created int array. Enter integer values:" << endl;
        arrayInt->createArray();
    }
    else if (typeChoice == 2) {
        arrayDouble = new Array<double>(size);
        currentType = 2;
        cout << "Created double array. Enter double values:" << endl;
        arrayDouble->createArray();
    }
    else if (typeChoice == 3) {
        arrayString = new Array<string>(size);
        currentType = 3;
        cout << "Created string array. Enter string values:" << endl;
        cin.ignore();
        arrayString->createArray();
    }
    else {
        cout << "Invalid type selection!" << endl;
        currentType = 0;
    }
}

void searchArrayMenu(int currentType, Array<int>* arrayInt, Array<double>* arrayDouble, Array<string>* arrayString) {
    if (currentType == 0) {
        cout << "Please create an array first!" << endl;
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
        cin.ignore();
        index = arrayString->searchInArray();
    }

    if (index != -1) {
        cout << "Match index: " << index << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
}

void cleanupArrays(Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<string>*& arrayString) {
    delete arrayInt;
    delete arrayDouble;
    delete arrayString;
    arrayInt = nullptr;
    arrayDouble = nullptr;
    arrayString = nullptr;
}