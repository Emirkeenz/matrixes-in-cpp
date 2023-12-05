#include <iostream>
using namespace std;

int main() {
  int rows, col;
  cin >> rows >> col;
  int arr[rows][col];

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << "\n";
  }
  return 0;
}