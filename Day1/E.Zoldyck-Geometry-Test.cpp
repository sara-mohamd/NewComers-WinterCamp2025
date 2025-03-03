#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r, s;
  cin >> r >> s;

  if (sqrt(2) * s <= 2 * r)
    cout << "Circle" << endl;
  else if (s >= 2 * r)
    cout << "Square\n";
  else
    cout << "Complex\n";
}