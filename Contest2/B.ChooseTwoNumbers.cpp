#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++)
    cin >> b[i];

  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++)
    {
      int ans = a[i] + b[j];
      if (find(a.begin(), a.end(), ans) == a.end() && find(b.begin(), b.end(), ans) == b.end())
      {
        cout << a[i] << " " << b[j] << endl;
        return 0;
      }
    }
  }
}