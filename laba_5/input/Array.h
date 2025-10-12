#include <iostream>
#include <string>

template <class T>
class Array {
private:
    int size;
    T* array;
public:
    explicit Array(int size);
    ~Array();
    void createArray();
    int searchInArray();
    Array(const Array& other) = delete;
    Array& operator=(const Array& other) = delete;
};

template <class T>
Array<T>::Array(int size) : size(size), array(new T[size]) {
}

template <class T>
Array<T>::~Array() {
    delete[] array;
}

template <class T>
void Array<T>::createArray() {
    std::cout << "Fill the array:" << std::endl;
    for (int i = 0; i < this->size; i++) {
        std::cin >> array[i];
    }
}

template <class T>
int Array<T>::searchInArray() {
    T key;
    int index = -1;
    std::cout << "Enter key:" << std::endl;
    std::cin >> key;
    for (int i = 0; i < this->size; i++) {
        if (this->array[i] == key) {
            index = i;
            break;
        }
    }
    return index;
}