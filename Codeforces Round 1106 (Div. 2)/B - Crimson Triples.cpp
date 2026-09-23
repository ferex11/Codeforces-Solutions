#include<bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  long long ans = 0;
  for (long long b = 1; b <= n; b++) {
    ans += 1LL * (n / b) * (n / b);
  }
  cout << ans << "\n";
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
