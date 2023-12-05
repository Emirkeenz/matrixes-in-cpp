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
  
  int sum = 0;
  int count = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] < 0 && arr[i][j] % 2 == 0)
      {
        sum += arr[i][j];
        count++;
      }
    }
  }
  cout << count << " " << sum;
  return 0;
}