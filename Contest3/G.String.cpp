#include <bits/stdc++.h>
using namespace std;
bool isValid(string mi, string mx)
{
  return mx.substr(0, mi.length()) == mi;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    string max_str = (s1.length() > s2.length()) ? s1 : s2;
    string min_str = (s1.length() > s2.length()) ? s2 : s1;
    if (max_str.length() % 2 == 0 && min_str.length() % 2 == 0)
    {
      if (isValid(min_str, max_str))
      {
        cout << max_str << endl;
        continue;
      }
      else
      {
        cout << -1 << endl;
      }
    }
    else
    {
      if (isValid(min_str, max_str))
      {
        for (int i = 0; i < max_str.length(); i++)
        {
          cout << min_str;
        }
        cout << endl;
      }
      else
      {
        cout << -1 << endl;
      }
    }
  }
}