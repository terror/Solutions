#include <bits/stdc++.h>

using namespace std;

int main() {
  string s; cin >> s;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == 'a') {
      cout << s.substr(i, s.length()) << "\n";
      break;
    }
  }
}
