#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int odd = 0;
  int even = 0;
  for (int x : a) {
    if (x % 2 == 0) even++;
    else odd++;
  }
  if (odd == 0 || even == 0) {
    cout << "YES\n";
    return;
  }
  for (int i = 0; i < n; i += 2) a[i]++;
  odd = 0;
  even = 0;
  for (int x : a) {
    if (x % 2 == 0) even++;
    else odd++;
  }
  if (odd == 0 || even == 0) {
    cout << "YES\n";
    return;
  }
  for (int i = 1; i < n; i += 2) a[i]++;
  odd = 0;
  even = 0;
  for (int x : a) {
    if (x % 2 == 0) even++;
    else odd++;
  }
  if (odd == 0 || even == 0) cout << "YES\n";
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
