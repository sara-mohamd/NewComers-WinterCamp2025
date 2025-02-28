#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testCases;
  cin >> testCases;
  while (testCases--)
  {
    int n, a;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a;
      sum += a;
    }
    cout << abs(sum) << endl;
  }
}