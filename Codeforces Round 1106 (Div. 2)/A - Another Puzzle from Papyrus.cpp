#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n, c;
  cin >> n >> c;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  long long ans = 0;
  bool need_reorder = false;
  for (int i = 0; i < n; i++) {
    if (a[i] < b[i]) need_reorder = true;
    ans += a[i];
    ans -= b[i];
  }
  if (need_reorder) {
    need_reorder = false;
    ans += c;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
      if (a[i] < b[i]) need_reorder = true;
    }
  }
  if (need_reorder) cout << "-1\n";
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
