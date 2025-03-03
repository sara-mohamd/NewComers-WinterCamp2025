#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, black = 0, white = 0, maxB = 0, minW = INT_MAX;
    string s;
    // 5  3 BBWBW
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'W')
      {
        black = 0;
        minW = min(minW, ++white);
      }
      else
      {
        white = 0;
        maxB = max(maxB, ++black);
      }
    }
    // cout << maxB << '\t' << minW << endl;
    (maxB >= k) ? cout << "0\n" : (maxB - k == 0) ? cout << minW << endl
                                                  : cout << k - maxB << endl;
  }
}