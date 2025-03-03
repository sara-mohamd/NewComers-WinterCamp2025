#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    long long sum = 0;
    cin >> n >> m;
    int a[n] = {0};
    long long idx = n, x = INT_MAX, ans = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (sum > m)
        continue;
      sum += a[i];
      idx = i + 1;
      if (sum == m)
      {
        cout << m << endl;
        goto end;
      }
    }
    for (int i = 0; i < idx; i++)
    {
      if ((m - (sum - a[i])) < x)
      {
        ans = (sum - a[i]);
        x = (m - (sum - a[i]));
      }
    }
    cout << ans << endl;
  end:;
  }
}