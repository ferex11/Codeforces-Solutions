#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int i = 0;
  int j = n - 1;
  while (i < n / 2 && s[i] != s[j]) {
    i++;
    j--;
  }
  cout << j - i + 1 << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
