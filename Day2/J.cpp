#include <bits/stdc++.h>
using namespace std;
string solveOdd(string s, int n)
{
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    if (ans.size() % 2 == 0)
      ans += s[i];
    else
      ans = s[i] + ans;
  }
  return ans;
}
string solveEven(string s, int n)
{
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    if (ans.size() % 2 == 0)
      ans = s[i] + ans;
    else
      ans += s[i];
  }
  return ans;
}
int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n % 2 != 0)
    cout << solveOdd(s, n) << endl;
  else
    cout << solveEven(s, n) << endl;
}