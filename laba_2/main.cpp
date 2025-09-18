#include "Header.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int choice;
  int lines;
  int columns;
  while (true) {
    cout << "1 - Сложить матрицы\n2 - Выход\n";
    cin >> choice;
    if (choice == 1) {
      cout << "Заполнение первой матрицы" << endl;
      cout << "Введи количество строк: ";
      cin >> lines;
      cout << "\nВведи количество столбцов: ";
      cin >> columns;
      Matrix firstMatrix(lines, columns);
      cin >> firstMatrix;
      cout << "Ваша матрица: " << endl;
      cout << firstMatrix;
      cout << "Заполнение второй матрицы" << endl;
      Matrix secondMatrix(firstMatrix);
      cin >> secondMatrix;
      cout << "Ваша матрица: " << endl;
      cout << secondMatrix;
      cout << "Результат сложения матриц: " << endl;
      Matrix finalMatrix = firstMatrix + secondMatrix;
      cout << finalMatrix;
    } else if (choice == 2) {
      return 0;
    }
  }
}
