#include <bits/stdc++.h>
using namespace std;
int solve(int num)
{
  int ctr = 0;
  for (int i = 1; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      if (num / i == i)
        ctr++;
      else
        ctr += 2;
    }
  }
  return ctr;
}

int main()
{
  int n, a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    // int value = ;
    if (solve(a) % 2 == 0)
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}