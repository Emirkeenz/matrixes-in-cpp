#include <iostream>
using namespace std;

int main() {
  int n, n1, m, q;
  cin >> m >> n;
  float arrA[m][n];
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arrA[i][j];
    }
  }

  cin >> n1 >> q;
  if (n!= n1)
  {
    cout << -1;
    return 0;
  }
  n = n1;
  
  float arrB[n][q];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cin >> arrB[i][j];
    }
  }

  float arrC[m][q], sum=0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      sum=0;
      for (int r = 0; r < n; r++)
      {
        sum += arrA[i][r] * arrB[r][j];
      }
      arrC[i][j] = sum;
    }
  }
  cout << m << " " << q << '\n';
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cout << arrC[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}