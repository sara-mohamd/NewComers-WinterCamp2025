#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  char c;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> c;
    if (c >= 'A' && c <= 'Z')
      cout << "is upper\n";
    else if (c >= 'a' && c <= 'z')
      cout << "is lower\n";
    else
      cout << "is digit\n";
  }
}