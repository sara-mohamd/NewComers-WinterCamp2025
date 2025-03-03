#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, flag;
  cin >> s >> flag;
  int it = s.find('|');
  string s1 = s.substr(0, it), s2 = s.substr(it + 1);

  for (size_t i = 0; i < flag.size(); i++)
  {
    if (s1.size() <= s2.size())
      s1 += flag[i];
    else
      s2 += flag[i];
  }
  if (s1.size() == s2.size())
    cout << s1 << "|" << s2 << endl;
  else
    cout << "Impossible\n";
}