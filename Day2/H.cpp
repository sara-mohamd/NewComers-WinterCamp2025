#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2, temp;
  int idx = 0, len = 0, ans = 0;
  cin >> s1 >> s2;

  (s1 != s2) ? cout << max(s1.size(), s2.size()) << endl : cout << "-1\n";
}