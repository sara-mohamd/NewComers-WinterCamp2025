#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, i = 0;
  string s, ans;
  cin >> n >> s;
  while (n)
  {
    if (n % 2 == 0)
    {
      ans = s[i] + ans;
    }

    if (n % 2 != 0)
    {
      ans = ans + s[i];
    }
    n--;
    i++;
  }
  cout << ans << endl;
}