#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  int mx = a[n - 1];
  int mn = a[0];
  if (mx == mn) cout << "NO\n";
  else {
    cout << "YES\n";
    cout << mx << " ";
    for (int i = 0; i < n - 1; i++) cout << a[i] << " ";
    cout << "\n";
  }
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
