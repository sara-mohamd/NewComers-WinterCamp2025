#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b);
int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int t;
  cin >> t;

  while (t--)
  {
    long long sum = 0;
    int n, x = 0, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      sum += a;
      x = GCD(a, x);
    }
    cout << sum << ' ' << x << endl;
  }
}

int GCD(int a, int b)
{
  while (b != 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}