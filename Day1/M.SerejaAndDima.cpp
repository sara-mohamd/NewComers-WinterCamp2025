#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> v[i];

  // turn = 1 refer to sum1 turn.
  // turn = 0 refer to sum2 turn.
  int sum1 = 0, sum2 = 0, turn = 1, ans = n;

  for (int i = 1; i <= n;)
  {
    if (v[n] > v[i])
    {
      ans = v[n--];
    }
    else
      ans = v[i++];
    if (turn)
    {
      sum1 += ans;
      turn = 0;
    }
    else
    {
      sum2 += ans;
      turn = 1;
    }
  }

  cout << sum1 << ' ' << sum2 << endl;
}