#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k, a;
  cin >> n >> k;
  int ans = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (k % a == 0)
    {
      ans = min(ans, k / a);
    }
  }

  cout << ans << endl;
}