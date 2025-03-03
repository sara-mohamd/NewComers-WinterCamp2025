#include <bits/stdc++.h>
using namespace std;
bool isValid(int a, int msk)
{
  string number = to_string(a), ans = "";
  for (int i = 0; i < number.length(); i++)
    if (number[i] == '4' || number[i] == '7')
      ans += number[i];

  return ans == to_string(msk);
}

int main()
{
  int a, b;
  cin >> a >> b;

  while (!isValid(++a, b))
    continue;

  cout << a << endl;
}
