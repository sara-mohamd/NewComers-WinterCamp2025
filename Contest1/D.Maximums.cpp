#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ans = 0;
  cin >> n;
  int b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++)
  {
    int x = max(x, ans);
    ans = x + b[i];
    cout << ans << " ";
  }
  //
}
