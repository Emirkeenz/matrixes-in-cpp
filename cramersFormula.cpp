#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double arr[2][3];
  double x1, x2;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  double determinant = (double)arr[0][0]*arr[1][1]-(double)arr[0][1]*arr[1][0];

  if (determinant == 0) {
    return 1;
  }

  x1 = (double)((arr[0][2]*arr[1][1] - arr[0][1]*arr[1][2])/determinant);
  x2 = (double)((arr[1][2]*arr[0][0] - arr[1][0]*arr[0][2])/determinant);

  cout << fixed << setprecision(3) << x1 << "\n" << fixed << setprecision(3) << x2;

  return 0;
}