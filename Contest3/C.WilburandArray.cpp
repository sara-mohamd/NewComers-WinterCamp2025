#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int b[n], a[n] = {0};
  for (int i = 0; i < n; i++)
    cin >> b[i];
  a[0] = b[0];
  int stps = 1;
  for (int i = 1; i < n; i++)
  {
    a[i] = a[i - 1];
    if (b[i] == a[i])
      continue;
    else
    {
      if (a[i] - 1 == b[i])
      {
        a[i] -= 1;
        stps++;
      }
      else if (a[i] + 1 == b[i])
      {
        a[i] += 1;
        stps++;
      }
    }
  }
  cout << stps;
}