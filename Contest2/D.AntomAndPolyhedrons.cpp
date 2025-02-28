#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ans = 0;
  cin >> n;

  string a[n];
  for (size_t i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == "Tetrahedron")
      ans += 4;
    else if (a[i] == "Cube")
      ans += 6;
    else if (a[i] == "Octahedron")
      ans += 8;
    else if (a[i] == "Dodecahedron")
      ans += 12;
    else if (a[i] == "Icosahedron")
      ans += 20;
  }

  cout << ans << endl;
}
