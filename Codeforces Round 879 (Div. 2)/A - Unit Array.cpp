#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int positive_cnt = 0;
  int negative_cnt = 0;
  for (int x : a) {
    if (x == 1) positive_cnt++;
    else negative_cnt++;
  }
  int operations = 0;
  while (positive_cnt < negative_cnt || negative_cnt % 2 == 1) {
    operations++;
    positive_cnt++;
    negative_cnt--;
  }
  cout << operations << "\n";
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
