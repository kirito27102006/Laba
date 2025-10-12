#include "Array.h"
#include <iostream>

using namespace std;

void createArrayMenu(int& currentType, Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<string>*& arrayString);
void searchArrayMenu(int currentType, Array<int>* arrayInt, Array<double>* arrayDouble, Array<string>* arrayString);
void cleanupArrays(Array<int>*& arrayInt, Array<double>*& arrayDouble, Array<string>*& arrayString);
