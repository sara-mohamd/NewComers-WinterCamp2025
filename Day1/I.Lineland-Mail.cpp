#include <bits/stdc++.h>
using namespace std;
int main()
{
  int size;
  cin >> size;
  int arr[size + 2];
  for (int i = 1; i <= size; i++)
    cin >> arr[i];
  arr[size + 1] = arr[1];
  arr[0] = arr[size];
  for (int i = 1; i <= size; i++)
  {
    // [max_int, -5, -2, 2, 7, min_int]
    // [-5, -2, 2, 7]
    // [ ]
    int mn = min(abs(arr[i - 1] - arr[i]), abs(arr[i + 1] - arr[i]));
    int mx = max(abs(arr[1] - arr[i]), abs(arr[size] - arr[i]));

    cout << mn << " " << mx << endl;
  }
}