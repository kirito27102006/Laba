#include "Matrix.h"

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

int getLines() {
  int lines;
  std::cout << "Введи количество строк: ";
  std::cin >> lines;
  return lines;
}

int getColumns() {
  int columns;
  std::cout << "Введи количество столбцов: ";
  std::cin >> columns;
  return columns;
}

Matrix createMatrix(const std::string& matrixName) {
  std::cout << "Заполнение " << matrixName << " матрицы" << std::endl;
  int lines = getLines();
  int columns = getColumns();
  return Matrix(lines, columns);
}

void fillMatrix(Matrix& matrix) { 
    std::cin >> matrix; 
}

void displayMatrix(const Matrix& matrix, const std::string& message) {
  std::cout << message << std::endl;
  std::cout << matrix;
}
