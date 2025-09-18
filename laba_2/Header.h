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
  friend std::ostream& operator<<(std::ostream& os, const Matrix& mat) {
      for (int i = 0; i < mat.lines; i++) {
          for (int j = 0; j < mat.columns; j++) {
              os << mat.matrix[i][j] << " ";
          }
          os << "\n";
      }
      return os;
  }
  friend std::istream& operator>>(std::istream& is, const Matrix& mat) {
          std::cout << "¬ведите элементы матрицы " << mat.lines << "x" << mat.columns << ":\n";
          for (int i = 0; i < mat.lines; i++) {
              for (int j = 0; j < mat.columns; j++) {
                  is >> mat.matrix[i][j];
              }
          }
          return is;
      }
};
