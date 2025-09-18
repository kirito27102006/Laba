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



