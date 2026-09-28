#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

bool check(long long x) {
  int cnt = 0;
  while (x > 0) {
    if (x % 10 != 0) cnt++;
    x /= 10;
  }
  return cnt == 1;
}

void solve() {
  long long n;
  cin >> n;
  long long cnt = 0;
  for (int i = 0; i < (int) v.size(); i++) {
    if (v[i] <= n) cnt++;
    else break;
  }
  cout << cnt << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  for (long long i = 1; i <= 999999; i++)
    if (check(i)) v.push_back(i);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
