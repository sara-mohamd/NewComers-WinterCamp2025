#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, a;
  cin >> n >> k;
  long long pref[n + 1];
  pref[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    cin >> a;
    pref[i] = pref[i - 1] + a;
  }
  int min = INT_MAX, idx = 0;
  for (int i = 1; i <= n && k <= n; i++)
  {
    if (pref[k] - pref[i - 1] < min)
    {
      idx = i;
      min = pref[k] - pref[i - 1];
    }
    k++;
  }
  cout << idx << endl;
}