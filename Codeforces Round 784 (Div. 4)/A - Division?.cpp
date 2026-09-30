#include<bits/stdc++.h>
using namespace std;

void solve() {
  int rating;
  cin >> rating;
  int div = 0;
  if (1900 <= rating) div = 1;
  else if (1600 <= rating && rating <= 1899) div = 2;
  else if (1400 <= rating && rating <= 1599) div = 3;
  else div = 4;
  cout << "Division " << div << "\n";
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
