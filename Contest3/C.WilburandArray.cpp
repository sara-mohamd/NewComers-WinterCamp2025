#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, ctr = 0;
  cin >> n;
  vector<long long> a(n + 1, 0),
      pref(n + 1, 0);
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
    pref[i] = pref[i - 1];
    if (pref[i] > a[i])
    {
      ctr += abs(a[i] - pref[i]);
      pref[i] -= (pref[i] - a[i]);
    }
    if (pref[i] < a[i])
    {
      ctr += abs(a[i] - pref[i]);
      pref[i] += (a[i] - pref[i]);
    }
    if (pref[i] == a[i])
      continue;
  }
  cout << ctr << endl;
  return 0;
}