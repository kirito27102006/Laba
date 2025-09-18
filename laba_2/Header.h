#include <iostream>

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
  friend std::ostream& operator<<(std::ostream& os, const Matrix& mat);
  friend std::istream& operator>>(std::istream& is, const Matrix& mat);
};
