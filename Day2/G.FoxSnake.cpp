#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  char arr[n + 6][m + 6];
  int ok = 1;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (i % 2 != 0)
      {
        arr[i][j] = '#';
      }

      if (i % 2 == 0)
      {
        arr[i][j] = '.';
      }
    }
    if (i % 2 == 0)
    {
      if (ok)
      {
        arr[i][m] = '#';
        ok = 0;
      }
      else
      {
        arr[i][1] = '#';
        ok = 1;
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }

  return 0;
}