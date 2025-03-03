#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  string s, t;
  cin >> s >> t;

  int idx = 0;
  for (int i = 0; i < t.length(); i++)
  {
    if (t[i] == s[idx])
      idx++;
  }

  cout << idx + 1 << endl;
}