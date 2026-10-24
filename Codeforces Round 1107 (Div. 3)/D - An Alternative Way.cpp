#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  for (int i = 1; i < n; i++) a[i] += a[i - 1];
  for (int i = 1; i < n; i++) b[i] += b[i - 1];
  bool found = true;
  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      found = false;
      break;
    }
  }
  if (found) cout << "YES\n";
  else cout << "NO\n";
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
