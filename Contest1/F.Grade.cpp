#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int a[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      int mn = min(m - a[0], a[i]);
      a[0] += mn;
    }
    cout << a[0] << endl;
  }
}