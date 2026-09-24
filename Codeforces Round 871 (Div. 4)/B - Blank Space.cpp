#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int max_space = 0;
  int cnt = 0;
  for (int x : a) {
    if (x == 0) {
      cnt++;
      max_space = max(max_space, cnt);
    } else cnt = 0;
  }
  cout << max_space << "\n";
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
