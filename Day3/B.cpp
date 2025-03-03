#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  long long mi, mx, m, product = 1;
  cin >> mi >> mx >> m;

  for (int i = mi; i <= mx; i++)
    product = (product * i) % m;
  cout << product % m << endl;
}