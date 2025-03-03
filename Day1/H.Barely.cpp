#include <bits/stdc++.h>
using namespace std;
bool valid(int n, int ones)
{
  int ctr = 0;
  while (n != 0)
  {
    if (n % 2 != 0)
      ctr++;
    n /= 2;
  }
  return ctr == ones;
}
int main()
{
  int n, k;
  cin >> n >> k;
  while (n != 0)
  {
    if (valid(n, k))
    {
      cout << "YES" << endl;
      return 0;
    }
    n--;
  }
  cout << "Bad Luck" << endl;
}