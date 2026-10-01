#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> f(26, 0);
  for (char ch : s) f[ch - 'a']++;
  int odd_freq = 0;
  for (int x : f) odd_freq += x % 2;
  if (odd_freq > k + 1) cout << "NO\n";
  else cout << "YES\n";
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
