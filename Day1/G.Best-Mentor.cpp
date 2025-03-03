#include <bits/stdc++.h>
using namespace std;
bool palindrome(long long num)
{
  long long temp = num, newNum = 0;
  while (temp != 0)
  {
    newNum *= 10;
    newNum += (temp % 10);
    temp /= 10;
  }
  // return newNum;
  return newNum == num;
}
bool sumD(long long num)
{
  long long temp = num;
  double newNum = 0;
  while (temp != 0)
  {
    newNum += (temp % 10);
    temp /= 10;
  }
  return (num / newNum == floor(num / newNum));
}
int main()
{
  long long n;
  cin >> n;

  if (sumD(n) && palindrome(n))
    cout << "Best mentor.\n";
  else if (sumD(n) || palindrome(n))
    cout << "He's good.\n";
  else
    cout << "He'll be fired.\n";
}