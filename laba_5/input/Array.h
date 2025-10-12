#include <iostream>
#include <string>

using namespace std;

template <class T>
class Array {
private:
    int size;
    T* array;
public:
    Array(int size);
    ~Array();
    void createArray();
    int searchInArray();
};