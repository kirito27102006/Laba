#include "Array.h"

template <class T>
Array<T>::Array(int size) {
    this->size = size;
    this->array = new T[size];
}

template <class T>
Array<T>::~Array() {
    delete[] array;
}

template <class T>
void Array<T>::createArray() {
    cout << "Fill the array:" << endl;
    for (int i = 0; i < this->size; i++) {
        cin >> array[i];
    }
}

template <class T>
int Array<T>::searchInArray() {
    T key;
    int index = -1;
    cout << "Enter key:" << endl;
    cin >> key;
    for (int i = 0; i < this->size; i++) {
        if (this->array[i] == key) {
            index = i;
            break;
        }
    }
    return index;
}

template class Array<int>;
template class Array<double>;
template class Array<string>;
