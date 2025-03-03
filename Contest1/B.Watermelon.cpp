#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  double result = double(n) / 3;
  cout << result << endl;
  if (n / 3 == result && (n / 3) % 2 != 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}