#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, k;
  double a;
  cin >> n >> k >> a;
  double r1 = (n * k) / a;
  long long r2 = r1;

  if (r1 - r2 > 0)
    cout << "double" << endl;
  else if (r2 <= 2147483647)
    cout << "int\n";
  else
    cout << "long long\n";
  return 0;
}
