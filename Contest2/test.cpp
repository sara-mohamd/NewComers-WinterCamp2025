#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    bool flag = 1;
    int n, ng = 0, zeros = 0;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] == 0)
      {
        zeros++;
        flag = 0;
      }
      if (arr[i] < 0)
        ng++;
    }
    if (ng % 2 != 0 || zeros > 0)
      cout << 0 << endl;
    else if (flag)
      cout << "1\n1 0\n";
  }
}