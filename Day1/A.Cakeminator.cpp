#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r, c, sum = 0, l;
  cin >> r >> c;

  vector<string> s(r);
  for (int i = 0; i < r; i++)
  {
    cin >> s[i];
  }
  for (int i = 0; i < r; i++)
  {
    l = 0;

    if (s[i].find('S') == string::npos)
      for (int j = 0; j < c; j++)
      {
        if (s[i][j] == 'X')
          continue;
        else if (s[i][j] == '.')
        {
          s[i][j] = 'X';
          l++;
        }
      }
    sum += l;
  }

  for (int j = 0; j < r; j++)
  {
    l = 0;
    string s2 = "";

    for (int i = 0; i < c; i++)
    {
      s2 += s[i][j];
      cout << s[i][j] << " ";
    }
    cout << "\n-----------\n";

    // if (s2.find('S') == string::npos)
    //   for (int i = 0; i < c; i++)
    //     if (s2 == 'X')
    //       continue;
    //     else if (s[i][j] == '.')
    //     {
    //       s[i][j] = 'X';
    //       l++;
    //     }
    // sum += l;
  }

  // cout << sum << endl;
}