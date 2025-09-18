#include "Header.h"

Matrix::Matrix(int lines, int columns) {
  if (lines > 0 && columns > 0) {
    this->lines = lines;
    this->columns = columns;
    matrix = new double*[lines];
    for (int i = 0; i < lines; i++) {
      matrix[i] = new double[columns]();
    }
  }
}

Matrix::~Matrix() {
  if (matrix != nullptr) {
    for (int i = 0; i < lines; i++) {
      delete[] matrix[i];
    }
    delete[] matrix;
  }
}

Matrix::Matrix(const Matrix& other)
    : lines(other.lines), columns(other.columns) {
  if (lines > 0 && columns > 0) {
    matrix = new double*[lines];
    for (int i = 0; i < lines; i++) {
      matrix[i] = new double[columns];
      for (int j = 0; j < columns; j++) {
        matrix[i][j] = other.matrix[i][j];
      }
    }
  }
}

Matrix operator+(const Matrix& first, const Matrix& second) {
  Matrix temp(first.lines, first.columns);
  for (int i = 0; i < first.lines; i++) {
    for (int j = 0; j < first.columns; j++) {
      temp.matrix[i][j] = first.matrix[i][j] + second.matrix[i][j];
    }
  }
  return temp;
}

ostream& operator<<(ostream& os, const Matrix& mat) {
  for (int i = 0; i < mat.lines; i++) {
    for (int j = 0; j < mat.columns; j++) {
      os << mat.matrix[i][j] << " ";
    }
    os << "\n";
  }
  return os;
}

istream& operator>>(istream& is, const Matrix& mat) {
  cout << "¬ведите элементы матрицы " << ":\n";
  for (int i = 0; i < mat.lines; i++) {
    for (int j = 0; j < mat.columns; j++) {
      is >> mat.matrix[i][j];
    }
  }
  return is;
}
