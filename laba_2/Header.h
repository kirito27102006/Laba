#include <iostream>

using namespace std;

class Matrix {
 private:
  int lines = 0;
  int columns = 0;
  double** matrix = nullptr;

 public:
  Matrix(int lines, int columns);
  ~Matrix();
  Matrix(const Matrix& other);
  friend Matrix operator+(const Matrix& first, const Matrix& second);
  friend ostream& operator<<(ostream& os, const Matrix& mat);
  friend istream& operator>>(istream& is, const Matrix& mat);
};
