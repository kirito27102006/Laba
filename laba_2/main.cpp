#include "Matrix.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int choice;
  while (true) {
    cout << "1 - ������� �������\n2 - �����\n";
    cin >> choice;
    if (choice == 1) {
      Matrix firstMatrix = createMatrix("������");
      fillMatrix(firstMatrix);
      displayMatrix(firstMatrix, "���� �������: ");
      Matrix secondMatrix = createMatrixWithSize("������", firstMatrix.getLines(), firstMatrix.getColumns());
      fillMatrix(secondMatrix); 
      displayMatrix(secondMatrix, "���� �������:");
      cout << "��������� �������� ������: " << endl;
      Matrix finalMatrix = firstMatrix + secondMatrix;
      cout << finalMatrix;
    } else if (choice == 2) {
      return 0;
    }
  }
}
