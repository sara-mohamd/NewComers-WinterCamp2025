#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  long long ctr = 0;
  cin >> n;
  if (n % 2 != 0 || n == 10)
  {
    cout << ctr << endl;
    return 0;
  }
  if (n >= 25)
  {
    ctr += (n / 25);
    n %= 25;
  }
  if (n >= 10)
  {
    ctr += (n / 10);
    n %= 10;
  }
  if (n >= 5)
  {
    ctr += (n / 5);
    n %= 5;
  }
  if (n >= 1)
    ctr += n;
  cout << ctr << endl;
}