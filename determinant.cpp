#include <iostream>
using namespace std;

int determinant(int **matrix, int n) {
  if (n == 1) {
    return matrix[0][0];
  } else if (n == 2) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
  } else {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int **minor = new int *[n - 1];
      for (int j = 0; j < n - 1; j++) {
        minor[j] = new int[n - 1];
        for (int k = 0; k < n; k++) {
          if (k != i) {
            for (int l = 0; l < n; l++) {
              if (l != i) {
                minor[j][l - 1] = matrix[k][l];
              }
            }
          }
        }
      }
      sum += determinant(minor, n - 1) * matrix[0][i] * (-1) ^ i;
    }
    return sum;
  }
}

int main() {
  int n;
  cin >> n;
  int **matrix = new int *[n];
  for (int i = 0; i < n; i++) {
    matrix[i] = new int[n];
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }
  cout << determinant(matrix, n) << endl;
  return 0;
}
