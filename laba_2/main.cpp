#include "Matrix.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int choice;
  while (true) {
    cout << "1 - Сложить матрицы\n2 - Выход\n";
    cin >> choice;
    if (choice == 1) {
      Matrix firstMatrix = createMatrix("первой");
      fillMatrix(firstMatrix);
      displayMatrix(firstMatrix, "Ваша матрица: ");
      Matrix secondMatrix = createMatrixWithSize("второй", firstMatrix.getLines(), firstMatrix.getColumns());
      fillMatrix(secondMatrix); 
      displayMatrix(secondMatrix, "Ваша матрица:");
      cout << "Результат сложения матриц: " << endl;
      Matrix finalMatrix = firstMatrix + secondMatrix;
      cout << finalMatrix;
    } else if (choice == 2) {
      return 0;
    }
  }
}
