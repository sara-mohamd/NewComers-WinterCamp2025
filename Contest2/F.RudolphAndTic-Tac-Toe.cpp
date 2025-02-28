#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    char a[3][3];
    for (size_t i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
        cin >> a[i][j];
    }
    bool flag = 1;
    // Check diagonals
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.')
    {
      cout << a[0][0] << endl;
      flag = 0;
      continue;
    }
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '.')
    {
      cout << a[0][2] << endl;
      flag = 0;
      continue;
    }

    for (int j = 0; j < 3; j++)
    {
      if (a[0][j] == a[1][j] && a[1][j] == a[2][j] && a[0][j] != '.')
      {
        cout << a[0][j] << endl;
        flag = 0;
        break;
      }
    }

    for (int i = 0; i < 3; i++)
    {
      if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '.')
      {
        cout << a[i][0] << endl;
        flag = 0;
      }
    }
    if (flag)
      cout << "DRAW" << endl;
  }
}
