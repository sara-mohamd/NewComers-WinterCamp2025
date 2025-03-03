#include <bits/stdc++.h>
using namespace std;

int main()
{
  string pp;
  cin >> pp;

  int ans = 0;
  for (int i = 0; i < pp.length(); i++)
  {
    if (pp[i] == 'D')
    {
      if (pp.substr(i, 5) == "Danil")
      {
        ans++;
        i += 4;
      }
    }
    if (pp[i] == 'O')
    {
      if (pp.substr(i, 4) == "Olya")
      {
        ans++;
        i += 3;
      }
    }
    if (pp[i] == 'S')
    {
      if (pp.substr(i, 5) == "Slava")
      {
        ans++;
        i += 4;
      }
    }
    if (pp[i] == 'A')
    {
      if (pp.substr(i, 3) == "Ann")
      {
        ans++;
        i += 2;
      }
    }

    if (pp[i] == 'N')
    {
      if (pp.substr(i, 6) == "Nikita")
      {
        ans++;
        i += 5;
      }
    }
    else
      continue;
  }

  if (ans == 1)
  {
    cout << "YES\n";
  }
  else
    cout << "NO\n";
}