#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[i] = x % 2;
  }
  int cnt = 0;
  for (int i = 1; i < n; i++) {
    if (a[i - 1] == a[i]) cnt++;
  }
  cout << cnt << "\n";
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
