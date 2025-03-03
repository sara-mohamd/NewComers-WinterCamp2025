#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long sum = 0, n;
    cin >> n;
    sum = n * (n + 1) / 2;
    for (int i = 1; i <= n; i = i * 2)
    {
      sum -= (2 * i);
    }
    cout << sum << endl;
  }
}