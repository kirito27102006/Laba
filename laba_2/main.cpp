#include "Header.h"

using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");
  int choice;
  int lines;
  int columns;
  while (true) {
    cout << "1 - ������� �������\n2 - �����\n";
    cin >> choice;
    if (choice == 1) {
      cout << "���������� ������ �������" << endl;
      cout << "����� ���������� �����: ";
      cin >> lines;
      cout << "\n����� ���������� ��������: ";
      cin >> columns;
      Matrix firstMatrix(lines, columns);
      cin >> firstMatrix;
      cout << "���� �������: " << endl;
      cout << firstMatrix;
      cout << "���������� ������ �������" << endl;
      Matrix secondMatrix(firstMatrix);
      cin >> secondMatrix;
      cout << "���� �������: " << endl;
      cout << secondMatrix;
      cout << "��������� �������� ������: " << endl;
      Matrix finalMatrix = firstMatrix + secondMatrix;
      cout << finalMatrix;
    } else if (choice == 2) {
      return 0;
    }
  }
}
