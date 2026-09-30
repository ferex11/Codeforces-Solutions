#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  vector<int> f(n + 1, 0);
  for (int x : a) f[x]++;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (f[i] >= 3) {
      ans = i;
      break;
    }
  }
  if (!ans) cout << "-1\n";
  else cout << ans << "\n";
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
