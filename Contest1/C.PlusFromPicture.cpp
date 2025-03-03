#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r, c;
  cin >> r >> c;
  vector<string> v(r);
  for (int i = 0; i < r; i++)
    cin >> v[i];
  bool flag = 1;
  for (int i = 0; i < r; i++)
  {
    // .********.
    if (v[i].find('*') != string::npos)
    {
      cout << v[i].find('*') << endl;
      // int idx = v[i].find('*');
      // if (v[i + 1][idx] != '*' || v[i + 1][idx - 1] != '*' || v[i + 1][idx + 1] != '*' || v[i + 2][idx + 2] != '*')
      // {
      //   flag = 0;
      //   break;
      // }
      // cout << v[i + 1][idx] << " " << v[i + 1][idx - 1] << " " << v[i + 1][idx + 1] << " " << v[i + 2][idx + 2] << endl;
    }
  }
  if (flag)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
  // string s = "01 3to to";
  // cout << s.find("to") << endl;
}