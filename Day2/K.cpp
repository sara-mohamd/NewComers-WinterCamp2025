#include <bits/stdc++.h>
using namespace std;

int main(){

    string txt = R"(qwertyuiop
                    asdfghjkl;
                    zxcvbnm,./)";

    char r;
    string s;
    cin >> r;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
      int it = txt.find(s[i]);
      if(r == 'R')
        cout << txt[it - 1];
      else
        cout << txt[it +1];
    }
}