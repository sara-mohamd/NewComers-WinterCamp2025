#include <bits/stdc++.h>
using namespace std;
int main()
{
  int r, c;
  cin >> r >> c;
  long long ans = 0;
  char cc;
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    {
      cin >> cc;
      if (cc == 'x')
        ans++;
    }
  cout << ans << endl;
}