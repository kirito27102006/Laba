#include <iostream>
#include <string>
#include "Array.h"

void createArrayMenu(int& currentType, Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<std::string>*& arrayString);
void searchArrayMenu(int currentType, Array<int>* arrayInt, Array<double>* arrayDouble, Array<std::string>* arrayString);
void cleanupArrays(Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<std::string>*& arrayString);
