#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long arr2[n + 1], pref[n + 1], pref2[n + 1];
  pref[0] = 0, arr2[0] = 0, pref2[0] = 0;
  for (long long i = 1; i <= n; i++)
  {
    cin >> arr2[i];
    pref[i] = pref[i - 1] + arr2[i];
  }
  sort(arr2, arr2 + n + 1);

  for (int i = 1; i <= n + 1; i++)
  {
    pref2[i] = pref2[i - 1] + arr2[i];
  }
  int m;
  cin >> m;
  while (m--)
  {
    int type, l, r;
    cin >> type >> l >> r;
    if (type == 1)
    {
      cout << pref[r] - pref[l - 1] << endl;
    }
    else
      cout << pref2[r] - pref2[l - 1] << endl;
  }
}