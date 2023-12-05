#include <iostream>
using namespace std;

int main() {
  int n, rows, col;
  cin >> n;
  rows = n; col = n;
  int arr[rows][col];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  int sumOfFirstDiagonal = 0, sumOfSecondDiagonal = 0;
  for (int i = 0; i < rows; i++)
  {
    sumOfFirstDiagonal += arr[i][i];
    sumOfSecondDiagonal += arr[i][n-i-1]; 
  }
  cout << sumOfFirstDiagonal << " " << sumOfSecondDiagonal;
  return 0;
}