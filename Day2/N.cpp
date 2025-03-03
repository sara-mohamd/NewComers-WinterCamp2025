#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size;
  cin >> size;
  int a[size + 2];
  a[0] = 0;
  a[1] = 0;
  for (size_t i = 2; i <= size + 1; i++)
  {
    cin >> a[i];
  }

  for (int i = 2; i <= size; i++)
  {
    if ((a[i + 1] - a[i]) < 0)
    {
      int temp = a[i + 1];
      a[i + 1] = a[i];
      a[i] = temp;
      i -= 2;
    }
    else
      continue;
  }
  for (int i = 2; i <= size + 1; i++)
    cout << a[i] << ' ';
}