#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int cnt2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 2) cnt2++;
  }
  if (cnt2 % 2 != 0) {
    cout << "-1\n";
    return;
  }
  int cur_two = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] == 2) cur_two++;
    if (cnt2 / 2 == cur_two) {
      cout << i + 1 << "\n";
      return;
    }
  }
  cout << "-1\n";
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
