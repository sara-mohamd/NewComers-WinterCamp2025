#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, black = 0, ans = INT_MAX;

    char c;
    cin >> n >> k;
    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
      cin >> c;
      pref[i] = pref[i - 1] + (c == 'W');
    }

    for (int i = 0; i + k <= n; i++)
      ans = min(ans, pref[k + i] - pref[i]);

    cout << ans << endl;
  }
}
