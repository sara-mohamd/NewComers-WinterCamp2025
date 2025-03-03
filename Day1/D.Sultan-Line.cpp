#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)) == 0)
    cout << "Yes\n";
  else
    cout << "No\n";
  return 0;
}