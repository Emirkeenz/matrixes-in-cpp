#include <iostream>
using namespace std;

int main() {
  int n, m, sum = 0;
  cin >> n >> m;
  int prices[n][m];
  int available[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> prices[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> available[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (available[i][j] == 1)
      {
        sum += prices[i][j];
      }
    }
  }
  cout << sum;
  return 0;
}