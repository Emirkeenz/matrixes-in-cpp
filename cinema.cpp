#include <iostream>
using namespace std;

int main() {
  int a, b, res = 1, sim = 0;
  cin >> a >> b;
  int old[a][b], newArr[a][b], count=a;
  for (int i = a-1; i >= 0; i--)
  {
    for (int j = 0; j < b; j++)
    {
      old[i][j]=res;
      res++;
    }
  }
  for (int i = 0; i < a; i++)
  {
    int newOne = count;
    for (int j = 0; j < b; j++)
    {
      newArr[i][j] = newOne;
      if (newArr[i][j] == old[i][j])
      {
        sim++;
      }
      newOne += a;
    }
    count--;
  }
  
  cout << sim;
  return 0;
}