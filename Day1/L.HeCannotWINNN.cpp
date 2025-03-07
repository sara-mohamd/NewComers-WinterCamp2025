#include <bits/stdc++.h>
using namespace std;

int main()
{
  int l, r, ctr = 0;

  cin >> l >> r;

  if (l <= 6 && r >= 6)
    ctr++;
  if (l <= 28 && r >= 28)
    ctr++;
  if (l <= 496 && r >= 496)
    ctr++;
  if (l <= 8128 && r >= 8128)
    ctr++;

  cout << ctr << endl;
}